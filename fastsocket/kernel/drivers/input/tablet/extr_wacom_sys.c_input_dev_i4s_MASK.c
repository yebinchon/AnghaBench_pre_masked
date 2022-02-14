
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wacom_wac {int dummy; } ;
struct input_dev {int* keybit; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct input_dev*,int ,int,int,int ,int ) ;

void FUNC_3(struct input_dev *VAR_11, struct wacom_wac *VAR_12)
{
 VAR_11->keybit[FUNC_1(VAR_8)] |= FUNC_0(VAR_10);
 VAR_11->keybit[FUNC_1(VAR_9)] |= FUNC_0(VAR_1) | FUNC_0(VAR_2) | FUNC_0(VAR_3) | FUNC_0(VAR_4);
 VAR_11->keybit[FUNC_1(VAR_9)] |= FUNC_0(VAR_5) | FUNC_0(VAR_6) | FUNC_0(VAR_7);
 FUNC_2(VAR_11, VAR_0, -900, 899, 0, 0);
}
