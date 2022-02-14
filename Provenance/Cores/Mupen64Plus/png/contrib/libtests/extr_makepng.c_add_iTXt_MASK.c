
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int png_const_charp ;
typedef int * png_charp ;
typedef int chunk_insert ;


 int VAR_0 ;
 int * FUNC_0 (char*,int ,int,int **) ;
 int * FUNC_1 (char const*) ;
 int * FUNC_2 (int const*) ;

__attribute__((used)) static chunk_insert *
FUNC_3(const char *VAR_1, const char *VAR_2, const char *VAR_3,
      const png_const_charp *VAR_4)
{
   static char VAR_5[5] = { 105, 84, 88, 116, 0 };
   png_charp VAR_6[5];

   VAR_6[0] = FUNC_1(VAR_1);
   VAR_6[1] = FUNC_1(VAR_2);
   VAR_6[2] = FUNC_1(VAR_3);
   VAR_6[3] = FUNC_2(VAR_4);
   VAR_6[4] = ((void*)0);

   return FUNC_0(VAR_5, VAR_0, 4, VAR_6);
}
