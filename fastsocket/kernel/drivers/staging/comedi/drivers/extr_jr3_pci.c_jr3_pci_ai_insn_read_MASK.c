
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct jr3_pci_subdev_private {scalar_t__ state; TYPE_2__* channel; } ;
struct comedi_subdevice {struct jr3_pci_subdev_private* private; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;
struct TYPE_4__ {int serial_no; int model_no; TYPE_1__* filter; int errors; } ;
struct TYPE_3__ {int v2; int v1; int mz; int my; int mx; int fz; int fy; int fx; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 unsigned int FUNC_2 (int *) ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_7,
    struct comedi_subdevice *VAR_8,
    struct comedi_insn *VAR_9, unsigned int *VAR_10)
{
 int VAR_11;
 struct jr3_pci_subdev_private *VAR_12;
 int VAR_13;

 VAR_12 = VAR_8->private;
 VAR_13 = FUNC_0(VAR_9->chanspec);
 if (VAR_12 == ((void*)0) || VAR_13 > 57) {
  VAR_11 = -VAR_1;
 } else {
  int VAR_14;

  VAR_11 = VAR_9->n;
  if (VAR_12->state != VAR_3 ||
      (FUNC_2(&VAR_12->channel->errors) & (VAR_5 | VAR_6 |
           VAR_2))) {

   if (VAR_12->state == VAR_3) {

    VAR_12->state = VAR_4;
   }
   VAR_11 = -VAR_0;
  }
  for (VAR_14 = 0; VAR_14 < VAR_9->n; VAR_14++) {
   if (VAR_13 < 56) {
    int VAR_15, VAR_16;

    VAR_15 = VAR_13 % 8;
    VAR_16 = VAR_13 / 8;
    if (VAR_12->state != VAR_3) {
     VAR_10[VAR_14] = 0;
    } else {
     int VAR_17 = 0;
     switch (VAR_15) {
     case 0:{
       VAR_17 = FUNC_1
           (&VAR_12->channel->filter
            [VAR_16].fx);
      }
      break;
     case 1:{
       VAR_17 = FUNC_1
           (&VAR_12->channel->filter
            [VAR_16].fy);
      }
      break;
     case 2:{
       VAR_17 = FUNC_1
           (&VAR_12->channel->filter
            [VAR_16].fz);
      }
      break;
     case 3:{
       VAR_17 = FUNC_1
           (&VAR_12->channel->filter
            [VAR_16].mx);
      }
      break;
     case 4:{
       VAR_17 = FUNC_1
           (&VAR_12->channel->filter
            [VAR_16].my);
      }
      break;
     case 5:{
       VAR_17 = FUNC_1
           (&VAR_12->channel->filter
            [VAR_16].mz);
      }
      break;
     case 6:{
       VAR_17 = FUNC_1
           (&VAR_12->channel->filter
            [VAR_16].v1);
      }
      break;
     case 7:{
       VAR_17 = FUNC_1
           (&VAR_12->channel->filter
            [VAR_16].v2);
      }
      break;
     }
     VAR_10[VAR_14] = VAR_17 + 0x4000;
    }
   } else if (VAR_13 == 56) {
    if (VAR_12->state != VAR_3) {
     VAR_10[VAR_14] = 0;
    } else {
     VAR_10[VAR_14] =
         FUNC_2(&VAR_12->channel->model_no);
    }
   } else if (VAR_13 == 57) {
    if (VAR_12->state != VAR_3) {
     VAR_10[VAR_14] = 0;
    } else {
     VAR_10[VAR_14] =
         FUNC_2(&VAR_12->channel->serial_no);
    }
   }
  }
 }
 return VAR_11;
}
