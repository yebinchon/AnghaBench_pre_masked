
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timeval {int tv_sec; int tv_usec; } ;
struct comedi_subdevice {scalar_t__ type; int (* insn_read ) (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,int*) ;int (* insn_write ) (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,int*) ;int (* insn_bits ) (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,int*) ;int (* insn_config ) (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,int*) ;int * busy; TYPE_1__* async; } ;
struct comedi_insn {int insn; int* data; int n; scalar_t__ subdev; int chanspec; } ;
struct comedi_device {scalar_t__ n_subdevices; struct comedi_subdevice* subdevices; } ;
struct TYPE_2__ {int (* inttrig ) (struct comedi_device*,struct comedi_subdevice*,int) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int VAR_5 ;



 int FUNC_0 (struct comedi_subdevice*,int,int *) ;
 int FUNC_1 (struct timeval*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct comedi_device*,struct comedi_subdevice*,int) ;
 int FUNC_4 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,int*) ;
 int FUNC_5 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,int*) ;
 int FUNC_6 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,int*) ;
 int FUNC_7 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,int*) ;
 int FUNC_8 (int) ;

int FUNC_9(void *VAR_6, struct comedi_insn *VAR_7)
{
 struct comedi_device *VAR_8 = (struct comedi_device *)VAR_6;
 struct comedi_subdevice *VAR_9;
 int VAR_10 = 0;

 if (VAR_7->insn & VAR_5) {
  switch (VAR_7->insn) {
  case 132:
   {
    struct timeval VAR_11;

    FUNC_1(&VAR_11);
    VAR_7->data[0] = VAR_11.tv_sec;
    VAR_7->data[1] = VAR_11.tv_usec;
    VAR_10 = 2;

    break;
   }
  case 129:

   if (VAR_7->n != 1 || VAR_7->data[0] >= 100) {
    VAR_10 = -VAR_3;
    break;
   }
   FUNC_8(VAR_7->data[0]);
   VAR_10 = 1;
   break;
  case 131:
   if (VAR_7->n != 1) {
    VAR_10 = -VAR_3;
    break;
   }
   if (VAR_7->subdev >= VAR_8->n_subdevices) {
    FUNC_2("%d not usable subdevice\n",
           VAR_7->subdev);
    VAR_10 = -VAR_3;
    break;
   }
   VAR_9 = VAR_8->subdevices + VAR_7->subdev;
   if (!VAR_9->async) {
    FUNC_2("no async\n");
    VAR_10 = -VAR_3;
    break;
   }
   if (!VAR_9->async->inttrig) {
    FUNC_2("no inttrig\n");
    VAR_10 = -VAR_1;
    break;
   }
   VAR_10 = VAR_9->async->inttrig(VAR_8, VAR_9, VAR_7->data[0]);
   if (VAR_10 >= 0)
    VAR_10 = 1;
   break;
  default:
   VAR_10 = -VAR_3;
  }
 } else {

  if (VAR_7->subdev >= VAR_8->n_subdevices) {
   VAR_10 = -VAR_3;
   goto error;
  }
  VAR_9 = VAR_8->subdevices + VAR_7->subdev;

  if (VAR_9->type == VAR_0) {
   FUNC_2("%d not useable subdevice\n", VAR_7->subdev);
   VAR_10 = -VAR_4;
   goto error;
  }



  VAR_10 = FUNC_0(VAR_9, 1, &VAR_7->chanspec);
  if (VAR_10 < 0) {
   FUNC_2("bad chanspec\n");
   VAR_10 = -VAR_3;
   goto error;
  }

  if (VAR_9->busy) {
   VAR_10 = -VAR_2;
   goto error;
  }
  VAR_9->busy = VAR_6;

  switch (VAR_7->insn) {
  case 130:
   VAR_10 = VAR_9->insn_read(VAR_8, VAR_9, VAR_7, VAR_7->data);
   break;
  case 128:
   VAR_10 = VAR_9->insn_write(VAR_8, VAR_9, VAR_7, VAR_7->data);
   break;
  case 134:
   VAR_10 = VAR_9->insn_bits(VAR_8, VAR_9, VAR_7, VAR_7->data);
   break;
  case 133:

   VAR_10 = VAR_9->insn_config(VAR_8, VAR_9, VAR_7, VAR_7->data);
   break;
  default:
   VAR_10 = -VAR_3;
   break;
  }

  VAR_9->busy = ((void*)0);
 }
 if (VAR_10 < 0)
  goto error;
error:

 return VAR_10;
}
