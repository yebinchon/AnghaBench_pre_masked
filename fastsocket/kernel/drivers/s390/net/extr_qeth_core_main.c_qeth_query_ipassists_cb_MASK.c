
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct qeth_reply {int dummy; } ;
struct TYPE_10__ {int return_code; scalar_t__ prot_version; int ipa_enabled; int ipa_supported; } ;
struct qeth_ipa_cmd {TYPE_5__ hdr; } ;
struct TYPE_7__ {int enabled_funcs; int supported_funcs; } ;
struct TYPE_6__ {int enabled_funcs; int supported_funcs; } ;
struct TYPE_8__ {TYPE_2__ ipa6; TYPE_1__ ipa4; } ;
struct qeth_card {TYPE_4__* gdev; TYPE_3__ options; } ;
struct TYPE_9__ {int dev; } ;




 int VAR_0 ;
 int FUNC_0 (int,char*,int ,...) ;
 int FUNC_1 (int ,int,char*) ;
 int FUNC_2 (int ,int,char*,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct qeth_card *VAR_4,
  struct qeth_reply *VAR_5, unsigned long VAR_6)
{
 struct qeth_ipa_cmd *VAR_7;

 FUNC_1(VAR_3, 2, "qipasscb");

 VAR_7 = (struct qeth_ipa_cmd *) VAR_6;

 switch (VAR_7->hdr.return_code) {
 case 128:
 case 129:
  FUNC_1(VAR_3, 2, "ipaunsup");
  VAR_4->options.ipa4.supported_funcs |= VAR_0;
  VAR_4->options.ipa6.supported_funcs |= VAR_0;
  return -0;
 default:
  if (VAR_7->hdr.return_code) {
   FUNC_0(1, "%s IPA_CMD_QIPASSIST: Unhandled "
      "rc=%d\n",
      FUNC_3(&VAR_4->gdev->dev),
      VAR_7->hdr.return_code);
   return 0;
  }
 }

 if (VAR_7->hdr.prot_version == VAR_1) {
  VAR_4->options.ipa4.supported_funcs = VAR_7->hdr.ipa_supported;
  VAR_4->options.ipa4.enabled_funcs = VAR_7->hdr.ipa_enabled;
 } else if (VAR_7->hdr.prot_version == VAR_2) {
  VAR_4->options.ipa6.supported_funcs = VAR_7->hdr.ipa_supported;
  VAR_4->options.ipa6.enabled_funcs = VAR_7->hdr.ipa_enabled;
 } else
  FUNC_0(1, "%s IPA_CMD_QIPASSIST: Flawed LIC detected"
     "\n", FUNC_3(&VAR_4->gdev->dev));
 FUNC_1(VAR_3, 2, "suppenbl");
 FUNC_2(VAR_3, 2, "%x", VAR_7->hdr.ipa_supported);
 FUNC_2(VAR_3, 2, "%x", VAR_7->hdr.ipa_enabled);
 return 0;
}
