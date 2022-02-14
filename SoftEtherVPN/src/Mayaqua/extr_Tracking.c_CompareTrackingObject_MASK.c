
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ Address; } ;
typedef TYPE_1__ TRACKING_OBJECT ;



int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 TRACKING_OBJECT *VAR_2, *VAR_3;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }
 VAR_2 = *(TRACKING_OBJECT **)VAR_0;
 VAR_3 = *(TRACKING_OBJECT **)VAR_1;
 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return 0;
 }

 if (VAR_2->Address > VAR_3->Address)
 {
  return 1;
 }
 if (VAR_2->Address == VAR_3->Address)
 {
  return 0;
 }
 return -1;
}
