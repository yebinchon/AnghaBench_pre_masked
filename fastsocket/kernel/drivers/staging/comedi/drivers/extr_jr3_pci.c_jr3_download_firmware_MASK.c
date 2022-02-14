
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct jr3_pci_subdev_private {int dummy; } ;
struct jr3_pci_dev_private {int n_channels; TYPE_3__* iobase; } ;
struct comedi_device {TYPE_1__* subdevices; struct jr3_pci_dev_private* private; } ;
struct TYPE_6__ {TYPE_2__* channel; } ;
struct TYPE_5__ {int * program_high; int * program_low; } ;
struct TYPE_4__ {struct jr3_pci_subdev_private* private; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,unsigned int,unsigned int) ;
 scalar_t__ FUNC_1 (int const*,size_t,int*,unsigned int*) ;
 int FUNC_2 (int *,unsigned int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_1, const u8 * VAR_2,
     size_t VAR_3)
{





 int VAR_4, VAR_5, VAR_6, VAR_7;

 VAR_4 = 0;
 VAR_5 = 1;
 VAR_6 = 0;
 VAR_7 = 0;
 while (VAR_5) {
  unsigned int VAR_8, VAR_9;

  VAR_5 = VAR_5 && FUNC_1(VAR_2, VAR_3, &VAR_6, &VAR_8);
  if (VAR_5 && VAR_8 == 0xffff) {
   VAR_7 = 1;
   break;
  }
  VAR_5 = VAR_5 && FUNC_1(VAR_2, VAR_3, &VAR_6, &VAR_9);
  while (VAR_5 && VAR_8 > 0) {
   unsigned int VAR_10;
   VAR_5 = VAR_5 && FUNC_1(VAR_2, VAR_3, &VAR_6, &VAR_10);
   VAR_8--;
  }
 }

 if (!VAR_7) {
  VAR_4 = -VAR_0;
 } else {
  int VAR_11;
  struct jr3_pci_dev_private *VAR_12 = VAR_1->private;

  for (VAR_11 = 0; VAR_11 < VAR_12->n_channels; VAR_11++) {
   struct jr3_pci_subdev_private *VAR_13;

   VAR_13 = VAR_1->subdevices[VAR_11].private;
   VAR_5 = 1;
   VAR_6 = 0;
   while (VAR_5) {
    unsigned int VAR_14, VAR_15;
    VAR_5 = VAR_5
        && FUNC_1(VAR_2, VAR_3, &VAR_6, &VAR_14);
    if (VAR_5 && VAR_14 == 0xffff) {
     break;
    }
    VAR_5 = VAR_5
        && FUNC_1(VAR_2, VAR_3, &VAR_6, &VAR_15);
    FUNC_0("Loading#%d %4.4x bytes at %4.4x\n", VAR_11,
           VAR_14, VAR_15);
    while (VAR_5 && VAR_14 > 0) {
     if (VAR_15 & 0x4000) {

      unsigned int VAR_16;

      VAR_5 = VAR_5
          && FUNC_1(VAR_2,
             VAR_3, &VAR_6,
             &VAR_16);
      VAR_14--;


     } else {

      unsigned int VAR_17, VAR_18;

      VAR_5 = VAR_5
          && FUNC_1(VAR_2,
             VAR_3, &VAR_6,
             &VAR_17);
      VAR_5 = VAR_5
          && FUNC_1(VAR_2, VAR_3,
             &VAR_6,
             &VAR_18);
      VAR_14 -= 2;
      if (VAR_5) {
       FUNC_2(&VAR_12->
        iobase->channel
        [VAR_11].program_low
        [VAR_15], VAR_17);
       FUNC_3(1);
       FUNC_2(&VAR_12->
        iobase->channel
        [VAR_11].program_high
        [VAR_15], VAR_18);
       FUNC_3(1);

      }
     }
     VAR_15++;
    }
   }
  }
 }
 return VAR_4;
}
