
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {scalar_t__ iobase; } ;
struct TYPE_2__ {int (* write_byte ) (int,scalar_t__) ;int dma_chan; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct comedi_device*) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct comedi_device *VAR_2)
{
 FUNC_1(VAR_2);

 FUNC_0(VAR_1->dma_chan);


 VAR_1->write_byte(0x1, VAR_2->iobase + VAR_0);
}
