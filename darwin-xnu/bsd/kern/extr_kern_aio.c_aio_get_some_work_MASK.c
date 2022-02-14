
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;


typedef int thread_continue_t ;
typedef TYPE_1__* aio_workq_t ;
struct TYPE_17__ {int flags; scalar_t__ procp; scalar_t__ uaiocbp; } ;
typedef TYPE_2__ aio_workq_entry ;
struct TYPE_16__ {scalar_t__ aioq_count; int aioq_waitq; int aioq_entries; } ;
struct TYPE_15__ {int aio_inflight_count; TYPE_1__* aio_async_workqs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int,int,int,int ,int ,int ) ;
 int FUNC_3 (int *) ;
 TYPE_2__* FUNC_4 (int *) ;
 int VAR_4 ;
 TYPE_12__ VAR_5 ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 int FUNC_9 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int *,int ,int ,int ) ;

__attribute__((used)) static aio_workq_entry *
FUNC_15( void )
{
 aio_workq_entry *VAR_7 = ((void*)0);
 aio_workq_t VAR_8 = ((void*)0);


 VAR_8 = &VAR_5.aio_async_workqs[0];
 FUNC_10(VAR_8);
 if (VAR_8->aioq_count == 0) {
  goto nowork;
 }







 for(;;) {




  VAR_7 = FUNC_4(&VAR_8->aioq_entries);





  if (VAR_7 == ((void*)0)) {
   goto nowork;
  }

  FUNC_11(VAR_8, VAR_7);

  FUNC_12(VAR_8);





  if ( (VAR_7->flags & VAR_0) != 0 ) {




   FUNC_7(VAR_7->procp);
   if ( FUNC_5( VAR_7 ) ) {

    FUNC_2( (FUNC_0(VAR_2, VAR_1)) | VAR_3,
         (int)VAR_7->procp, (int)VAR_7->uaiocbp, 0, 0, 0 );

    FUNC_8(VAR_7->procp);

    FUNC_10(VAR_8);
    FUNC_9(VAR_8, VAR_7);
    continue;
   }
   FUNC_8(VAR_7->procp);
  }

  break;
 }

 FUNC_6(VAR_7);

 FUNC_3(&VAR_5.aio_inflight_count);
 return( VAR_7 );

nowork:

 FUNC_14(&VAR_8->aioq_waitq, FUNC_1(VAR_8), VAR_4, 0);
 FUNC_12(VAR_8);
 FUNC_13( (thread_continue_t)VAR_6 );


 return ((void*)0);
}
