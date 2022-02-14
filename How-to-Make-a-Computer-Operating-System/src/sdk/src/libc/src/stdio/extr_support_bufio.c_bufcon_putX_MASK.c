
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,unsigned char) ;
 int FUNC_1 (char*,char*) ;

char* FUNC_2( char *VAR_0, unsigned int VAR_1 )
{
   int VAR_2;
   unsigned char VAR_3;
   int VAR_4 = 0;

   FUNC_1( VAR_0, "0x" );

   for ( VAR_2 = 28; VAR_2 >= 0; VAR_2 -= 4 )
   {
     VAR_3 = (VAR_1>>VAR_2) & 0xF;
     if ( VAR_3 != 0 ) VAR_4 = 1;
     if ( VAR_4 == 1 )
     {
        if ( VAR_3 < 10 ) FUNC_0( VAR_0, VAR_3 + '0' );
               else FUNC_0( VAR_0, VAR_3 - 10 + 'A' );
     }
   }

   if (VAR_4 == 0 ) FUNC_0( VAR_0, '0' );

   return VAR_0;
}
