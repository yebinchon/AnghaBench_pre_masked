
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fore200e {TYPE_1__* bus; int rx_tasklet; int tx_tasklet; TYPE_2__* atm_dev; } ;
struct atm_dev {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {int number; } ;
struct TYPE_3__ {scalar_t__ (* irq_check ) (struct fore200e*) ;int (* irq_ack ) (struct fore200e*) ;} ;


 int FUNC_0 (int,char*,int ) ;
 struct fore200e* FUNC_1 (struct atm_dev*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct fore200e*) ;
 scalar_t__ FUNC_3 (struct fore200e*) ;
 int FUNC_4 (struct fore200e*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static irqreturn_t
FUNC_6(int VAR_2, void* VAR_3)
{
    struct fore200e* VAR_4 = FUNC_1((struct atm_dev*)VAR_3);

    if (VAR_4->bus->irq_check(VAR_4) == 0) {

 FUNC_0(3, "interrupt NOT triggered by device %d\n", VAR_4->atm_dev->number);
 return VAR_1;
    }
    FUNC_0(3, "interrupt triggered by device %d\n", VAR_4->atm_dev->number);





    FUNC_2(VAR_4);


    VAR_4->bus->irq_ack(VAR_4);
    return VAR_0;
}
