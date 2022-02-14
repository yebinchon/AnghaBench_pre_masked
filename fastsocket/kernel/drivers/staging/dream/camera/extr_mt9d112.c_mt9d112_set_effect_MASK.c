
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_2__ {int addr; } ;
 long VAR_0 ;


 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 long FUNC_0 (int ,int,int,int ) ;

__attribute__((used)) static long FUNC_1(int VAR_3, int VAR_4)
{
 uint16_t VAR_5;
 uint16_t VAR_6;
 long VAR_7 = 0;

 switch (VAR_3) {
 case 129:

  VAR_5 = 0x2799;
  break;

 case 128:

  VAR_5 = 0x279B;
  break;

 default:
  VAR_5 = 0x2799;
  break;
 }

 switch (VAR_4) {
 case 134: {
  VAR_6 = 0x6440;

  VAR_7 = FUNC_0(VAR_2->addr,
   0x338C, VAR_5, VAR_1);
  if (VAR_7 < 0)
   return VAR_7;

  VAR_7 = FUNC_0(VAR_2->addr,
   0x3390, VAR_6, VAR_1);
  if (VAR_7 < 0)
   return VAR_7;
 }
   break;

 case 137: {
  VAR_6 = 0x6441;
  VAR_7 = FUNC_0(VAR_2->addr,
   0x338C, VAR_5, VAR_1);
  if (VAR_7 < 0)
   return VAR_7;

  VAR_7 = FUNC_0(VAR_2->addr,
   0x3390, VAR_6, VAR_1);
  if (VAR_7 < 0)
   return VAR_7;
 }
  break;

 case 135: {
  VAR_6 = 0x6443;
  VAR_7 = FUNC_0(VAR_2->addr,
   0x338C, VAR_5, VAR_1);
  if (VAR_7 < 0)
   return VAR_7;

  VAR_7 = FUNC_0(VAR_2->addr,
   0x3390, VAR_6, VAR_1);
  if (VAR_7 < 0)
   return VAR_7;
 }
  break;

 case 130: {
  VAR_6 = 0x6445;
  VAR_7 = FUNC_0(VAR_2->addr,
   0x338C, VAR_5, VAR_1);
  if (VAR_7 < 0)
   return VAR_7;

  VAR_7 = FUNC_0(VAR_2->addr,
   0x3390, VAR_6, VAR_1);
  if (VAR_7 < 0)
   return VAR_7;
 }
  break;

 case 131: {
  VAR_6 = 0x6442;
  VAR_7 = FUNC_0(VAR_2->addr,
   0x338C, VAR_5, VAR_1);
  if (VAR_7 < 0)
   return VAR_7;

  VAR_7 = FUNC_0(VAR_2->addr,
   0x3390, VAR_6, VAR_1);
  if (VAR_7 < 0)
   return VAR_7;
 }
  break;

 case 133:
 case 136:
 case 132:
  return -VAR_0;

 default: {
  VAR_6 = 0x6440;
  VAR_7 = FUNC_0(VAR_2->addr,
   0x338C, VAR_5, VAR_1);
  if (VAR_7 < 0)
   return VAR_7;

  VAR_7 = FUNC_0(VAR_2->addr,
   0x3390, VAR_6, VAR_1);
  if (VAR_7 < 0)
   return VAR_7;

  return -VAR_0;
 }
 }


 VAR_7 = FUNC_0(VAR_2->addr,
  0x338C, 0xA103, VAR_1);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_7 = FUNC_0(VAR_2->addr,
  0x3390, 0x0005, VAR_1);

 return VAR_7;
}
