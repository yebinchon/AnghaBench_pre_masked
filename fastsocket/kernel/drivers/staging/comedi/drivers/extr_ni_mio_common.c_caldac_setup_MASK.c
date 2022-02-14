
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct comedi_subdevice {int n_chan; unsigned int* maxdata_list; int maxdata; } ;
struct comedi_device {int dummy; } ;
struct TYPE_6__ {int* caldac; } ;
struct TYPE_5__ {int n_bits; int n_chans; } ;
struct TYPE_4__ {unsigned int* caldac_maxdata_list; } ;


 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_0 (struct comedi_device*,int,int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_5, struct comedi_subdevice *VAR_6)
{
 int VAR_7, VAR_8;
 int VAR_9;
 int VAR_10 = 0;
 int VAR_11;
 int VAR_12 = 0;
 int VAR_13;
 int VAR_14;

 VAR_13 = VAR_1.caldac[0];
 if (VAR_13 == VAR_2)
  return;
 VAR_11 = VAR_3[VAR_13].n_bits;
 for (VAR_7 = 0; VAR_7 < 3; VAR_7++) {
  VAR_13 = VAR_1.caldac[VAR_7];
  if (VAR_13 == VAR_2)
   break;
  if (VAR_3[VAR_13].n_bits != VAR_11)
   VAR_12 = 1;
  VAR_10 += VAR_3[VAR_13].n_chans;
 }
 VAR_9 = VAR_7;
 VAR_6->n_chan = VAR_10;

 if (VAR_12) {
  unsigned int *VAR_15;

  if (VAR_10 > VAR_0) {
   FUNC_1("BUG! MAX_N_CALDACS too small\n");
  }
  VAR_6->maxdata_list = VAR_15 = VAR_4->caldac_maxdata_list;
  VAR_14 = 0;
  for (VAR_7 = 0; VAR_7 < VAR_9; VAR_7++) {
   VAR_13 = VAR_1.caldac[VAR_7];
   for (VAR_8 = 0; VAR_8 < VAR_3[VAR_13].n_chans; VAR_8++) {
    VAR_15[VAR_14] =
        (1 << VAR_3[VAR_13].n_bits) - 1;
    VAR_14++;
   }
  }

  for (VAR_14 = 0; VAR_14 < VAR_6->n_chan; VAR_14++)
   FUNC_0(VAR_5, VAR_7, VAR_6->maxdata_list[VAR_7] / 2);
 } else {
  VAR_13 = VAR_1.caldac[0];
  VAR_6->maxdata = (1 << VAR_3[VAR_13].n_bits) - 1;

  for (VAR_14 = 0; VAR_14 < VAR_6->n_chan; VAR_14++)
   FUNC_0(VAR_5, VAR_7, VAR_6->maxdata / 2);
 }
}
