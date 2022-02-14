
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int used_total; int seq_no; void* command_code; void* cmdlength; } ;
struct TYPE_5__ {TYPE_1__ hdr; } ;
struct TYPE_6__ {TYPE_2__ setadapterparms; } ;
struct qeth_ipa_cmd {TYPE_3__ data; } ;
struct qeth_cmd_buffer {scalar_t__ data; } ;
struct qeth_card {int dummy; } ;
typedef void* __u32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct qeth_cmd_buffer* FUNC_0 (struct qeth_card*,int ,int ) ;

struct qeth_cmd_buffer *FUNC_1(struct qeth_card *VAR_3,
  __u32 VAR_4, __u32 VAR_5)
{
 struct qeth_cmd_buffer *VAR_6;
 struct qeth_ipa_cmd *VAR_7;

 VAR_6 = FUNC_0(VAR_3, VAR_0,
         VAR_2);
 VAR_7 = (struct qeth_ipa_cmd *)(VAR_6->data+VAR_1);
 VAR_7->data.setadapterparms.hdr.cmdlength = VAR_5;
 VAR_7->data.setadapterparms.hdr.command_code = VAR_4;
 VAR_7->data.setadapterparms.hdr.used_total = 1;
 VAR_7->data.setadapterparms.hdr.seq_no = 1;

 return VAR_6;
}
