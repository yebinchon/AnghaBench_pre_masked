
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ TickType_t ;
struct TYPE_2__ {scalar_t__ uxPriority; int xEventListItem; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,scalar_t__) ;
 TYPE_1__** VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 size_t FUNC_4 () ;
 int VAR_2 ;

TickType_t FUNC_5( void )
{
TickType_t VAR_3;
 FUNC_2(&VAR_2);
 VAR_3 = FUNC_0( &( VAR_1[ FUNC_4() ]->xEventListItem ) );



 FUNC_1( &( VAR_1[ FUNC_4() ]->xEventListItem ), ( ( TickType_t ) VAR_0 - ( TickType_t ) VAR_1[ FUNC_4() ]->uxPriority ) );
 FUNC_3(&VAR_2);

 return VAR_3;
}
