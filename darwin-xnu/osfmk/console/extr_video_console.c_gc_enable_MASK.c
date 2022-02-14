
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int spl_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_4__ {int (* enable ) (void*) ;int (* show_cursor ) (int ,int ) ;int (* clear_screen ) (int ,int ,int ,int,int) ;} ;
struct TYPE_3__ {int v_columns; int v_rows; } ;


 char VAR_0 ;
 char FUNC_0 (int ,int ,void*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 void* VAR_4 ;
 unsigned char* VAR_5 ;
 unsigned char* VAR_6 ;
 unsigned char* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned char* VAR_11 ;
 void* VAR_12 ;
 TYPE_2__ VAR_13 ;
 int FUNC_4 () ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (unsigned char*,int) ;
 int FUNC_7 (unsigned char*,char,int) ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (int ,int ,int ,int,int) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (void*) ;
 TYPE_1__ VAR_16 ;
 scalar_t__ VAR_17 ;

__attribute__((used)) static void
FUNC_14( boolean_t VAR_18 )
{
 unsigned char *VAR_19 = ((void*)0);
 unsigned char *VAR_20 = ((void*)0);
 unsigned char *VAR_21 = ((void*)0);
 unsigned char *VAR_22 = ((void*)0);
 uint32_t VAR_23 = 0;
 uint32_t VAR_24 = 0;
 uint32_t VAR_25 = 0;
 spl_t VAR_26;

 if ( VAR_18 == VAR_2 )
 {

  if ( FUNC_3() == VAR_2 )
   VAR_4 = VAR_3;
  VAR_12 = VAR_2;
  VAR_13.enable(VAR_2);
 }

 VAR_26 = FUNC_8( );
 FUNC_1( );

 if ( VAR_10 )
 {
  VAR_19 = VAR_5;
  VAR_20 = VAR_6;
  VAR_21 = VAR_7;
  VAR_22 = VAR_11;
  VAR_23 = VAR_8;
  VAR_24 = VAR_9;
  VAR_25 = VAR_10;

  VAR_5 = ((void*)0);
  VAR_6 = ((void*)0);
  VAR_7 = ((void*)0);
  VAR_11 = ((void*)0);
  VAR_8 = 0;
  VAR_9 = 0;
  VAR_10 = 0;

  FUNC_2( );
  FUNC_9( VAR_26 );

  FUNC_6( VAR_19, VAR_25 );
  FUNC_6( VAR_20, VAR_25 );
  FUNC_6( VAR_21, VAR_25 );
  FUNC_6( VAR_22, VAR_23 );
 }
 else
 {
  FUNC_2( );
  FUNC_9( VAR_26 );
 }

 if ( VAR_18 )
 {
  if ( VAR_17 )
  {
   VAR_23 = VAR_16.v_columns;
   VAR_24 = VAR_16.v_rows;
   VAR_25 = VAR_23 * VAR_24;

   if ( VAR_25 )
   {
    VAR_19 = (unsigned char *) FUNC_5( VAR_25 );
    VAR_20 = (unsigned char *) FUNC_5( VAR_25 );
    VAR_21 = (unsigned char *) FUNC_5( VAR_25 );
    VAR_22 = (unsigned char *) FUNC_5( VAR_23 );

    if ( VAR_19 == ((void*)0) ||
         VAR_20 == ((void*)0) ||
         VAR_21 == ((void*)0) ||
         VAR_22 == ((void*)0) )
    {
     if ( VAR_19 ) FUNC_6( VAR_19, VAR_25 );
     if ( VAR_20 ) FUNC_6( VAR_20, VAR_25 );
     if ( VAR_21 ) FUNC_6( VAR_21, VAR_25 );
     if ( VAR_22 ) FUNC_6( VAR_22, VAR_23 );

     VAR_19 = ((void*)0);
     VAR_20 = ((void*)0);
     VAR_21 = ((void*)0);
     VAR_22 = ((void*)0);
     VAR_23 = 0;
     VAR_24 = 0;
     VAR_25 = 0;
    }
    else
    {
     FUNC_7( VAR_19, VAR_0, VAR_25 );
     FUNC_7( VAR_20, ' ', VAR_25 );
     FUNC_7( VAR_21, FUNC_0( 0, VAR_1, VAR_3 ), VAR_25 );
     FUNC_7( VAR_22, 0, VAR_23 );
    }
   }
  }

  VAR_26 = FUNC_8( );
  FUNC_1( );

  VAR_5 = VAR_19;
  VAR_6 = VAR_20;
  VAR_7 = VAR_21;
  VAR_11 = VAR_22;
  VAR_8 = VAR_23;
  VAR_9 = VAR_24;
  VAR_10 = VAR_25;

  FUNC_4();

  FUNC_2( );
  FUNC_9( VAR_26 );

  VAR_13.clear_screen(VAR_14, VAR_15, 0, VAR_16.v_rows, 2);
  VAR_13.show_cursor(VAR_14, VAR_15);

  VAR_13.enable(VAR_3);
  VAR_12 = VAR_3;
  VAR_4 = VAR_2;
 }
}
