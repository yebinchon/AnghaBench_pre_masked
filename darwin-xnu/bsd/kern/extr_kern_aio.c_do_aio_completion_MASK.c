
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef TYPE_3__* caddr_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_15__ {scalar_t__ sigev_notify; int sigev_signo; } ;
struct TYPE_16__ {int aio_fildes; TYPE_1__ aio_sigevent; } ;
struct TYPE_18__ {int flags; scalar_t__ uaiocbp; TYPE_8__* procp; TYPE_2__ aiocb; scalar_t__ group_tag; } ;
typedef TYPE_4__ aio_workq_entry ;
struct TYPE_17__ {scalar_t__ io_completed; scalar_t__ io_issued; int io_waiter; } ;
typedef TYPE_3__ aio_lio_context ;
struct TYPE_19__ {int AIO_SUSPEND_SLEEP_CHAN; TYPE_3__ AIO_CLEANUP_SLEEP_CHAN; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (int,int,int,int ,int ,int ) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_2 (TYPE_8__*) ;
 int FUNC_3 (TYPE_8__*,int ) ;
 int FUNC_4 (TYPE_8__*) ;
 int FUNC_5 (TYPE_8__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (TYPE_8__*,int ) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*) ;

__attribute__((used)) static void
FUNC_11( aio_workq_entry *VAR_13 )
{

 boolean_t VAR_14 = VAR_10;
 aio_lio_context *VAR_15 = ((void*)0);
 int VAR_16 = 0;

 VAR_15 = (aio_lio_context *)VAR_13->group_tag;

 if (VAR_15 != ((void*)0)) {

  FUNC_4(VAR_13->procp);


   VAR_15->io_completed++;


   if (VAR_15->io_issued == VAR_15->io_completed) {
    VAR_14 = VAR_12;
   }

  VAR_16 = VAR_15->io_waiter;


  if ((VAR_13->flags & VAR_3) && (VAR_14) && (VAR_16 != 0)) {

   FUNC_9(VAR_15);
  }

  FUNC_5(VAR_13->procp);
 }

 if ( VAR_13->aiocb.aio_sigevent.sigev_notify == VAR_11 &&
   (VAR_13->flags & VAR_1) == 0 ) {

  boolean_t VAR_17 = VAR_10;
   if (VAR_15 == ((void*)0)) {
    VAR_17 = VAR_12;
   }
   else {




   VAR_17 = VAR_14;
   }

   if (VAR_17) {

   FUNC_1( (FUNC_0(VAR_8, VAR_6)) | VAR_9,
     (int)VAR_13->procp, (int)VAR_13->uaiocbp,
     VAR_13->aiocb.aio_sigevent.sigev_signo, 0, 0 );

   FUNC_8( VAR_13->procp, VAR_13->aiocb.aio_sigevent.sigev_signo );
  }
 }

 if ((VAR_13->flags & VAR_2) && (VAR_13->flags & VAR_0)) {
  FUNC_7("Close and exit flags set at the same time\n");
 }
 if ( (VAR_13->flags & VAR_2) != 0 ) {
  int VAR_18;

  FUNC_1( (FUNC_0(VAR_8, VAR_4)) | VAR_9,
       (int)VAR_13->procp, (int)VAR_13->uaiocbp, 0, 0, 0 );

  FUNC_4(VAR_13->procp);
  VAR_18 = FUNC_2( VAR_13->procp );
  if ( VAR_18 < 1 ) {




   FUNC_10((caddr_t)&VAR_13->procp->AIO_CLEANUP_SLEEP_CHAN);
   FUNC_5(VAR_13->procp);

   FUNC_1( (FUNC_0(VAR_8, VAR_5)) | VAR_9,
          (int)VAR_13->procp, (int)VAR_13->uaiocbp, 0, 0, 0 );
  } else {
   FUNC_5(VAR_13->procp);
  }
 }

 if ( (VAR_13->flags & VAR_0) != 0 ) {
  int VAR_19;

  FUNC_1( (FUNC_0(VAR_8, VAR_4)) | VAR_9,
       (int)VAR_13->procp, (int)VAR_13->uaiocbp, 0, 0, 0 );

  FUNC_4(VAR_13->procp);
  VAR_19 = FUNC_3( VAR_13->procp, VAR_13->aiocb.aio_fildes);
  if ( VAR_19 < 1 ) {

   FUNC_9(&VAR_13->procp->AIO_CLEANUP_SLEEP_CHAN);
   FUNC_5(VAR_13->procp);

   FUNC_1( (FUNC_0(VAR_8, VAR_5)) | VAR_9,
          (int)VAR_13->procp, (int)VAR_13->uaiocbp, 0, 0, 0 );
  } else {
   FUNC_5(VAR_13->procp);
  }
 }







 FUNC_9( (caddr_t) &VAR_13->procp->AIO_SUSPEND_SLEEP_CHAN );
 FUNC_1( (FUNC_0(VAR_8, VAR_7)) | VAR_9,
      (int)VAR_13->procp, (int)VAR_13->uaiocbp, 0, 0, 0 );





 if (VAR_14 && (VAR_16 == 0))
  FUNC_6 (VAR_15);


}
