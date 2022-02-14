
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ,int,int) ;

__attribute__((used)) static unsigned int FUNC_2(unsigned int VAR_2)
{

 struct {
  unsigned int ratio;
  u8 bitmap;

 } VAR_3[] = {
  { 30, 0x01 },
  { 35, 0x05 },
  { 40, 0x02 },
  { 45, 0x06 },
  { 50, 0x00 },
  { 55, 0x04 },
  { 60, 0x0b },
  { 65, 0x0f },
  { 70, 0x09 },
  { 75, 0x0d },
  { 80, 0x0a },
  { 85, 0x26 },
  { 90, 0x20 },
  { 100, 0x2b },
  { 0, 0xff }
 };


 struct {
  unsigned int value;
  u8 bitmap;

 } VAR_4[] = {
  { 66, 0x0 },
  { 100, 0x2 },
  { 133, 0x1 },
  { 0, 0xff}
 };

 u32 VAR_5, VAR_6;
 int VAR_7 = 0, VAR_8 = 0;


 FUNC_1(VAR_0, VAR_5, VAR_6);
 FUNC_0("P3 - MSR_IA32_EBL_CR_POWERON: 0x%x 0x%x\n", VAR_5, VAR_6);
 VAR_6 = VAR_5;


 VAR_6 &= 0x00c0000;
 VAR_6 >>= 18;
 while (VAR_6 != VAR_4[VAR_7].bitmap) {
  if (VAR_4[VAR_7].bitmap == 0xff)
   return 0;
  VAR_7++;
 }


 if (VAR_2 == VAR_1) {
  FUNC_0("workaround for early PIIIs\n");
  VAR_5 &= 0x03c00000;
 } else
  VAR_5 &= 0x0bc00000;
 VAR_5 >>= 22;
 while (VAR_5 != VAR_3[VAR_8].bitmap) {
  if (VAR_3[VAR_8].bitmap == 0xff)
   return 0;
  VAR_8++;
 }

 FUNC_0("speed is %u\n",
  (VAR_3[VAR_8].ratio * VAR_4[VAR_7].value * 100));

 return VAR_3[VAR_8].ratio * VAR_4[VAR_7].value * 100;
}
