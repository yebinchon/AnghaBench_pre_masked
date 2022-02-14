
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

void FUNC_2(struct input_dev *VAR_4, struct wacom_wac *VAR_5)
{
 VAR_4->keybit[FUNC_1(VAR_0)] |= FUNC_0(VAR_3) |
  FUNC_0(VAR_1) | FUNC_0(VAR_2);
}
