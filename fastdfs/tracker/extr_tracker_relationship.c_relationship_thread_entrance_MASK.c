
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int leader_index; int * servers; } ;


 scalar_t__ VAR_0 ;
 double VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_2 ;
 int * VAR_3 ;
 TYPE_1__ VAR_4 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;

__attribute__((used)) static void *FUNC_7(void* VAR_5)
{


 int VAR_6;
 int VAR_7;

 VAR_6 = 0;
 while (VAR_2)
 {
  VAR_7 = 1;
  if (VAR_4.servers != ((void*)0))
  {
   if (VAR_4.leader_index < 0)
   {
    if (FUNC_3() != 0)
    {
     VAR_7 = 1 + (int)((double)FUNC_1()
     * (double)10 / VAR_1);
    }
   }
   else
   {
    if (FUNC_2() == 0)
    {
     VAR_6 = 0;
    }
    else
    {
     VAR_6++;
     if (VAR_6 >= 3)
     {
      VAR_4.leader_index = -1;
      VAR_6 = 0;
     }
    }
   }
  }

  if (VAR_3 != ((void*)0))
  {
   FUNC_5();

   FUNC_0(VAR_3);
   VAR_3 = ((void*)0);

   FUNC_6();
  }

  FUNC_4(VAR_7);
 }

 return ((void*)0);
}
