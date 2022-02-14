
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stbi__write_context ;
typedef int FILE ;


 int * FUNC_0 (char const*,char*) ;
 scalar_t__ FUNC_1 (int **,char const*,char*) ;
 int FUNC_2 (int *,int ,void*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(stbi__write_context *VAR_1, const char *VAR_2)
{
   FILE *VAR_3;




   VAR_3 = FUNC_0(VAR_2, "wb");

   FUNC_2(VAR_1, VAR_0, (void *) VAR_3);
   return VAR_3 != ((void*)0);
}
