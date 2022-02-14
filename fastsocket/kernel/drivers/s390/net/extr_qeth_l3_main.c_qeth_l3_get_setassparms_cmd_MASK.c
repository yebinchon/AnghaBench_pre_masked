
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int assist_no; scalar_t__ seq_no; scalar_t__ return_code; void* command_code; void* length; } ;
struct TYPE_5__ {TYPE_1__ hdr; } ;
struct TYPE_6__ {TYPE_2__ setassparms; } ;
struct qeth_ipa_cmd {TYPE_3__ data; } ;
struct qeth_cmd_buffer {scalar_t__ data; } ;
struct qeth_card {int dummy; } ;
typedef enum qeth_prot_versions { ____Placeholder_qeth_prot_versions } qeth_prot_versions ;
typedef enum qeth_ipa_funcs { ____Placeholder_qeth_ipa_funcs } qeth_ipa_funcs ;
typedef void* __u16 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int,char*) ;
 int VAR_2 ;
 struct qeth_cmd_buffer* FUNC_1 (struct qeth_card*,int ,int) ;

__attribute__((used)) static struct qeth_cmd_buffer *FUNC_2(
 struct qeth_card *VAR_3, enum qeth_ipa_funcs VAR_4, __u16 VAR_5,
 __u16 VAR_6, enum qeth_prot_versions VAR_7)
{
 struct qeth_cmd_buffer *VAR_8;
 struct qeth_ipa_cmd *VAR_9;

 FUNC_0(VAR_2, 4, "getasscm");
 VAR_8 = FUNC_1(VAR_3, VAR_0, VAR_7);

 VAR_9 = (struct qeth_ipa_cmd *)(VAR_8->data+VAR_1);
 VAR_9->data.setassparms.hdr.assist_no = VAR_4;
 VAR_9->data.setassparms.hdr.length = 8 + VAR_6;
 VAR_9->data.setassparms.hdr.command_code = VAR_5;
 VAR_9->data.setassparms.hdr.return_code = 0;
 VAR_9->data.setassparms.hdr.seq_no = 0;

 return VAR_8;
}
