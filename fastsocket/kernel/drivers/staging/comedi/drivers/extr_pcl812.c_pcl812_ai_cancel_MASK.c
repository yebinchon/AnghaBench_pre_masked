
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_device {scalar_t__ iobase; } ;
struct TYPE_2__ {int mode_reg_int; int dma; scalar_t__ ai_dma; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct comedi_device*,int,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_3,
       struct comedi_subdevice *VAR_4)
{



 if (VAR_2->ai_dma)
  FUNC_0(VAR_2->dma);
 FUNC_1(0, VAR_3->iobase + VAR_0);
 FUNC_1(VAR_2->mode_reg_int | 0, VAR_3->iobase + VAR_1);
 FUNC_3(VAR_3, -1, 0, 0);
 FUNC_1(0, VAR_3->iobase + VAR_0);



 return 0;
}
