
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
struct TYPE_6__ {int cntlstat; } ;
struct TYPE_7__ {TYPE_1__ parport; } ;
struct TYPE_8__ {TYPE_2__ ctrl; } ;
struct TYPE_10__ {TYPE_3__ perif; } ;
struct TYPE_9__ {int irq_on; int dir; int buf; size_t len; int next; size_t left; scalar_t__ ctx; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,void*,size_t,int) ;
 int FUNC_3 (int ) ;
 TYPE_5__* VAR_7 ;
 TYPE_4__ VAR_8 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,char*,int,unsigned long) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static int FUNC_7(enum dma_data_direction VAR_9,
      void *VAR_10, size_t VAR_11)
{
 unsigned int VAR_12;
 u64 VAR_13;

 FUNC_5(((void*)0), "(%d, %lu)", VAR_9, (unsigned long)VAR_11);



 FUNC_0(VAR_9 != VAR_0);


 VAR_13 = VAR_6;
 FUNC_6(VAR_13, &VAR_7->perif.ctrl.parport.cntlstat);


 if (!VAR_8.irq_on) {
  FUNC_1(1);
  FUNC_3(VAR_1);
  FUNC_3(VAR_2);
  VAR_8.irq_on = 1;
 }


 VAR_8.dir = VAR_9;
 VAR_8.buf = FUNC_2(((void*)0), VAR_10, VAR_11, VAR_9);
 VAR_8.len = VAR_11;
 VAR_8.next = VAR_8.buf;
 VAR_8.left = VAR_8.len;
 VAR_8.ctx = 0;


 VAR_13 = (VAR_9 == VAR_0) ? 0 : VAR_4;
 FUNC_6(VAR_13, &VAR_7->perif.ctrl.parport.cntlstat);

 VAR_12 = VAR_3 -
  (VAR_8.next & (VAR_3 - 1));
 FUNC_4(VAR_12);
 FUNC_4(VAR_3);


 VAR_13 |= VAR_5;
 FUNC_6(VAR_13, &VAR_7->perif.ctrl.parport.cntlstat);

 return 0;
}
