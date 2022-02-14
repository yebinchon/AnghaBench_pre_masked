
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qeth_cmd_buffer {int data; } ;
struct TYPE_2__ {int ulp_connection_r; } ;
struct qeth_card {TYPE_1__ token; } ;


 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int,char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int *,scalar_t__) ;
 int FUNC_3 (struct qeth_card*,scalar_t__,struct qeth_cmd_buffer*,int (*) (struct qeth_card*,struct qeth_reply*,unsigned long),void*) ;

__attribute__((used)) static int FUNC_4(struct qeth_card *VAR_4,
  struct qeth_cmd_buffer *VAR_5, int VAR_6,
  int (*VAR_7)(struct qeth_card *, struct qeth_reply *,
   unsigned long),
  void *VAR_8)
{
 FUNC_0(VAR_3, 4, "sendarp");

 FUNC_2(VAR_5->data, VAR_0, VAR_1);
 FUNC_2(FUNC_1(VAR_5->data),
        &VAR_4->token.ulp_connection_r, VAR_2);
 return FUNC_3(VAR_4, VAR_1 + VAR_6, VAR_5,
          VAR_7, VAR_8);
}
