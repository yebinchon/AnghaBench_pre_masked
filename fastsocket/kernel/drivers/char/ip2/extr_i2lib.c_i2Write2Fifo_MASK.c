
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* i2eBordStrPtr ;
struct TYPE_4__ {int i2eFifoRemains; int write_fifo_spinlock; int i2eOutMailWaiting; int i2eWaitingForEmptyFifo; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,unsigned char*,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_3(i2eBordStrPtr VAR_1, unsigned char *VAR_2, int VAR_3,int VAR_4)
{
 int VAR_5 = 0;
 unsigned long VAR_6;
 FUNC_1(&VAR_1->write_fifo_spinlock, VAR_6);
 if (!VAR_1->i2eWaitingForEmptyFifo) {
  if (VAR_1->i2eFifoRemains > (VAR_3+VAR_4)) {
   VAR_1->i2eFifoRemains -= VAR_3;
   FUNC_0(VAR_1, VAR_2, VAR_3);
   VAR_1->i2eOutMailWaiting |= VAR_0;
   VAR_5 = VAR_3;
  }
 }
 FUNC_2(&VAR_1->write_fifo_spinlock, VAR_6);
 return VAR_5;
}
