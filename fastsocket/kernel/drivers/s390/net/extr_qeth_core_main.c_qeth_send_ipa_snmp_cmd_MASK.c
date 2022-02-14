
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct qeth_cmd_buffer {int data; } ;
struct TYPE_2__ {scalar_t__ ulp_connection_r; } ;
struct qeth_card {TYPE_1__ token; } ;


 scalar_t__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int ,scalar_t__*,int) ;
 int FUNC_7 (struct qeth_card*,int,struct qeth_cmd_buffer*,int (*) (struct qeth_card*,struct qeth_reply*,unsigned long),void*) ;

__attribute__((used)) static int FUNC_8(struct qeth_card *VAR_4,
  struct qeth_cmd_buffer *VAR_5, int VAR_6,
  int (*VAR_7)(struct qeth_card *, struct qeth_reply *,
   unsigned long),
  void *VAR_8)
{
 u16 VAR_9, VAR_10;

 FUNC_0(VAR_3, 4, "sendsnmp");

 FUNC_6(VAR_5->data, VAR_0, VAR_1);
 FUNC_6(FUNC_1(VAR_5->data),
        &VAR_4->token.ulp_connection_r, VAR_2);

 VAR_9 = (u32) VAR_1 + VAR_6;
 VAR_10 = (u32) VAR_6;
 FUNC_6(FUNC_5(VAR_5->data), &VAR_9, 2);
 FUNC_6(FUNC_2(VAR_5->data), &VAR_10, 2);
 FUNC_6(FUNC_3(VAR_5->data), &VAR_10, 2);
 FUNC_6(FUNC_4(VAR_5->data), &VAR_10, 2);
 return FUNC_7(VAR_4, VAR_1 + VAR_6, VAR_5,
          VAR_7, VAR_8);
}
