
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef scalar_t__ user_addr_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef TYPE_2__* proc_t ;
struct TYPE_14__ {int aio_fildes; int aio_nbytes; int aio_offset; } ;
struct TYPE_16__ {int flags; TYPE_1__ aiocb; int uaiocbp; int procp; } ;
typedef TYPE_3__ aio_workq_entry ;
struct TYPE_15__ {int p_aio_total_count; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,int,int,int,int,int ) ;
 scalar_t__ VAR_5 ;
 TYPE_3__* FUNC_2 (TYPE_2__*,scalar_t__,int ,int) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_2__*,TYPE_3__*,int) ;
 int FUNC_5 (TYPE_3__*) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 int FUNC_7 () ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;
 scalar_t__ FUNC_11 (int ,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (char*,int) ;

__attribute__((used)) static int
FUNC_14(proc_t VAR_8, user_addr_t VAR_9, int VAR_10 )
{
 aio_workq_entry *VAR_11;
 int VAR_12;
 int VAR_13;
    uint32_t *VAR_14;
    uint32_t *VAR_15;

 VAR_13 = FUNC_7();
 if (VAR_13 >= VAR_6) {
  VAR_12 = VAR_4;
  goto error_noalloc;
 }

 VAR_11 = FUNC_2( VAR_8, VAR_9, 0, VAR_10);
 if ( VAR_11 == ((void*)0) ) {
  VAR_12 = VAR_4;
  goto error_noalloc;
 }


 FUNC_8(VAR_8);

 if ( FUNC_11( VAR_11->procp, VAR_11->uaiocbp ) == VAR_5 ) {
  VAR_12 = VAR_4;
  goto error_exit;
 }


 if (FUNC_6( VAR_8 ) >= VAR_7) {
  FUNC_13("aio_queue_async_request(): too many in flight for proc: %d.\n", VAR_8->p_aio_total_count);
  VAR_12 = VAR_4;
  goto error_exit;
 }


 FUNC_12(FUNC_9(VAR_8));
 FUNC_4(VAR_8, VAR_11, 1);

 FUNC_10(VAR_8);

    VAR_14 = (uint32_t*) &VAR_11->aiocb.aio_offset;
    VAR_15 = (uint32_t*) &VAR_11->aiocb.aio_nbytes;
    FUNC_1( (FUNC_0(VAR_1, VAR_0)) | VAR_3,
                 (int)VAR_8, (int)VAR_9, VAR_11->flags, VAR_11->aiocb.aio_fildes, 0 );
    FUNC_1( (FUNC_0(VAR_1, VAR_0)) | VAR_2,
                          VAR_14[0], (sizeof(VAR_11->aiocb.aio_offset) == sizeof(uint64_t) ? VAR_14[1] : 0),
                          VAR_15[0], (sizeof(VAR_11->aiocb.aio_nbytes) == sizeof(uint64_t) ? VAR_15[1] : 0),
                          0 );

 return( 0 );

error_exit:




 FUNC_10(VAR_8);
 FUNC_5(VAR_11);

error_noalloc:
 FUNC_3();

 return( VAR_12 );

}
