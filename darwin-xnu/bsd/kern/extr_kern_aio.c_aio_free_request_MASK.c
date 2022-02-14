
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ aio_map; int aio_refcount; int * thread; } ;
typedef TYPE_1__ aio_workq_entry ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_3(aio_workq_entry *VAR_2)
{

 if ( VAR_0 != VAR_2->aio_map) {
  FUNC_1(VAR_2->aio_map);
 }


 if ( ((void*)0) != VAR_2->thread ) {
  FUNC_0( VAR_2->thread );
 }

 VAR_2->aio_refcount = -1;

 FUNC_2( VAR_1, VAR_2 );

 return( 0 );

}
