
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int io_bits; } ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ ioaddr; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 unsigned char VAR_11 ;
 unsigned char VAR_12 ;
 unsigned char VAR_13 ;
 unsigned char VAR_14 ;
 TYPE_1__* VAR_15 ;
 unsigned char FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned char,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_16,
    struct comedi_subdevice *VAR_17)
{
 unsigned char VAR_18;
 unsigned char VAR_19;
 unsigned char VAR_20;

 VAR_18 = FUNC_0(VAR_15->ioaddr + VAR_9);
 VAR_19 = FUNC_0(VAR_15->ioaddr + VAR_10);
 VAR_20 = FUNC_0(VAR_15->ioaddr + VAR_8);

 if (VAR_17->io_bits & 0x000000ff) {

  VAR_18 &= VAR_12;
  VAR_20 = (VAR_20 & (~(VAR_0 << VAR_4))) | (VAR_2 <<
              VAR_4);
 } else {

  VAR_18 = (VAR_18 & VAR_3) | VAR_11;
  VAR_20 = (VAR_20 & (~(VAR_1 << VAR_4)));
 }
 if (VAR_17->io_bits & 0x0000ff00) {

  VAR_18 &= VAR_14;
  VAR_20 = (VAR_20 & (~(VAR_0 << VAR_5))) | (VAR_2 <<
              VAR_5);
 } else {

  VAR_18 = (VAR_18 & VAR_3) | VAR_13;
  VAR_20 = (VAR_20 & (~(VAR_1 << VAR_5)));
 }
 if (VAR_17->io_bits & 0x00ff0000) {

  VAR_19 &= VAR_12;
  VAR_20 = (VAR_20 & (~(VAR_0 << VAR_6))) | (VAR_2 <<
              VAR_6);
 } else {

  VAR_19 = (VAR_19 & VAR_3) | VAR_11;
  VAR_20 = (VAR_20 & (~(VAR_1 << VAR_6)));
 }
 if (VAR_17->io_bits & 0xff000000) {

  VAR_19 &= VAR_14;
  VAR_20 = (VAR_20 & (~(VAR_0 << VAR_7))) | (VAR_2 <<
              VAR_7);
 } else {

  VAR_19 = (VAR_19 & VAR_3) | VAR_13;
  VAR_20 = (VAR_20 & (~(VAR_1 << VAR_7)));
 }
 FUNC_1(VAR_18, VAR_15->ioaddr + VAR_9);
 FUNC_1(VAR_19, VAR_15->ioaddr + VAR_10);
 FUNC_1(VAR_20, VAR_15->ioaddr + VAR_8);
}
