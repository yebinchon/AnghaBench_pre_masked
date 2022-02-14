
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int const uint8_t ;
typedef unsigned int uint16_t ;
struct comedi_device {int dummy; } ;
struct TYPE_2__ {void* plx9080_iobase; int plx_control_bits; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (void* const) ;
 int FUNC_2 (int const) ;
 int FUNC_3 (int,void* const) ;

__attribute__((used)) static uint16_t FUNC_4(struct comedi_device *VAR_6, uint8_t VAR_7)
{
 static const int VAR_8 = 11;
 static const int VAR_9 = 0x6;
 unsigned int VAR_10 = (VAR_9 << 8) | VAR_7;
 unsigned int VAR_11;
 void *const VAR_12 =
     FUNC_0(VAR_6)->plx9080_iobase + VAR_5;
 uint16_t VAR_13;
 static const int VAR_14 = 16;
 static const int VAR_15 = 1;

 FUNC_2(VAR_15);
 FUNC_0(VAR_6)->plx_control_bits &= ~VAR_0 & ~VAR_1;

 FUNC_0(VAR_6)->plx_control_bits |= VAR_4;
 FUNC_3(FUNC_0(VAR_6)->plx_control_bits, VAR_12);

 FUNC_2(VAR_15);
 FUNC_0(VAR_6)->plx_control_bits |= VAR_1;
 FUNC_3(FUNC_0(VAR_6)->plx_control_bits, VAR_12);


 for (VAR_11 = 1 << (VAR_8 - 1); VAR_11; VAR_11 >>= 1) {

  FUNC_2(VAR_15);
  if (VAR_10 & VAR_11)
   FUNC_0(VAR_6)->plx_control_bits |= VAR_3;
  else
   FUNC_0(VAR_6)->plx_control_bits &= ~VAR_3;
  FUNC_3(FUNC_0(VAR_6)->plx_control_bits, VAR_12);

  FUNC_2(VAR_15);
  FUNC_0(VAR_6)->plx_control_bits |= VAR_0;
  FUNC_3(FUNC_0(VAR_6)->plx_control_bits, VAR_12);
  FUNC_2(VAR_15);
  FUNC_0(VAR_6)->plx_control_bits &= ~VAR_0;
  FUNC_3(FUNC_0(VAR_6)->plx_control_bits, VAR_12);
 }

 VAR_13 = 0;
 for (VAR_11 = 1 << (VAR_14 - 1); VAR_11; VAR_11 >>= 1) {

  FUNC_2(VAR_15);
  FUNC_0(VAR_6)->plx_control_bits |= VAR_0;
  FUNC_3(FUNC_0(VAR_6)->plx_control_bits, VAR_12);
  FUNC_2(VAR_15);
  FUNC_0(VAR_6)->plx_control_bits &= ~VAR_0;
  FUNC_3(FUNC_0(VAR_6)->plx_control_bits, VAR_12);
  FUNC_2(VAR_15);
  if (FUNC_1(VAR_12) & VAR_2)
   VAR_13 |= VAR_11;
 }


 FUNC_2(VAR_15);
 FUNC_0(VAR_6)->plx_control_bits &= ~VAR_1;
 FUNC_3(FUNC_0(VAR_6)->plx_control_bits, VAR_12);

 return VAR_13;
}
