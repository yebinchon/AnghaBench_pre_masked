
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int contents; } ;
struct TYPE_3__ {int* children; } ;
 TYPE_2__* VAR_0 ;
 TYPE_1__* VAR_1 ;

int FUNC_0(int VAR_2)
{
 if (VAR_2 < 0)
 {
  switch(VAR_0[(-VAR_2) - 1].contents)
  {
   case 135:
   {
    return 0;
   }
   case 130:



   case 132:



   {
    return 1;
   }
   case 128:
   case 131:
   case 134:
   default:
   {
    return 0;
   }
  }
  return 0;
 }
 if (!FUNC_0(VAR_1[VAR_2].children[0])) return 0;
 if (!FUNC_0(VAR_1[VAR_2].children[1])) return 0;
 return 1;
}
