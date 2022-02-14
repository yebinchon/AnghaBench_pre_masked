
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wacom_wac {int dummy; } ;
struct input_dev {int* keybit; } ;


 int FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

void FUNC_2(struct input_dev *VAR_10, struct wacom_wac *VAR_11)
{
 VAR_10->keybit[FUNC_1(VAR_5)] |= FUNC_0(VAR_0) | FUNC_0(VAR_1) | FUNC_0(VAR_4);
 VAR_10->keybit[FUNC_1(VAR_5)] |= FUNC_0(VAR_7) | FUNC_0(VAR_8) | FUNC_0(VAR_9);
 VAR_10->keybit[FUNC_1(VAR_6)] |= FUNC_0(VAR_2) | FUNC_0(VAR_3);
}
