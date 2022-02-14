
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct android_app {scalar_t__ destroyRequested; scalar_t__ reinitRequested; scalar_t__ input_alive; } ;
struct TYPE_5__ {int input_block_timeout; } ;
struct TYPE_6__ {TYPE_1__ uints; } ;
typedef TYPE_2__ settings_t ;
typedef int android_input_t ;
struct TYPE_7__ {scalar_t__ valid; } ;


 int FUNC_0 (int,int *,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_1 (struct android_app*,int ) ;
 scalar_t__ FUNC_2 (int *,size_t) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int *) ;
 TYPE_2__* FUNC_8 () ;
 scalar_t__ VAR_5 ;
 TYPE_3__** VAR_6 ;
 scalar_t__ FUNC_9 (int ,int *) ;

__attribute__((used)) static void FUNC_10(void *VAR_7)
{
   settings_t *VAR_8 = FUNC_8();
   int VAR_9;
   struct android_app *VAR_10 = (struct android_app*)VAR_5;
   android_input_t *VAR_11 = (android_input_t*)VAR_7;

   while ((VAR_9 =
            FUNC_0((VAR_6[0][VAR_4].valid
               && FUNC_2(VAR_11, VAR_4))
               ? -1 : VAR_8->uints.input_block_timeout,
               ((void*)0), ((void*)0), ((void*)0))) >= 0)
   {
      switch (VAR_9)
      {
         case 130:
            FUNC_3(VAR_11);
            break;
         case 128:
            FUNC_6(VAR_11);
            break;
         case 129:
            FUNC_4();
            break;
      }

      if (VAR_10->destroyRequested != 0)
      {
         FUNC_9(VAR_3, ((void*)0));
         return;
      }

      if (VAR_10->reinitRequested != 0)
      {
         if (FUNC_9(VAR_2, ((void*)0)))
            FUNC_7(VAR_1, ((void*)0));
         FUNC_1(VAR_10, VAR_0);
         return;
      }
   }

   if (VAR_10->input_alive)
      FUNC_5(VAR_11);
}
