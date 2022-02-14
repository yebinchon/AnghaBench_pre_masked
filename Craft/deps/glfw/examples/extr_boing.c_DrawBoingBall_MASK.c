
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLfloat ;


 float VAR_0 ;
 int FUNC_0 (double) ;
 double VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 double VAR_7 ;
 double VAR_8 ;
 double VAR_9 ;
 double VAR_10 ;
 scalar_t__ VAR_11 ;
 float FUNC_2 (float) ;
 double VAR_12 ;
 double VAR_13 ;
 float VAR_14 ;
 float VAR_15 ;
 scalar_t__ VAR_16 ;
 double VAR_17 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (float,double,double,double) ;
 int FUNC_9 (double,double,double) ;

void FUNC_10( void )
{
   GLfloat VAR_18;
   double VAR_19, VAR_20;

   FUNC_7();
   FUNC_5( VAR_5 );




   FUNC_9( 0.0, 0.0, VAR_1 );


   VAR_19 = VAR_17;
   while( VAR_19 > 0.0 )
   {
       VAR_20 = VAR_19 > VAR_7 ? VAR_7 : VAR_19;
       VAR_19 -= VAR_20;
       FUNC_0( VAR_20 );
       VAR_14 = FUNC_2( VAR_14 + VAR_15*((float)VAR_20*VAR_0) );
   }


   FUNC_9( VAR_12, VAR_13, 0.0 );




   if ( VAR_16 == VAR_2 )
   {
      FUNC_9( VAR_8,
                    VAR_9,
                    VAR_10 );
   }




   FUNC_8( -20.0, 0.0, 0.0, 1.0 );




   FUNC_8( VAR_14, 0.0, 1.0, 0.0 );




   FUNC_3( VAR_4 );
   FUNC_4( VAR_3 );
   FUNC_4( VAR_6 );





   for ( VAR_18 = 0;
         VAR_18 < 180;
         VAR_18 += VAR_11 )
   {



      FUNC_1( VAR_18,
                         VAR_18 + VAR_11 );
   }

   FUNC_6();

   return;
}
