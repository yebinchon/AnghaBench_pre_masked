
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {char* path; scalar_t__ size; int * data; } ;
struct TYPE_3__ {char* path; scalar_t__ size; int * data; } ;


 int FUNC_0 (int *) ;
 TYPE_2__ VAR_0 ;
 TYPE_1__ VAR_1 ;

bool FUNC_1(void)
{
   if (VAR_1.data)
   {
      FUNC_0(VAR_1.data);
      VAR_1.data = ((void*)0);
   }

   VAR_1.path[0] = '\0';
   VAR_1.size = 0;

   if (VAR_0.data)
   {
      FUNC_0(VAR_0.data);
      VAR_0.data = ((void*)0);
   }

   VAR_0.path[0] = '\0';
   VAR_0.size = 0;

   return 1;
}
