
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct i2o_device {scalar_t__* dev_name; struct i2o_device* prev; struct i2o_device* next; int * owner; TYPE_1__* controller; } ;
struct TYPE_3__ {struct i2o_device* devices; } ;
typedef TYPE_1__ adpt_hba ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(adpt_hba* VAR_1, struct i2o_device *VAR_2)
{
 FUNC_0(&VAR_0);
 VAR_2->controller=VAR_1;
 VAR_2->owner=((void*)0);
 VAR_2->next=VAR_1->devices;
 VAR_2->prev=((void*)0);
 if (VAR_1->devices != ((void*)0)){
  VAR_1->devices->prev=VAR_2;
 }
 VAR_1->devices=VAR_2;
 *VAR_2->dev_name = 0;

 FUNC_1(&VAR_0);
 return 0;
}
