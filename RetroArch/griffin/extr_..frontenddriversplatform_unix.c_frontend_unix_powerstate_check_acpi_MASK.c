
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RDIR {int dummy; } ;
typedef enum frontend_powerstate { ____Placeholder_frontend_powerstate } frontend_powerstate ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int*) ;
 int FUNC_1 (int ,int*,int*,int*,int*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct RDIR*) ;
 scalar_t__ FUNC_3 (struct RDIR*) ;
 int FUNC_4 (struct RDIR*) ;
 struct RDIR* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct RDIR*) ;

__attribute__((used)) static bool FUNC_7(
      enum frontend_powerstate *VAR_6,
      int *VAR_7, int *VAR_8)
{
   bool VAR_9 = 0;
   bool VAR_10 = 0;
   bool VAR_11 = 0;
   struct RDIR *VAR_12 = FUNC_5(VAR_5);
   if (!VAR_12)
      return 0;

   if (FUNC_3(VAR_12))
   {
      FUNC_2(VAR_12);
      return 0;
   }

   while (FUNC_6(VAR_12))
      FUNC_1(FUNC_4(VAR_12),
            &VAR_9, &VAR_11, VAR_7, VAR_8);

   FUNC_2(VAR_12);

   VAR_12 = FUNC_5(VAR_4);
   if (!VAR_12)
      return 0;

   while (FUNC_6(VAR_12))
      FUNC_0(
            FUNC_4(VAR_12), &VAR_10);

   FUNC_2(VAR_12);

   if (!VAR_9)
      *VAR_6 = VAR_2;
   else if (VAR_11)
      *VAR_6 = VAR_1;
   else if (VAR_10)
      *VAR_6 = VAR_0;
   else
      *VAR_6 = VAR_3;

   return 1;
}
