
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int sival_int; } ;
struct TYPE_7__ {TYPE_1__ size_equivalent; } ;
struct TYPE_9__ {void* sigev_notify_attributes; void* sigev_notify_function; TYPE_2__ sigev_value; int sigev_signo; int sigev_notify; } ;
struct user_aiocb {TYPE_4__ aio_sigevent; int aio_lio_opcode; int aio_reqprio; int aio_nbytes; void* aio_buf; int aio_offset; int aio_fildes; } ;
struct TYPE_8__ {int sival_int; } ;
struct TYPE_10__ {int sigev_notify_attributes; int sigev_notify_function; TYPE_3__ sigev_value; int sigev_signo; int sigev_notify; } ;
struct user32_aiocb {TYPE_5__ aio_sigevent; int aio_lio_opcode; int aio_reqprio; int aio_nbytes; int aio_buf; int aio_offset; int aio_fildes; } ;


 void* FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1( struct user32_aiocb *VAR_0, struct user_aiocb *VAR_1 )
{
 VAR_1->aio_fildes = VAR_0->aio_fildes;
 VAR_1->aio_offset = VAR_0->aio_offset;
 VAR_1->aio_buf = FUNC_0(VAR_0->aio_buf);
 VAR_1->aio_nbytes = VAR_0->aio_nbytes;
 VAR_1->aio_reqprio = VAR_0->aio_reqprio;
 VAR_1->aio_lio_opcode = VAR_0->aio_lio_opcode;
 VAR_1->aio_sigevent.sigev_notify = VAR_0->aio_sigevent.sigev_notify;
 VAR_1->aio_sigevent.sigev_signo = VAR_0->aio_sigevent.sigev_signo;
 VAR_1->aio_sigevent.sigev_value.size_equivalent.sival_int =
  VAR_0->aio_sigevent.sigev_value.sival_int;
 VAR_1->aio_sigevent.sigev_notify_function =
  FUNC_0(VAR_0->aio_sigevent.sigev_notify_function);
 VAR_1->aio_sigevent.sigev_notify_attributes =
  FUNC_0(VAR_0->aio_sigevent.sigev_notify_attributes);
}
