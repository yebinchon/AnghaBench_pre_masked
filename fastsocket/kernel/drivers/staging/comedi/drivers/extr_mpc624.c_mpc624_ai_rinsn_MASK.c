
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int chanspec; int n; } ;
struct comedi_device {scalar_t__ iobase; } ;
struct TYPE_2__ {unsigned long ulConvertionRate; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 scalar_t__ VAR_9 ;
 unsigned long VAR_10 ;
 int VAR_11 ;
 TYPE_1__* VAR_12 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_13,
      struct comedi_subdevice *VAR_14, struct comedi_insn *VAR_15,
      unsigned int *VAR_16)
{
 int VAR_17, VAR_18;
 unsigned long int VAR_19, VAR_20;
 unsigned char VAR_21;


 FUNC_1(VAR_15->chanspec, VAR_13->iobase + VAR_9);

 if (!VAR_15->n) {
  FUNC_2("MPC624: Warning, no data to aquire\n");
  return 0;
 }

 for (VAR_17 = 0; VAR_17 < VAR_15->n; VAR_17++) {

  FUNC_1(VAR_4, VAR_13->iobase + VAR_2);
  FUNC_3(1);
  FUNC_1(VAR_3 | VAR_4, VAR_13->iobase + VAR_2);
  FUNC_3(1);
  FUNC_1(0, VAR_13->iobase + VAR_2);
  FUNC_3(1);


  for (VAR_18 = 0; VAR_18 < VAR_11; VAR_18++) {
   VAR_21 = FUNC_0(VAR_13->iobase + VAR_2);
   if (VAR_21 & VAR_1)
    FUNC_3(1000);
   else
    break;
  }
  if (VAR_18 == VAR_11) {
   FUNC_2("MPC624: timeout (%dms)\n", VAR_11);
   VAR_16[VAR_17] = 0;
   return -VAR_0;
  }

  VAR_19 = 0;
  VAR_20 = VAR_12->ulConvertionRate;
  FUNC_3(1);
  for (VAR_18 = 0; VAR_18 < 32; VAR_18++) {

   FUNC_1(0, VAR_13->iobase + VAR_2);
   FUNC_3(1);

   if (VAR_20 & (1 << 31)) {

    FUNC_1(VAR_5, VAR_13->iobase + VAR_2);
    FUNC_3(1);

    FUNC_1(VAR_4 | VAR_5,
         VAR_13->iobase + VAR_2);
   } else {


    FUNC_1(0, VAR_13->iobase + VAR_2);
    FUNC_3(1);

    FUNC_1(VAR_4, VAR_13->iobase + VAR_2);
   }

   FUNC_3(1);
   VAR_19 <<= 1;
   VAR_19 |=
       (FUNC_0(VAR_13->iobase + VAR_2) & VAR_6) >> 4;
   FUNC_3(1);

   VAR_20 <<= 1;
  }
  if (VAR_19 & VAR_8)
   FUNC_2("MPC624: EOC bit is set (data_in=%lu)!",
          VAR_19);
  if (VAR_19 & VAR_7)
   FUNC_2("MPC624: DMY bit is set (data_in=%lu)!",
          VAR_19);
  if (VAR_19 & VAR_10) {
   VAR_19 &= 0x3FFFFFFF;
   VAR_16[VAR_17] = VAR_19;

  } else {

   VAR_19 |= VAR_10;
   VAR_19 = ~VAR_19;
   VAR_19 += 1;
   VAR_19 &= ~(VAR_8 | VAR_7);

   VAR_19 = 0x20000000 - VAR_19;
   VAR_16[VAR_17] = VAR_19;
  }
 }


 return VAR_17;
}
