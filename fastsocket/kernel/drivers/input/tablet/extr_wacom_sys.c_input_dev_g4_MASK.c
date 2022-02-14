
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wacom_wac {int dummy; } ;
struct input_dev {int* evbit; int* mscbit; int* keybit; } ;


 int FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

void FUNC_2(struct input_dev *VAR_7, struct wacom_wac *VAR_8)
{
 VAR_7->evbit[0] |= FUNC_0(VAR_5);
 VAR_7->mscbit[0] |= FUNC_0(VAR_6);
 VAR_7->keybit[FUNC_1(VAR_2)] |= FUNC_0(VAR_4);
 VAR_7->keybit[FUNC_1(VAR_3)] |= FUNC_0(VAR_0) |
  FUNC_0(VAR_1);
}
