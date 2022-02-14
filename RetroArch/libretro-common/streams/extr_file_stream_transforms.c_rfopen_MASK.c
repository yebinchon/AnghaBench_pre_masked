
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RFILE ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int * FUNC_0 (char const*,unsigned int,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 scalar_t__ FUNC_2 (char const*,char*) ;

RFILE* FUNC_3(const char *VAR_6, const char *VAR_7)
{
   RFILE *VAR_8 = ((void*)0);
   unsigned int VAR_9 = VAR_1;
   bool VAR_10 = 0;

   if (FUNC_2(VAR_7, "r"))
   {
      VAR_9 = VAR_1;
      if (FUNC_2(VAR_7, "+"))
      {
         VAR_9 = VAR_2 |
            VAR_3;
      }
   }
   else if (FUNC_2(VAR_7, "w"))
   {
      VAR_9 = VAR_4;
      if (FUNC_2(VAR_7, "+"))
         VAR_9 = VAR_2;
   }
   else if (FUNC_2(VAR_7, "a"))
   {
      VAR_9 = VAR_4 |
         VAR_3;
      VAR_10 = 1;
      if (FUNC_2(VAR_7, "+"))
      {
         VAR_9 = VAR_2 |
            VAR_3;
      }
   }

   VAR_8 = FUNC_0(VAR_6, VAR_9,
         VAR_0);
   if (VAR_8 && VAR_10)
      FUNC_1(VAR_8, 0, VAR_5);

   return VAR_8;
}
