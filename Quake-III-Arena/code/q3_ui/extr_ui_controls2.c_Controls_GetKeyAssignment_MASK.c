
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int,char*,int) ;

__attribute__((used)) static void FUNC_2 (char *VAR_0, int *VAR_1)
{
 int VAR_2;
 int VAR_3;
 char VAR_4[256];

 VAR_1[0] = VAR_1[1] = -1;
 VAR_2 = 0;

 for ( VAR_3 = 0; VAR_3 < 256; VAR_3++ )
 {
  FUNC_1( VAR_3, VAR_4, 256 );
  if ( *VAR_4 == 0 ) {
   continue;
  }
  if ( !FUNC_0( VAR_4, VAR_0 ) ) {
   VAR_1[VAR_2] = VAR_3;
   VAR_2++;
   if (VAR_2 == 2)
    break;
  }
 }
}
