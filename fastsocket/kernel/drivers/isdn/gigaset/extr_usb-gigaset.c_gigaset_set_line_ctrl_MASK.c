
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct cardstate {int dev; } ;






 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct cardstate*,int,int) ;

__attribute__((used)) static int FUNC_2(struct cardstate *VAR_4, unsigned VAR_5)
{
 u16 VAR_6 = 0;


 if (VAR_5 & VAR_2)
  VAR_6 |= (VAR_5 & VAR_3) ? 0x10 : 0x20;


 switch (VAR_5 & VAR_0) {
 case 131:
  VAR_6 |= 5 << 8; break;
 case 130:
  VAR_6 |= 6 << 8; break;
 case 129:
  VAR_6 |= 7 << 8; break;
 case 128:
  VAR_6 |= 8 << 8; break;
 default:
  FUNC_0(VAR_4->dev, "CSIZE was not CS5-CS8, using default of 8\n");
  VAR_6 |= 8 << 8;
  break;
 }


 if (VAR_5 & VAR_1) {
  if ((VAR_5 & VAR_0) == 131)
   VAR_6 |= 1;
  else
   VAR_6 |= 2;
 }

 return FUNC_1(VAR_4, 3, VAR_6);
}
