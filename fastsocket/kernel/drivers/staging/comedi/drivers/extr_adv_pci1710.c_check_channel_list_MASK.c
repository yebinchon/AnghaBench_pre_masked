
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int n_chan; } ;
struct comedi_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (char*,unsigned int) ;
 int FUNC_4 (struct comedi_device*,char*) ;
 int FUNC_5 (char*,unsigned int,unsigned int,unsigned int,scalar_t__,...) ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_1,
         struct comedi_subdevice *VAR_2,
         unsigned int *VAR_3, unsigned int VAR_4)
{
 unsigned int VAR_5[32];
 unsigned int VAR_6, VAR_7, VAR_8, VAR_9;

 FUNC_3("adv_pci1710 EDBG:  check_channel_list(...,%d)\n", VAR_4);

 if (VAR_4 < 1) {
  FUNC_4(VAR_1, "range/channel list is empty!");
  return 0;
 }

 if (VAR_4 > 1) {
  VAR_5[0] = VAR_3[0];
  for (VAR_6 = 1, VAR_8 = 1; VAR_6 < VAR_4; VAR_6++, VAR_8++) {

   if (VAR_3[0] == VAR_3[VAR_6])
    break;
   if (FUNC_1(VAR_3[VAR_6]) & 1)
    if (FUNC_0(VAR_3[VAR_6]) == VAR_0) {
     FUNC_4(VAR_1,
           "Odd channel can't be differential input!\n");
     return 0;
    }
   VAR_7 =
       (FUNC_1(VAR_5[VAR_6 - 1]) + 1) % VAR_2->n_chan;
   if (FUNC_0(VAR_5[VAR_6 - 1]) == VAR_0)
    VAR_7 = (VAR_7 + 1) % VAR_2->n_chan;
   if (VAR_7 != FUNC_1(VAR_3[VAR_6])) {
    FUNC_5
        ("channel list must be continous! chanlist[%i]=%d but must be %d or %d!\n",
         VAR_6, FUNC_1(VAR_3[VAR_6]), VAR_7,
         FUNC_1(VAR_3[0]));
    return 0;
   }
   VAR_5[VAR_6] = VAR_3[VAR_6];
  }

  for (VAR_6 = 0, VAR_9 = 0; VAR_6 < VAR_4; VAR_6++) {

   if (VAR_3[VAR_6] != VAR_5[VAR_6 % VAR_8]) {
    FUNC_5
        ("bad channel, reference or range number! chanlist[%i]=%d,%d,%d and not %d,%d,%d!\n",
         VAR_6, FUNC_1(VAR_5[VAR_6]),
         FUNC_2(VAR_5[VAR_6]),
         FUNC_0(VAR_5[VAR_6]),
         FUNC_1(VAR_3[VAR_6 % VAR_8]),
         FUNC_2(VAR_3[VAR_6 % VAR_8]),
         FUNC_0(VAR_5[VAR_6 % VAR_8]));
    return 0;
   }
  }
 } else {
  VAR_8 = 1;
 }
 return VAR_8;
}
