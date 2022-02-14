
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t UBaseType_t ;
struct TYPE_6__ {scalar_t__ uxPriority; } ;
struct TYPE_5__ {size_t xCoreID; scalar_t__ uxPriority; int xEventListItem; int xGenericListItem; } ;
typedef TYPE_1__ TCB_t ;
typedef int List_t ;
typedef scalar_t__ BaseType_t ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int const* const) ;
 scalar_t__ FUNC_2 (int const* const) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 () ;
 TYPE_2__** VAR_3 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (size_t,scalar_t__) ;
 scalar_t__ FUNC_8 (size_t) ;
 size_t VAR_4 ;
 int FUNC_9 (int *) ;
 size_t* VAR_5 ;
 int FUNC_10 (int *,int *) ;
 int * VAR_6 ;
 size_t FUNC_11 () ;
 int VAR_7 ;
 scalar_t__* VAR_8 ;

BaseType_t FUNC_12( const List_t * const VAR_9 )
{
TCB_t *VAR_10;
BaseType_t VAR_11;
BaseType_t VAR_12;
UBaseType_t VAR_13, VAR_14;



 FUNC_5(&VAR_7);
 if ( ( FUNC_2( VAR_9 ) ) == VAR_0 ) {
  VAR_10 = ( TCB_t * ) FUNC_1( VAR_9 );
  FUNC_0( VAR_10 );
  ( void ) FUNC_9( &( VAR_10->xEventListItem ) );
 } else {
  FUNC_6(&VAR_7);
  return VAR_0;
 }



 VAR_12 = VAR_0;
 if ( VAR_10->xCoreID == VAR_4 ) {
  VAR_14 = FUNC_11();
  for (VAR_13 = 0; VAR_13 < VAR_2; VAR_13++) {
   if ( VAR_5[ VAR_13 ] == ( UBaseType_t ) VAR_0 ) {
    VAR_12 = VAR_1;
    break;
   }
  }
 } else {
  VAR_14 = VAR_10->xCoreID;
  VAR_12 = VAR_5[ VAR_14 ] == ( UBaseType_t ) VAR_0;

 }

 if( VAR_12 )
 {
  ( void ) FUNC_9( &( VAR_10->xGenericListItem ) );
  FUNC_3( VAR_10 );
 }
 else
 {


  FUNC_10( &( VAR_6[ VAR_14 ] ), &( VAR_10->xEventListItem ) );
 }

 if ( FUNC_8(VAR_10->xCoreID) && VAR_10->uxPriority >= VAR_3[ FUNC_11() ]->uxPriority )
 {



  VAR_11 = VAR_1;



  VAR_8[ FUNC_11() ] = VAR_1;
 }
 else if ( VAR_10->xCoreID != FUNC_11() )
 {
  FUNC_7( VAR_10->xCoreID, VAR_10->uxPriority );
  VAR_11 = VAR_0;
 }
 else
 {
  VAR_11 = VAR_0;
 }
 FUNC_6(&VAR_7);

 return VAR_11;
}
