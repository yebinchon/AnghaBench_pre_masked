
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timeval {unsigned int tv_sec; unsigned int tv_usec; } ;
struct comedi_subdevice {scalar_t__ type; void* lock; int (* busy ) (struct comedi_device*,struct comedi_insn*,unsigned int*,void*) ;int (* insn_read ) (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,unsigned int*) ;unsigned int* maxdata_list; unsigned int maxdata; int (* insn_write ) (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,unsigned int*) ;int (* insn_bits ) (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,unsigned int*) ;int (* insn_config ) (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,unsigned int*) ;TYPE_1__* async; } ;
struct comedi_insn {int insn; int n; scalar_t__ subdev; int chanspec; int * data; } ;
struct comedi_device {scalar_t__ n_subdevices; struct comedi_subdevice* subdevices; } ;
struct TYPE_2__ {int (* inttrig ) (struct comedi_device*,struct comedi_subdevice*,int ) ;} ;


 scalar_t__ VAR_0 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;




 int VAR_6 ;



 int FUNC_2 (struct comedi_subdevice*,int,int *) ;
 int FUNC_3 (struct comedi_insn*,unsigned int*) ;
 int FUNC_4 (struct timeval*) ;
 int FUNC_5 (struct comedi_device*,struct comedi_subdevice*,int ) ;
 int FUNC_6 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,unsigned int*) ;
 int FUNC_7 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,unsigned int*) ;
 int FUNC_8 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,unsigned int*) ;
 int FUNC_9 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,unsigned int*) ;
 int FUNC_10 (unsigned int) ;

__attribute__((used)) static int FUNC_11(struct comedi_device *VAR_7, struct comedi_insn *VAR_8,
        unsigned int *VAR_9, void *VAR_10)
{
 struct comedi_subdevice *VAR_11;
 int VAR_12 = 0;
 int VAR_13;

 if (VAR_8->insn & VAR_6) {


  switch (VAR_8->insn) {
  case 132:
   {
    struct timeval VAR_14;

    if (VAR_8->n != 2) {
     VAR_12 = -VAR_4;
     break;
    }

    FUNC_4(&VAR_14);
    VAR_9[0] = VAR_14.tv_sec;
    VAR_9[1] = VAR_14.tv_usec;
    VAR_12 = 2;

    break;
   }
  case 129:
   if (VAR_8->n != 1 || VAR_9[0] >= 100000) {
    VAR_12 = -VAR_4;
    break;
   }
   FUNC_10(VAR_9[0] / 1000);
   VAR_12 = 1;
   break;
  case 131:
   if (VAR_8->n != 1) {
    VAR_12 = -VAR_4;
    break;
   }
   if (VAR_8->subdev >= VAR_7->n_subdevices) {
    FUNC_1("%d not usable subdevice\n",
     VAR_8->subdev);
    VAR_12 = -VAR_4;
    break;
   }
   VAR_11 = VAR_7->subdevices + VAR_8->subdev;
   if (!VAR_11->async) {
    FUNC_1("no async\n");
    VAR_12 = -VAR_4;
    break;
   }
   if (!VAR_11->async->inttrig) {
    FUNC_1("no inttrig\n");
    VAR_12 = -VAR_2;
    break;
   }
   VAR_12 = VAR_11->async->inttrig(VAR_7, VAR_11, VAR_8->data[0]);
   if (VAR_12 >= 0)
    VAR_12 = 1;
   break;
  default:
   FUNC_1("invalid insn\n");
   VAR_12 = -VAR_4;
   break;
  }
 } else {

  unsigned int VAR_15;

  if (VAR_8->subdev >= VAR_7->n_subdevices) {
   FUNC_1("subdevice %d out of range\n", VAR_8->subdev);
   VAR_12 = -VAR_4;
   goto out;
  }
  VAR_11 = VAR_7->subdevices + VAR_8->subdev;

  if (VAR_11->type == VAR_0) {
   FUNC_1("%d not usable subdevice\n", VAR_8->subdev);
   VAR_12 = -VAR_5;
   goto out;
  }


  if (VAR_11->lock && VAR_11->lock != VAR_10) {
   FUNC_1("device locked\n");
   VAR_12 = -VAR_1;
   goto out;
  }

  VAR_12 = FUNC_2(VAR_11, 1, &VAR_8->chanspec);
  if (VAR_12 < 0) {
   VAR_12 = -VAR_4;
   FUNC_1("bad chanspec\n");
   goto out;
  }

  if (VAR_11->busy) {
   VAR_12 = -VAR_3;
   goto out;
  }

  VAR_11->busy = &FUNC_11;
  switch (VAR_8->insn) {
  case 130:
   VAR_12 = VAR_11->insn_read(VAR_7, VAR_11, VAR_8, VAR_9);
   break;
  case 128:
   VAR_15 = VAR_11->maxdata_list
       ? VAR_11->maxdata_list[FUNC_0(VAR_8->chanspec)]
       : VAR_11->maxdata;
   for (VAR_13 = 0; VAR_13 < VAR_8->n; ++VAR_13) {
    if (VAR_9[VAR_13] > VAR_15) {
     VAR_12 = -VAR_4;
     FUNC_1("bad data value(s)\n");
     break;
    }
   }
   if (VAR_12 == 0)
    VAR_12 = VAR_11->insn_write(VAR_7, VAR_11, VAR_8, VAR_9);
   break;
  case 134:
   if (VAR_8->n != 2) {
    VAR_12 = -VAR_4;
    break;
   }
   VAR_12 = VAR_11->insn_bits(VAR_7, VAR_11, VAR_8, VAR_9);
   break;
  case 133:
   VAR_12 = FUNC_3(VAR_8, VAR_9);
   if (VAR_12)
    break;
   VAR_12 = VAR_11->insn_config(VAR_7, VAR_11, VAR_8, VAR_9);
   break;
  default:
   VAR_12 = -VAR_4;
   break;
  }

  VAR_11->busy = ((void*)0);
 }

out:
 return VAR_12;
}
