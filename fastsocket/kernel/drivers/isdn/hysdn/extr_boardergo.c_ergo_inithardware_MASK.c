
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int hysdn_lock; int irq_queue; int set_errlog_state; int waitpofready; int writebootseq; int writebootimg; int testram; int (* releasehardware ) (TYPE_1__*) ;int (* stopcard ) (TYPE_1__*) ;int irq; scalar_t__ iobase; scalar_t__ membase; int dpram; scalar_t__ memend; } ;
typedef TYPE_1__ hysdn_card ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_6 ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (scalar_t__,int) ;
 scalar_t__ FUNC_5 (int ,int ,int ,char*,TYPE_1__*) ;
 int FUNC_6 (scalar_t__,int,char*) ;
 int FUNC_7 (int *) ;

int
FUNC_8(hysdn_card * VAR_11)
{
 if (!FUNC_6(VAR_11->iobase + VAR_2, 1, "HYSDN"))
  return (-1);
 if (!FUNC_6(VAR_11->iobase + VAR_3, 1, "HYSDN")) {
  FUNC_4(VAR_11->iobase + VAR_2, 1);
  return (-1);
 }
 VAR_11->memend = VAR_11->membase + VAR_0 - 1;
 if (!(VAR_11->dpram = FUNC_3(VAR_11->membase, VAR_0))) {
  FUNC_4(VAR_11->iobase + VAR_2, 1);
  FUNC_4(VAR_11->iobase + VAR_3, 1);
  return (-1);
 }

 FUNC_2(VAR_11);
 if (FUNC_5(VAR_11->irq, VAR_4, VAR_1, "HYSDN", VAR_11)) {
  FUNC_1(VAR_11);
  return (-1);
 }

 VAR_11->stopcard = FUNC_2;
 VAR_11->releasehardware = FUNC_1;
 VAR_11->testram = VAR_7;
 VAR_11->writebootimg = VAR_9;
 VAR_11->writebootseq = VAR_10;
 VAR_11->waitpofready = VAR_8;
 VAR_11->set_errlog_state = VAR_6;
 FUNC_0(&VAR_11->irq_queue, VAR_5);
 FUNC_7(&VAR_11->hysdn_lock);

 return (0);
}
