
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {int dummy; } ;
struct TYPE_6__ {int dma_maxsize; TYPE_2__* dma; } ;
struct TYPE_5__ {int buf; } ;
struct TYPE_4__ {int * inttrig; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct comedi_subdevice*,int ,int ) ;
 TYPE_3__* VAR_3 ;
 int FUNC_1 (struct comedi_device*,int,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_4,
        struct comedi_subdevice *VAR_5, unsigned int VAR_6)
{
 int VAR_7;

 if (VAR_6 != 0)
  return -VAR_1;

 VAR_7 = FUNC_0(VAR_5, VAR_3->dma[0].buf,
       VAR_3->dma_maxsize);
 if (VAR_7 == 0) {
  FUNC_2("dt282x: AO underrun\n");
  return -VAR_2;
 }
 FUNC_1(VAR_4, 0, VAR_7);

 VAR_7 = FUNC_0(VAR_5, VAR_3->dma[1].buf,
       VAR_3->dma_maxsize);
 if (VAR_7 == 0) {
  FUNC_2("dt282x: AO underrun\n");
  return -VAR_2;
 }
 FUNC_1(VAR_4, 1, VAR_7);

 FUNC_3(VAR_0);
 VAR_5->async->inttrig = ((void*)0);

 return 1;
}
