
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * unique_id; } ;
struct TYPE_5__ {TYPE_1__ create_destroy_addr; } ;
struct qeth_ipa_cmd {TYPE_2__ data; } ;
struct qeth_cmd_buffer {scalar_t__ data; } ;
struct TYPE_6__ {int unique_id; } ;
struct qeth_card {TYPE_3__ info; } ;
typedef int __u16 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 struct qeth_cmd_buffer* FUNC_1 (struct qeth_card*,int ,int ) ;
 int VAR_4 ;
 int FUNC_2 (struct qeth_card*,struct qeth_cmd_buffer*,int ,int *) ;

__attribute__((used)) static int FUNC_3(struct qeth_card *VAR_5)
{
 int VAR_6 = 0;
 struct qeth_cmd_buffer *VAR_7;
 struct qeth_ipa_cmd *VAR_8;

 FUNC_0(VAR_3, 2, "hsrmac");

 VAR_7 = FUNC_1(VAR_5, VAR_0,
         VAR_2);
 VAR_8 = (struct qeth_ipa_cmd *)(VAR_7->data+VAR_1);
 *((__u16 *) &VAR_8->data.create_destroy_addr.unique_id[6]) =
   VAR_5->info.unique_id;

 VAR_6 = FUNC_2(VAR_5, VAR_7, VAR_4,
    ((void*)0));
 return VAR_6;
}
