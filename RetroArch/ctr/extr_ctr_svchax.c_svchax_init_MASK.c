
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int backdoor_fn ;
typedef int Result ;


 int FUNC_0 (int*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (scalar_t__*,scalar_t__*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (scalar_t__,scalar_t__) ;

Result FUNC_12(bool VAR_5)
{
   bool VAR_6;
   FUNC_0(&VAR_6);

   u32 VAR_7 = FUNC_6();

   if (!VAR_1)
   {
      if (VAR_3)
      {
        u32 VAR_8, VAR_9;

        if (VAR_7 > FUNC_2(2, 50, 11) &&
            (FUNC_1(FUNC_5(&VAR_8, &VAR_9) || VAR_8 < 8)))
          return -1;
        else if (VAR_7 > FUNC_2(2, 46, 0) && VAR_7 <= FUNC_2(2, 50, 11))
          FUNC_4();
        else if (VAR_7 <= FUNC_2(2, 46, 0))
          FUNC_3();
      }

      FUNC_10((backdoor_fn)VAR_4, VAR_6);

      VAR_1 = 1;
   }

   if (VAR_5 && !VAR_2)
   {
      u32 VAR_10 = FUNC_7(VAR_0) + (VAR_6 ? 0xBC : (VAR_7 > FUNC_2(2, 40, 0)) ? 0xB4 : 0xAC);
      u32 VAR_11 = FUNC_7(VAR_10);
      FUNC_11(VAR_10, 0);
      FUNC_8();
      FUNC_9();
      FUNC_11(VAR_10, VAR_11);

      VAR_2 = 1;
   }

   return 0;
}
