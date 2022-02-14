
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct cardstate {int dev; } ;
 unsigned int VAR_0 ;
 int FUNC_0 (int ,char*,unsigned int) ;
 int FUNC_1 (struct cardstate*,int,int) ;

__attribute__((used)) static int FUNC_2(struct cardstate *VAR_1, unsigned VAR_2)
{
 u16 VAR_3;
 u32 VAR_4;

 VAR_2 &= VAR_0;

 switch (VAR_2) {

 case 133: VAR_4 = 300; break;
 case 129: VAR_4 = 600; break;
 case 136: VAR_4 = 1200; break;
 case 134: VAR_4 = 2400; break;
 case 131: VAR_4 = 4800; break;
 case 128: VAR_4 = 9600; break;
 case 135: VAR_4 = 19200; break;
 case 132: VAR_4 = 38400; break;
 case 130: VAR_4 = 57600; break;
 case 137: VAR_4 = 115200; break;
 default:
  VAR_4 = 9600;
  FUNC_0(VAR_1->dev, "unsupported baudrate request 0x%x,"
   " using default of B9600\n", VAR_2);
 }

 VAR_3 = 0x383fff / VAR_4 + 1;

 return FUNC_1(VAR_1, 1, VAR_3);
}
