
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct qeth_reply {int dummy; } ;
struct TYPE_11__ {int lan_type; int supported_cmds; } ;
struct TYPE_12__ {TYPE_4__ query_cmds_supp; } ;
struct TYPE_13__ {TYPE_5__ data; } ;
struct TYPE_14__ {TYPE_6__ setadapterparms; } ;
struct qeth_ipa_cmd {TYPE_7__ data; } ;
struct TYPE_9__ {int supported_funcs; } ;
struct TYPE_10__ {TYPE_2__ adp; } ;
struct TYPE_8__ {int link_type; } ;
struct qeth_card {TYPE_3__ options; TYPE_1__ info; } ;


 int FUNC_0 (int ,int,char*) ;
 int FUNC_1 (int ,int,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct qeth_card*,struct qeth_reply*,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct qeth_card *VAR_2,
  struct qeth_reply *VAR_3, unsigned long VAR_4)
{
 struct qeth_ipa_cmd *VAR_5;

 FUNC_0(VAR_1, 3, "quyadpcb");

 VAR_5 = (struct qeth_ipa_cmd *) VAR_4;
 if (VAR_5->data.setadapterparms.data.query_cmds_supp.lan_type & 0x7f) {
  VAR_2->info.link_type =
        VAR_5->data.setadapterparms.data.query_cmds_supp.lan_type;
  FUNC_1(VAR_0, 2, "lnk %d", VAR_2->info.link_type);
 }
 VAR_2->options.adp.supported_funcs =
  VAR_5->data.setadapterparms.data.query_cmds_supp.supported_cmds;
 return FUNC_2(VAR_2, VAR_3, (unsigned long)VAR_5);
}
