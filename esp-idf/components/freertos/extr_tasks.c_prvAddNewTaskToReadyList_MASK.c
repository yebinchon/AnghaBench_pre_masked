
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ UBaseType_t ;
typedef int TaskFunction_t ;
struct TYPE_7__ {scalar_t__ uxPriority; scalar_t__ uxTCBNumber; } ;
typedef TYPE_1__ TCB_t ;
typedef int BaseType_t ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 () ;
 TYPE_1__** VAR_2 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;
 int FUNC_8 (int,scalar_t__) ;
 int FUNC_9 (TYPE_1__*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_10 (int ) ;
 int FUNC_11 () ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_12( TCB_t *VAR_8, TaskFunction_t VAR_9, BaseType_t VAR_10 )
{
 TCB_t *VAR_11, *VAR_12, *VAR_13;




 FUNC_0( VAR_10 == VAR_3 || VAR_10 < VAR_1);



 FUNC_5(&VAR_7);
 {
  VAR_4++;


  if ( VAR_10 == VAR_3 )
  {
   if ( VAR_1 == 1 )
   {
    VAR_10 = 0;
   }
   else
   {



    VAR_12 = VAR_2[0];
    VAR_13 = VAR_2[1];
    if ( VAR_12 == ((void*)0) )
    {
     VAR_10 = 0;
    }
    else if ( VAR_13 == ((void*)0) )
    {
     VAR_10 = 1;
    }
    else if ( VAR_12->uxPriority < VAR_8->uxPriority && VAR_12->uxPriority < VAR_13->uxPriority )
    {
     VAR_10 = 0;
    }
    else if ( VAR_13->uxPriority < VAR_8->uxPriority )
    {
     VAR_10 = 1;
    }
    else
    {
     VAR_10 = FUNC_11();
    }
   }
  }


  if( VAR_2[ VAR_10 ] == ((void*)0) )
  {


   VAR_2[ VAR_10 ] = VAR_8;

   if( VAR_4 == ( UBaseType_t ) 1 )
   {
    FUNC_4();
   }
   else
   {
    FUNC_1();
   }
  }
  else
  {



   if( VAR_6 == VAR_0 )
   {


    if ( VAR_2[VAR_10] == ((void*)0) || VAR_2[VAR_10]->uxPriority <= VAR_8->uxPriority )
    {
     VAR_2[VAR_10] = VAR_8;
    }
   }
   else
   {
    FUNC_1();
   }
  }

  VAR_5++;







  FUNC_9( VAR_8 );

  FUNC_3( VAR_8 );

  FUNC_2( VAR_8 );
 }

 FUNC_6(&VAR_7);

 if( VAR_6 != VAR_0 )
 {
  FUNC_5(&VAR_7);

  VAR_11 = VAR_2[ VAR_10 ];



  if( VAR_11 == ((void*)0) || VAR_11->uxPriority < VAR_8->uxPriority )
  {
   if( VAR_10 == FUNC_11() )
   {
    FUNC_7();
   }
   else {
    FUNC_8(VAR_10, VAR_8->uxPriority);
   }
  }
  else
  {
   FUNC_1();
  }
  FUNC_6(&VAR_7);
 }
 else
 {
  FUNC_1();
 }
}
