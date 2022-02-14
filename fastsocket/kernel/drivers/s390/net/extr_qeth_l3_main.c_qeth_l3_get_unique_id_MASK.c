
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
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct qeth_cmd_buffer* FUNC_1 (struct qeth_card*,int ,int ) ;
 int FUNC_2 (struct qeth_card*,int ) ;
 int VAR_7 ;
 int FUNC_3 (struct qeth_card*,struct qeth_cmd_buffer*,int ,int *) ;

__attribute__((used)) static int FUNC_4(struct qeth_card *VAR_8)
{
 int VAR_9 = 0;
 struct qeth_cmd_buffer *VAR_10;
 struct qeth_ipa_cmd *VAR_11;

 FUNC_0(VAR_4, 2, "guniqeid");

 if (!FUNC_2(VAR_8, VAR_1)) {
  VAR_8->info.unique_id = VAR_5 |
     VAR_6;
  return 0;
 }

 VAR_10 = FUNC_1(VAR_8, VAR_0,
         VAR_3);
 VAR_11 = (struct qeth_ipa_cmd *)(VAR_10->data+VAR_2);
 *((__u16 *) &VAR_11->data.create_destroy_addr.unique_id[6]) =
   VAR_8->info.unique_id;

 VAR_9 = FUNC_3(VAR_8, VAR_10, VAR_7, ((void*)0));
 return VAR_9;
}
