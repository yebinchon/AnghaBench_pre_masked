
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct qeth_reply {int dummy; } ;
struct TYPE_7__ {int mode; } ;
struct qeth_ipacmd_setadpparms {TYPE_3__ data; } ;
struct TYPE_5__ {scalar_t__ return_code; } ;
struct TYPE_8__ {struct qeth_ipacmd_setadpparms setadapterparms; } ;
struct qeth_ipa_cmd {TYPE_1__ hdr; TYPE_4__ data; } ;
struct TYPE_6__ {int promisc_mode; } ;
struct qeth_card {TYPE_2__ info; } ;


 int FUNC_0 (int ,int,char*) ;
 int FUNC_1 (int ,int,char*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct qeth_card*,struct qeth_reply*,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct qeth_card *VAR_2,
  struct qeth_reply *VAR_3, unsigned long VAR_4)
{
 struct qeth_ipa_cmd *VAR_5;
 struct qeth_ipacmd_setadpparms *VAR_6;

 FUNC_0(VAR_1, 4, "prmadpcb");

 VAR_5 = (struct qeth_ipa_cmd *) VAR_4;
 VAR_6 = &(VAR_5->data.setadapterparms);

 FUNC_2(VAR_2, VAR_3, (unsigned long)VAR_5);
 if (VAR_5->hdr.return_code) {
  FUNC_1(VAR_1, 4, "prmrc%2.2x", VAR_5->hdr.return_code);
  VAR_6->data.mode = VAR_0;
 }
 VAR_2->info.promisc_mode = VAR_6->data.mode;
 return 0;
}
