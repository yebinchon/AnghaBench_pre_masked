
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct agp_controller {struct agp_controller* next; } ;
typedef int pid_t ;
struct TYPE_2__ {struct agp_controller* controllers; } ;


 TYPE_1__ VAR_0 ;
 int * FUNC_0 (struct agp_controller*,int ) ;

__attribute__((used)) static struct agp_controller *FUNC_1(pid_t VAR_1)
{
 struct agp_controller *VAR_2;

 VAR_2 = VAR_0.controllers;

 while (VAR_2 != ((void*)0)) {
  if ((FUNC_0(VAR_2, VAR_1)) != ((void*)0))
   return VAR_2;
  VAR_2 = VAR_2->next;
 }

 return ((void*)0);
}
