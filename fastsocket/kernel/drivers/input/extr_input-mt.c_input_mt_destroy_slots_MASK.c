
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {scalar_t__ trkid; scalar_t__ slot; scalar_t__ mtsize; int * mt; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct input_dev *VAR_0)
{
 FUNC_0(VAR_0->mt);
 VAR_0->mt = ((void*)0);
 VAR_0->mtsize = 0;
 VAR_0->slot = 0;
 VAR_0->trkid = 0;
}
