
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* i2eBordStrPtr ;
struct TYPE_6__ {unsigned int i2eStartMail; int i2eFatal; int i2eFifoRemains; int write_fifo_spinlock; scalar_t__ i2eWaitingForEmptyFifo; int i2eFifoSize; int i2eFifoOutInts; int i2eFifoInInts; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (TYPE_1__*) ;
 unsigned int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ,int,int,...) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static inline int
FUNC_6 ( i2eBordStrPtr VAR_6 )
{
 unsigned VAR_7;
 unsigned long VAR_8;



 if (VAR_5 == ( VAR_7 = VAR_6->i2eStartMail ) ) {
  VAR_7 = FUNC_1(VAR_6);
 }
 VAR_6->i2eStartMail = VAR_5;

 FUNC_2 (VAR_1, VAR_0, 2, 1, VAR_7 );

 if (VAR_7 != VAR_5) {


  if ( VAR_7 & VAR_2 ) {
   VAR_6->i2eFatal = 1;
   goto exit_i2ServiceBoard;
  }


  if ( VAR_7 & VAR_3 ) {
   VAR_6->i2eFifoInInts++;
   FUNC_0(VAR_6);
  }

  if (VAR_7 & VAR_4) {
   VAR_6->i2eFifoOutInts++;
   FUNC_4(&VAR_6->write_fifo_spinlock, VAR_8);
   VAR_6->i2eFifoRemains = VAR_6->i2eFifoSize;
   VAR_6->i2eWaitingForEmptyFifo = 0;
   FUNC_5(&VAR_6->write_fifo_spinlock,
     VAR_8);

   FUNC_2 (VAR_1, VAR_0, 30, 1, VAR_6->i2eFifoRemains );

  }
  FUNC_3(VAR_6);
 }

 FUNC_2 (VAR_1, VAR_0, 8, 0 );

exit_i2ServiceBoard:

 return 0;
}
