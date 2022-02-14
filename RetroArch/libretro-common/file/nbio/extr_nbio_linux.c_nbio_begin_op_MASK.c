
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int uint16_t ;
struct iocb {int aio_nbytes; scalar_t__ aio_offset; scalar_t__ aio_buf; int aio_lio_opcode; int aio_fildes; } ;
struct nbio_linux_t {int busy; int ctx; int len; struct iocb cb; scalar_t__ ptr; int fd; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int,struct iocb**) ;
 int FUNC_2 (struct iocb*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct nbio_linux_t* VAR_0, uint16_t VAR_1)
{
   struct iocb * VAR_2 = &VAR_0->cb;

   FUNC_2(&VAR_0->cb, 0, sizeof(VAR_0->cb));

   VAR_0->cb.aio_fildes = VAR_0->fd;
   VAR_0->cb.aio_lio_opcode = VAR_1;

   VAR_0->cb.aio_buf = (uint64_t)(uintptr_t)VAR_0->ptr;
   VAR_0->cb.aio_offset = 0;
   VAR_0->cb.aio_nbytes = VAR_0->len;

   if (FUNC_1(VAR_0->ctx, 1, &VAR_2) != 1)
      FUNC_0();

   VAR_0->busy = 1;
}
