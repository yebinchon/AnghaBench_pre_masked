
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dock_data {int ds; int event; int handle; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct dock_data*) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
 struct dock_data *VAR_1 = (struct dock_data *)VAR_0;

 FUNC_0(VAR_1->handle, VAR_1->event, VAR_1->ds);
 FUNC_1(VAR_1);
}
