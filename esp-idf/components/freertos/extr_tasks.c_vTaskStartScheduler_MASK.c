
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ TickType_t ;
typedef int BaseType_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 () ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (char*,int,char*,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int * VAR_9 ;
 scalar_t__ FUNC_5 () ;
 int VAR_10 ;
 int FUNC_6 (int ,char*,int ,void*,int,int *,int) ;
 scalar_t__ VAR_11 ;
 int FUNC_7 () ;

void FUNC_8( void )
{
BaseType_t VAR_12;
BaseType_t VAR_13;


 for ( VAR_13=0; VAR_13<VAR_4; VAR_13++) {

  char VAR_14[VAR_0];
  FUNC_4(VAR_14, VAR_0, "IDLE%d", VAR_13);







  {

   VAR_12 = FUNC_6( VAR_6, VAR_14, VAR_8, ( void * ) ((void*)0), ( VAR_7 | VAR_5 ), ((void*)0), VAR_13);
  }

 }
 if( VAR_12 == VAR_2 )
 {





  FUNC_3();


  VAR_11 = ( TickType_t ) 0U;




  FUNC_2();
  VAR_10 = VAR_3;



  if( FUNC_5() != VAR_1 )
  {


  }
  else
  {

  }
 }
 else
 {



  FUNC_0( VAR_12 );
 }
}
