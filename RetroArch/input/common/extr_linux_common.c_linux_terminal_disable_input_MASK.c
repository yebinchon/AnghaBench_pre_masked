
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int member_0; } ;
struct sigaction {int sa_flags; int sa_mask; int sa_handler; TYPE_1__ member_0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (int ,struct sigaction*,int *) ;
 int FUNC_6 (int *) ;

bool FUNC_7(void)
{
   struct sigaction VAR_12 = {0};


   if (!FUNC_2(0))
      return 0;

   if (!FUNC_4())
      return 0;

   if (FUNC_1(0, VAR_0, VAR_1) < 0)
   {
      FUNC_3();
      return 0;
   }

   VAR_12.sa_handler = VAR_11;
   VAR_12.sa_flags = VAR_3 | VAR_2;
   FUNC_6(&VAR_12.sa_mask);



   FUNC_5(VAR_4, &VAR_12, ((void*)0));
   FUNC_5(VAR_5, &VAR_12, ((void*)0));
   FUNC_5(VAR_6, &VAR_12, ((void*)0));
   FUNC_5(VAR_7, &VAR_12, ((void*)0));
   FUNC_5(VAR_8, &VAR_12, ((void*)0));
   FUNC_5(VAR_9, &VAR_12, ((void*)0));

   FUNC_0(VAR_10);

   return 1;
}
