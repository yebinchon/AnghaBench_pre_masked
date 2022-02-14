
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wacom_wac {int dummy; } ;
struct input_dev {int * keybit; } ;


 int FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_2(struct input_dev *VAR_3, struct wacom_wac *VAR_4)
{
 VAR_3->keybit[FUNC_1(VAR_0)] |= FUNC_0(VAR_0);
 VAR_3->keybit[FUNC_1(VAR_1)] |= FUNC_0(VAR_1);
 VAR_3->keybit[FUNC_1(VAR_2)] |= FUNC_0(VAR_2);
}
