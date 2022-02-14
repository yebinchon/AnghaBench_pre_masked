
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* dma; scalar_t__ usedma; } ;
struct TYPE_3__ {int chan; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct comedi_device *VAR_1)
{
 if (VAR_0->usedma) {
  FUNC_0(VAR_0->dma[0].chan);
  FUNC_0(VAR_0->dma[1].chan);
 }
}
