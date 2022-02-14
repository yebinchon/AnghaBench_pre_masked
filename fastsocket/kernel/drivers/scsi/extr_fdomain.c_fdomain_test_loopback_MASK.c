
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_2( void )
{
   int VAR_3;
   int VAR_4;

   for (VAR_3 = 0; VAR_3 < 255; VAR_3++) {
      FUNC_1( VAR_3, VAR_2 + VAR_1 );
      VAR_4 = FUNC_0( VAR_2 + VAR_0 );
      if (VAR_3 != VAR_4)
     return 1;
   }
   return 0;
}
