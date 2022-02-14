
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLfloat ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int const VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (float,float,float) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (double,double,int ) ;
 int FUNC_7 (int,int,int const) ;

void FUNC_8( void )
{
   int VAR_4, VAR_5;
   const int VAR_6 = 12;
   const int VAR_7 = VAR_6;
   const GLfloat VAR_8 = 2.0;
   const GLfloat VAR_9 = VAR_3 / VAR_6;
   const GLfloat VAR_10 = -40.0;
   GLfloat VAR_11, VAR_12;
   GLfloat VAR_13, VAR_14;

   FUNC_5();
   FUNC_2( VAR_1 );




   FUNC_6( 0.0, 0.0, VAR_0 );




   for ( VAR_5 = 0; VAR_5 <= VAR_7; VAR_5++ )
   {



      VAR_11 = -VAR_3 / 2 + VAR_5 * VAR_9;
      VAR_12 = VAR_11 + VAR_8;

      VAR_13 = VAR_3 / 2;
      VAR_14 = -VAR_3 / 2 - VAR_8;

      FUNC_0( VAR_2 );

      FUNC_1( 0.6f, 0.1f, 0.6f );

      FUNC_7( VAR_12, VAR_13, VAR_10 );
      FUNC_7( VAR_11, VAR_13, VAR_10 );
      FUNC_7( VAR_11, VAR_14, VAR_10 );
      FUNC_7( VAR_12, VAR_14, VAR_10 );

      FUNC_3();
   }




   for ( VAR_4 = 0; VAR_4 <= VAR_6; VAR_4++ )
   {



      VAR_13 = VAR_3 / 2 - VAR_4 * VAR_9;
      VAR_14 = VAR_13 - VAR_8;

      VAR_11 = -VAR_3 / 2;
      VAR_12 = VAR_3 / 2 + VAR_8;

      FUNC_0( VAR_2 );

      FUNC_1( 0.6f, 0.1f, 0.6f );

      FUNC_7( VAR_12, VAR_13, VAR_10 );
      FUNC_7( VAR_11, VAR_13, VAR_10 );
      FUNC_7( VAR_11, VAR_14, VAR_10 );
      FUNC_7( VAR_12, VAR_14, VAR_10 );

      FUNC_3();
   }

   FUNC_4();

   return;
}
