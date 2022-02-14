
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int Type; int Private; int Object; int Name; } ;
typedef TYPE_1__ SEC_OBJ ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int) ;

SEC_OBJ *FUNC_2(SEC_OBJ *VAR_0)
{
 SEC_OBJ *VAR_1;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_1 = FUNC_1(sizeof(SEC_OBJ));
 VAR_1->Name = FUNC_0(VAR_0->Name);
 VAR_1->Object = VAR_0->Object;
 VAR_1->Private = VAR_0->Private;
 VAR_1->Type = VAR_0->Type;

 return VAR_1;
}
