
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct agp_controller {scalar_t__ pid; struct agp_controller* next; } ;
typedef scalar_t__ pid_t ;
struct TYPE_2__ {struct agp_controller* controllers; } ;


 TYPE_1__ VAR_0 ;

__attribute__((used)) static struct agp_controller *FUNC_0(pid_t VAR_1)
{
 struct agp_controller *VAR_2;

 VAR_2 = VAR_0.controllers;

 while (VAR_2 != ((void*)0)) {
  if (VAR_2->pid == VAR_1)
   return VAR_2;
  VAR_2 = VAR_2->next;
 }

 return ((void*)0);
}
