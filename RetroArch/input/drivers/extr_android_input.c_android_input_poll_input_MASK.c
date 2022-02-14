
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct android_app {int inputQueue; } ;
typedef int int32_t ;
typedef int android_input_t ;
typedef int AInputEvent ;




 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *,int) ;
 scalar_t__ FUNC_3 (int ,int **) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;
 int VAR_0 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int,int) ;
 int FUNC_9 (struct android_app*,int *,int,int,int,int,int*) ;
 int FUNC_10 (int *,int,int*) ;
 int FUNC_11 (int *,int *,int,int) ;
 int FUNC_12 (int *,int *,int,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_13 (int *,struct android_app*,int*,int,int) ;
 scalar_t__ FUNC_14 (int) ;

__attribute__((used)) static void FUNC_15(android_input_t *VAR_2)
{
   AInputEvent *VAR_3 = ((void*)0);
   struct android_app *VAR_4 = (struct android_app*)VAR_1;


   while (FUNC_4(VAR_4->inputQueue))
   {
      while (FUNC_3(VAR_4->inputQueue, &VAR_3) >= 0)
      {
         int32_t VAR_5 = 1;
         int VAR_6 = FUNC_5(VAR_4->inputQueue, VAR_3);
         int VAR_7 = FUNC_0(VAR_3);
         int VAR_8 = FUNC_1(VAR_3);
         int VAR_9 = FUNC_7(VAR_3);
         int VAR_10 = FUNC_8(VAR_2, VAR_9, VAR_7);

         if (VAR_10 < 0 && !FUNC_14(VAR_9))
            FUNC_13(VAR_2, VAR_4,
            &VAR_10, VAR_9, VAR_7);

         switch (VAR_8)
         {
            case 128:
               if (FUNC_11(VAR_2, VAR_3,
                        VAR_10, VAR_7))
                  FUNC_12(VAR_2, VAR_3, VAR_10, VAR_7);
               break;
            case 129:
               {
                  int VAR_11 = FUNC_6(VAR_3);

                  if (FUNC_14(VAR_9))
                  {
                     if (!VAR_6)
                     {
                        FUNC_10(VAR_3, VAR_11, &VAR_5);
                        FUNC_9(VAR_4, VAR_3, VAR_0, VAR_11, VAR_7, VAR_8, &VAR_5);
                     }
                  }
                  else
                     FUNC_9(VAR_4,
                        VAR_3, VAR_10, VAR_11, VAR_7, VAR_8, &VAR_5);
               }
               break;
         }

         if (!VAR_6)
            FUNC_2(VAR_4->inputQueue, VAR_3,
                  VAR_5);
      }
   }
}
