
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct qeth_reply {int dummy; } ;
struct TYPE_15__ {int flags_32bit; } ;
struct TYPE_14__ {scalar_t__ return_code; scalar_t__ assist_no; scalar_t__ command_code; } ;
struct TYPE_16__ {TYPE_6__ data; TYPE_5__ hdr; } ;
struct TYPE_17__ {TYPE_7__ setassparms; } ;
struct TYPE_13__ {scalar_t__ return_code; scalar_t__ prot_version; int ipa_enabled; } ;
struct qeth_ipa_cmd {TYPE_8__ data; TYPE_4__ hdr; } ;
struct TYPE_18__ {int tx_csum_mask; int csum_mask; } ;
struct TYPE_11__ {int enabled_funcs; } ;
struct TYPE_10__ {int enabled_funcs; } ;
struct TYPE_12__ {TYPE_2__ ipa6; TYPE_1__ ipa4; } ;
struct qeth_card {TYPE_9__ info; TYPE_3__ options; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int,char*) ;
 int FUNC_1 (int ,int,char*,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_2(struct qeth_card *VAR_6,
   struct qeth_reply *VAR_7, unsigned long VAR_8)
{
 struct qeth_ipa_cmd *VAR_9;

 FUNC_0(VAR_5, 4, "defadpcb");

 VAR_9 = (struct qeth_ipa_cmd *) VAR_8;
 if (VAR_9->hdr.return_code == 0) {
  VAR_9->hdr.return_code = VAR_9->data.setassparms.hdr.return_code;
  if (VAR_9->hdr.prot_version == VAR_3)
   VAR_6->options.ipa4.enabled_funcs = VAR_9->hdr.ipa_enabled;
  if (VAR_9->hdr.prot_version == VAR_4)
   VAR_6->options.ipa6.enabled_funcs = VAR_9->hdr.ipa_enabled;
 }
 if (VAR_9->data.setassparms.hdr.assist_no == VAR_1 &&
     VAR_9->data.setassparms.hdr.command_code == VAR_0) {
  VAR_6->info.csum_mask = VAR_9->data.setassparms.data.flags_32bit;
  FUNC_1(VAR_5, 3, "csum:%d", VAR_6->info.csum_mask);
 }
 if (VAR_9->data.setassparms.hdr.assist_no == VAR_2 &&
     VAR_9->data.setassparms.hdr.command_code == VAR_0) {
  VAR_6->info.tx_csum_mask =
   VAR_9->data.setassparms.data.flags_32bit;
  FUNC_1(VAR_5, 3, "tcsu:%d", VAR_6->info.tx_csum_mask);
 }

 return 0;
}
