
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__* VAR_8 ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int ) ;
 scalar_t__* VAR_9 ;
 scalar_t__* VAR_10 ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 (int) ;
 int FUNC_12 () ;
 int FUNC_13 (int ) ;
 int FUNC_14 () ;

__attribute__((used)) static void FUNC_15(void* VAR_11)
{

   (void)VAR_11;

   FUNC_14();

   FUNC_4(VAR_2, VAR_3, 0);

   u32 VAR_12 = 400 * 240 * 3;
   u32 VAR_13 = 320 * 240 * 2;
   FUNC_8(VAR_9 [0]);
   FUNC_8(VAR_9 [1]);
   FUNC_8(VAR_8 [0]);
   FUNC_8(VAR_8 [1]);
   FUNC_8(VAR_10[0]);
   FUNC_8(VAR_10[1]);

   VAR_9 [0] = FUNC_7(VAR_12 * 2);
   VAR_10[0] = VAR_9[0] + VAR_12;

   VAR_9 [1] = FUNC_7(VAR_12 * 2);
   VAR_10[1] = VAR_9[1] + VAR_12;

   VAR_8 [0] = FUNC_7(VAR_13);
   VAR_8 [1] = FUNC_7(VAR_13);

   FUNC_6(VAR_1, 0);
   FUNC_6(VAR_0, 0);

   FUNC_5(1);
   FUNC_1(VAR_0, ((void*)0));


   if (&FUNC_13)
   {
      FUNC_11(0);
      FUNC_13(VAR_4);
   }
   FUNC_11(1);

   if (FUNC_2() != 0)
      VAR_5 = VAR_7;
   FUNC_3();
   if (FUNC_10() != 0)
      VAR_6 = VAR_7;
   FUNC_0();
   FUNC_12();
   FUNC_9();

}
