
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u32 ;
typedef int FILE ;


 int FUNC_0 (size_t,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 size_t FUNC_3 (void*,int,size_t,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int ) ;
 size_t FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (size_t) ;

int FUNC_8(const char *VAR_2, u32 VAR_3)
{
   FILE *VAR_4;
   u32 VAR_5;
   u8 *VAR_6;
   u32 VAR_7;
   size_t VAR_8 = 0;

   if (!VAR_2)
      return -1;

   if ((VAR_4 = FUNC_2(VAR_2, "rb")) == ((void*)0))
      return -1;


   FUNC_5(VAR_4, 0, VAR_0);
   VAR_5 = FUNC_6(VAR_4);
   FUNC_5(VAR_4, 0, VAR_1);

   if ((VAR_6 = (u8 *)FUNC_7(VAR_5)) == ((void*)0))
   {
      FUNC_1(VAR_4);
      return -2;
   }

   VAR_8 = FUNC_3((void *)VAR_6, 1, VAR_5, VAR_4);
   FUNC_1(VAR_4);

   for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++)
      FUNC_0(VAR_3+VAR_7, VAR_6[VAR_7]);

   FUNC_4(VAR_6);

   return 0;
}
