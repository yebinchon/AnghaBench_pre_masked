
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,char*) ;

void FUNC_3 (char *VAR_0)
{
 int VAR_1 = 0;





   FUNC_1 (VAR_0, 256);
   FUNC_2 (VAR_0, "/");


   while ( VAR_0[VAR_1] != 0 )
   {
    if ( VAR_0[VAR_1] == '\\' )
     VAR_0[VAR_1] = '/';
    VAR_1++;
   }
}
