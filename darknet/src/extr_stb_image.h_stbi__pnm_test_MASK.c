
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stbi__context ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(stbi__context *VAR_0)
{
   char VAR_1, VAR_2;
   VAR_1 = (char) FUNC_0(VAR_0);
   VAR_2 = (char) FUNC_0(VAR_0);
   if (VAR_1 != 'P' || (VAR_2 != '5' && VAR_2 != '6')) {
       FUNC_1( VAR_0 );
       return 0;
   }
   return 1;
}
