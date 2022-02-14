
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int prim_version_no; int param_count; int prot_version; scalar_t__ ipa_enabled; scalar_t__ ipa_supported; void* rel_adapter_no; int adapter_type; int seqno; int initiator; void* command; } ;
struct qeth_ipa_cmd {TYPE_4__ hdr; } ;
struct TYPE_7__ {scalar_t__ layer2; } ;
struct TYPE_6__ {scalar_t__ portno; int link_type; } ;
struct TYPE_5__ {int ipa; } ;
struct qeth_card {TYPE_3__ options; TYPE_2__ info; TYPE_1__ seqno; } ;
typedef enum qeth_prot_versions { ____Placeholder_qeth_prot_versions } qeth_prot_versions ;
typedef void* __u8 ;


 int VAR_0 ;
 int FUNC_0 (struct qeth_ipa_cmd*,int ,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct qeth_card *VAR_1,
  struct qeth_ipa_cmd *VAR_2, __u8 VAR_3,
  enum qeth_prot_versions VAR_4)
{
 FUNC_0(VAR_2, 0, sizeof(struct qeth_ipa_cmd));
 VAR_2->hdr.command = VAR_3;
 VAR_2->hdr.initiator = VAR_0;
 VAR_2->hdr.seqno = VAR_1->seqno.ipa;
 VAR_2->hdr.adapter_type = FUNC_1(VAR_1->info.link_type);
 VAR_2->hdr.rel_adapter_no = (__u8) VAR_1->info.portno;
 if (VAR_1->options.layer2)
  VAR_2->hdr.prim_version_no = 2;
 else
  VAR_2->hdr.prim_version_no = 1;
 VAR_2->hdr.param_count = 1;
 VAR_2->hdr.prot_version = VAR_4;
 VAR_2->hdr.ipa_supported = 0;
 VAR_2->hdr.ipa_enabled = 0;
}
