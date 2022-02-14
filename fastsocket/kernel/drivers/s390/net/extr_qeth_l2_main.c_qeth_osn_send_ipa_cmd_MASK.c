
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct qeth_cmd_buffer {int data; } ;
struct qeth_card {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int ,scalar_t__*,int) ;
 int FUNC_6 (struct qeth_card*,scalar_t__,struct qeth_cmd_buffer*) ;
 int FUNC_7 (struct qeth_card*,struct qeth_cmd_buffer*,int ) ;

__attribute__((used)) static int FUNC_8(struct qeth_card *VAR_3,
   struct qeth_cmd_buffer *VAR_4, int VAR_5)
{
 u16 VAR_6, VAR_7;

 FUNC_0(VAR_2, 4, "osndipa");

 FUNC_7(VAR_3, VAR_4, VAR_1);
 VAR_6 = (u16)(VAR_0 + VAR_5);
 VAR_7 = (u16)VAR_5;
 FUNC_5(FUNC_4(VAR_4->data), &VAR_6, 2);
 FUNC_5(FUNC_1(VAR_4->data), &VAR_7, 2);
 FUNC_5(FUNC_2(VAR_4->data), &VAR_7, 2);
 FUNC_5(FUNC_3(VAR_4->data), &VAR_7, 2);
 return FUNC_6(VAR_3, VAR_6, VAR_4);
}
