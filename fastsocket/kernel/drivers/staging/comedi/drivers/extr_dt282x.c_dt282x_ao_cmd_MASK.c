
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {scalar_t__ iobase; } ;
struct comedi_cmd {int stop_arg; int chanlist_len; int scan_begin_arg; } ;
struct TYPE_4__ {scalar_t__ usedma; int supcsr; int ntrig; int nread; int dacsr; scalar_t__ current_dma_index; int dma_dir; } ;
struct TYPE_3__ {int inttrig; struct comedi_cmd cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct comedi_device*,char*) ;
 TYPE_2__* VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (struct comedi_device*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_15, struct comedi_subdevice *VAR_16)
{
 int VAR_17;
 struct comedi_cmd *VAR_18 = &VAR_16->async->cmd;

 if (VAR_13->usedma == 0) {
  FUNC_0(VAR_15,
        "driver requires 2 dma channels to execute command");
  return -VAR_11;
 }

 FUNC_1(VAR_15);

 VAR_13->supcsr = VAR_7 | VAR_6 | VAR_5;
 FUNC_5(VAR_2 | VAR_1 | VAR_3);

 VAR_13->ntrig = VAR_18->stop_arg * VAR_18->chanlist_len;
 VAR_13->nread = VAR_13->ntrig;

 VAR_13->dma_dir = VAR_0;
 VAR_13->current_dma_index = 0;

 VAR_17 = FUNC_2(&VAR_18->scan_begin_arg, VAR_12);
 FUNC_3(VAR_17, VAR_15->iobase + VAR_10);

 VAR_13->dacsr = VAR_9 | VAR_4 | VAR_8;
 FUNC_4(0);

 VAR_16->async->inttrig = VAR_14;

 return 0;
}
