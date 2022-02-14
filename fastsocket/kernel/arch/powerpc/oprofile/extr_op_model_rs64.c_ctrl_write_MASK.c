
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,unsigned int,unsigned int) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (int ,unsigned int) ;

__attribute__((used)) static void FUNC_3(unsigned int VAR_2, unsigned int VAR_3)
{
 unsigned int VAR_4 = 0;
 unsigned long VAR_5 = 0, VAR_6 = 0;

 FUNC_0("ctrl_write %d %x\n", VAR_2, VAR_3);

 switch(VAR_2) {
 case 0:
  VAR_4 = FUNC_1(VAR_0);
  VAR_5 = 6;
  VAR_6 = 0x7F;
  break;
 case 1:
  VAR_4 = FUNC_1(VAR_0);
  VAR_5 = 0;
  VAR_6 = 0x3F;
  break;
 case 2:
  VAR_4 = FUNC_1(VAR_1);
  VAR_5 = 31 - 4;
  VAR_6 = 0x1F;
  break;
 case 3:
  VAR_4 = FUNC_1(VAR_1);
  VAR_5 = 31 - 9;
  VAR_6 = 0x1F;
  break;
 case 4:
  VAR_4 = FUNC_1(VAR_1);
  VAR_5 = 31 - 14;
  VAR_6 = 0x1F;
  break;
 case 5:
  VAR_4 = FUNC_1(VAR_1);
  VAR_5 = 31 - 19;
  VAR_6 = 0x1F;
  break;
 case 6:
  VAR_4 = FUNC_1(VAR_1);
  VAR_5 = 31 - 24;
  VAR_6 = 0x1F;
  break;
 case 7:
  VAR_4 = FUNC_1(VAR_1);
  VAR_5 = 31 - 28;
  VAR_6 = 0xF;
  break;
 }

 VAR_4 = VAR_4 & ~(VAR_6 << VAR_5);
 VAR_4 |= VAR_3 << VAR_5;

 switch(VAR_2) {
  case 0:
  case 1:
   FUNC_2(VAR_0, VAR_4);
   break;
  default:
   FUNC_2(VAR_1, VAR_4);
 }

 FUNC_0("ctrl_write mmcr0 %lx mmcr1 %lx\n", FUNC_1(VAR_0),
        FUNC_1(VAR_1));
}
