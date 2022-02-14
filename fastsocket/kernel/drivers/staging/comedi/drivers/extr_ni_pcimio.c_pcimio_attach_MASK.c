
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct comedi_device {scalar_t__ irq; TYPE_2__* subdevices; int board_name; int minor; } ;
struct comedi_devconfig {int * options; } ;
struct TYPE_12__ {int reg_type; int name; } ;
struct TYPE_11__ {TYPE_3__* mite; int ** gpct_mite_ring; int * cdo_mite_ring; int * ao_mite_ring; int * ai_mite_ring; int * stc_readl; int * stc_writel; int * stc_readw; int * stc_writew; } ;
struct TYPE_10__ {TYPE_1__* pcidev; } ;
struct TYPE_9__ {int * buf_change; } ;
struct TYPE_8__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 size_t FUNC_0 (int) ;
 TYPE_7__ VAR_6 ;
 int FUNC_1 (struct comedi_device*,int *) ;
 TYPE_6__* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct comedi_device*) ;
 int FUNC_3 (struct comedi_device*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 void* FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (struct comedi_device*,struct comedi_devconfig*) ;
 int VAR_14 ;
 int FUNC_8 (struct comedi_device*) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_9 (struct comedi_device*,int ,int ) ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (scalar_t__,int ,int ,int ,struct comedi_device*) ;
 int VAR_22 ;
 int VAR_23 ;

__attribute__((used)) static int FUNC_12(struct comedi_device *VAR_24, struct comedi_devconfig *VAR_25)
{
 int VAR_26;

 FUNC_10("comedi%d: ni_pcimio:", VAR_24->minor);

 VAR_26 = FUNC_8(VAR_24);
 if (VAR_26 < 0)
  return VAR_26;

 VAR_26 = FUNC_9(VAR_24, VAR_25->options[0], VAR_25->options[1]);
 if (VAR_26 < 0)
  return VAR_26;

 FUNC_10(" %s", VAR_6.name);
 VAR_24->board_name = VAR_6.name;

 if (VAR_6.reg_type & VAR_16) {
  VAR_7->stc_writew = &VAR_13;
  VAR_7->stc_readw = &VAR_11;
  VAR_7->stc_writel = &VAR_12;
  VAR_7->stc_readl = &VAR_10;
 } else {
  VAR_7->stc_writew = &VAR_9;
  VAR_7->stc_readw = &VAR_8;
  VAR_7->stc_writel = &VAR_23;
  VAR_7->stc_readl = &VAR_22;
 }

 VAR_26 = FUNC_6(VAR_7->mite);
 if (VAR_26 < 0) {
  FUNC_10(" error setting up mite\n");
  return VAR_26;
 }
 FUNC_1(VAR_24, &VAR_7->mite->pcidev->dev);
 VAR_7->ai_mite_ring = FUNC_4(VAR_7->mite);
 if (VAR_7->ai_mite_ring == ((void*)0))
  return -VAR_1;
 VAR_7->ao_mite_ring = FUNC_4(VAR_7->mite);
 if (VAR_7->ao_mite_ring == ((void*)0))
  return -VAR_1;
 VAR_7->cdo_mite_ring = FUNC_4(VAR_7->mite);
 if (VAR_7->cdo_mite_ring == ((void*)0))
  return -VAR_1;
 VAR_7->gpct_mite_ring[0] = FUNC_4(VAR_7->mite);
 if (VAR_7->gpct_mite_ring[0] == ((void*)0))
  return -VAR_1;
 VAR_7->gpct_mite_ring[1] = FUNC_4(VAR_7->mite);
 if (VAR_7->gpct_mite_ring[1] == ((void*)0))
  return -VAR_1;

 if (VAR_6.reg_type & VAR_16)
  FUNC_3(VAR_24);
 if (VAR_6.reg_type == VAR_15)
  FUNC_2(VAR_24);

 VAR_24->irq = FUNC_5(VAR_7->mite);

 if (VAR_24->irq == 0) {
  FUNC_10(" unknown irq (bad)\n");
 } else {
  FUNC_10(" ( irq = %u )", VAR_24->irq);
  VAR_26 = FUNC_11(VAR_24->irq, VAR_14, VAR_5,
      VAR_0, VAR_24);
  if (VAR_26 < 0) {
   FUNC_10(" irq not available\n");
   VAR_24->irq = 0;
  }
 }

 VAR_26 = FUNC_7(VAR_24, VAR_25);
 if (VAR_26 < 0)
  return VAR_26;

 VAR_24->subdevices[VAR_2].buf_change = &VAR_17;
 VAR_24->subdevices[VAR_3].buf_change = &VAR_18;
 VAR_24->subdevices[FUNC_0(0)].buf_change = &VAR_20;
 VAR_24->subdevices[FUNC_0(1)].buf_change = &VAR_21;
 VAR_24->subdevices[VAR_4].buf_change = &VAR_19;

 return VAR_26;
}
