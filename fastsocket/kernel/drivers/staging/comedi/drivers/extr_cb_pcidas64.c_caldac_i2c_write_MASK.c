
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct comedi_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct comedi_device*,char*) ;
 int FUNC_1 (struct comedi_device*,int,int*,int) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_2,
       unsigned int VAR_3, unsigned int VAR_4)
{
 uint8_t VAR_5[3];
 uint8_t VAR_6;
 enum pointer_bits {

  OFFSET_0_2 = 0x1,
  GAIN_0_2 = 0x2,
  OFFSET_1_3 = 0x4,
  GAIN_1_3 = 0x8,
 };
 enum data_bits {
  NOT_CLEAR_REGISTERS = 0x20,
 };

 switch (VAR_3) {
 case 0:
  VAR_6 = VAR_0;
  VAR_5[0] = OFFSET_0_2;
  break;
 case 1:
  VAR_6 = VAR_0;
  VAR_5[0] = OFFSET_1_3;
  break;
 case 2:
  VAR_6 = VAR_1;
  VAR_5[0] = OFFSET_0_2;
  break;
 case 3:
  VAR_6 = VAR_1;
  VAR_5[0] = OFFSET_1_3;
  break;
 case 4:
  VAR_6 = VAR_0;
  VAR_5[0] = GAIN_0_2;
  break;
 case 5:
  VAR_6 = VAR_0;
  VAR_5[0] = GAIN_1_3;
  break;
 case 6:
  VAR_6 = VAR_1;
  VAR_5[0] = GAIN_0_2;
  break;
 case 7:
  VAR_6 = VAR_1;
  VAR_5[0] = GAIN_1_3;
  break;
 default:
  FUNC_0(VAR_2, "invalid caldac channel\n");
  return -1;
  break;
 }
 VAR_5[1] = NOT_CLEAR_REGISTERS | ((VAR_4 >> 8) & 0xf);
 VAR_5[2] = VAR_4 & 0xff;
 FUNC_1(VAR_2, VAR_6, VAR_5, 3);
 return 0;
}
