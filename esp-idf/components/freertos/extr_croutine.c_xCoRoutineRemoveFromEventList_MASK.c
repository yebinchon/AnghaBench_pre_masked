
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ uxPriority; } ;
struct TYPE_3__ {scalar_t__ uxPriority; int xEventListItem; } ;
typedef int List_t ;
typedef TYPE_1__ CRCB_t ;
typedef int BaseType_t ;


 scalar_t__ FUNC_0 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int VAR_3 ;

BaseType_t FUNC_3( const List_t *VAR_4 )
{
CRCB_t *VAR_5;
BaseType_t VAR_6;




 VAR_5 = ( CRCB_t * ) FUNC_0( VAR_4 );
 ( void ) FUNC_1( &( VAR_5->xEventListItem ) );
 FUNC_2( ( List_t * ) &( VAR_3 ), &( VAR_5->xEventListItem ) );

 if( VAR_5->uxPriority >= VAR_2->uxPriority )
 {
  VAR_6 = VAR_1;
 }
 else
 {
  VAR_6 = VAR_0;
 }

 return VAR_6;
}
