
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct qeth_ipacmd_setadpparms {int dummy; } ;
struct TYPE_4__ {int mode; } ;
struct TYPE_5__ {TYPE_1__ data; } ;
struct TYPE_6__ {TYPE_2__ setadapterparms; } ;
struct qeth_ipa_cmd {TYPE_3__ data; } ;
struct qeth_cmd_buffer {scalar_t__ data; } ;
struct qeth_card {int dummy; } ;
typedef int __u32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct qeth_cmd_buffer* FUNC_1 (struct qeth_card*,int ,int) ;
 int FUNC_2 (struct qeth_card*,struct qeth_cmd_buffer*,int ,int *) ;

__attribute__((used)) static int FUNC_3(struct qeth_card *VAR_3, __u32 VAR_4,
     __u32 VAR_5)
{
 int VAR_6;
 struct qeth_cmd_buffer *VAR_7;
 struct qeth_ipa_cmd *VAR_8;

 FUNC_0(VAR_1, 4, "adpmode");

 VAR_7 = FUNC_1(VAR_3, VAR_4,
       sizeof(struct qeth_ipacmd_setadpparms));
 VAR_8 = (struct qeth_ipa_cmd *)(VAR_7->data+VAR_0);
 VAR_8->data.setadapterparms.data.mode = VAR_5;
 VAR_6 = FUNC_2(VAR_3, VAR_7, VAR_2,
          ((void*)0));
 return VAR_6;
}
