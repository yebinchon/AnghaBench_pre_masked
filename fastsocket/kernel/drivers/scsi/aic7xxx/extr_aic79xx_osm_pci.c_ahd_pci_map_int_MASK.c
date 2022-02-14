
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ahd_softc {TYPE_2__* dev_softc; TYPE_1__* platform_data; } ;
struct TYPE_4__ {int irq; } ;
struct TYPE_3__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,char*,struct ahd_softc*) ;

int
FUNC_1(struct ahd_softc *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2->dev_softc->irq, VAR_1,
       VAR_0, "aic79xx", VAR_2);
 if (!VAR_3)
  VAR_2->platform_data->irq = VAR_2->dev_softc->irq;

 return (-VAR_3);
}
