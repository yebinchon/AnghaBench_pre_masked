
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;


 unsigned short* VAR_0 ;
 int FUNC_0 (struct net_device*,int,unsigned short,unsigned short) ;

__attribute__((used)) static void FUNC_1(unsigned char VAR_1,
          struct net_device *VAR_2, int VAR_3)
{
 unsigned short VAR_4;
 unsigned char VAR_5;
 unsigned short *VAR_6;
 unsigned short VAR_7, VAR_8;

 VAR_6 = &VAR_0[0];
 VAR_4 = *VAR_6 & 0x00FF;
 VAR_5 = (unsigned char)((*VAR_6) >> 8);
 VAR_6++;
 while (VAR_4 != 0) {
  if (VAR_1 == VAR_5) {
   while (VAR_4 > 1) {
    VAR_7 = *VAR_6;
    VAR_8 = *(VAR_6 + 1);
    VAR_6 += 2;
    FUNC_0(VAR_2, VAR_3, VAR_7, VAR_8);
    VAR_4 -= 4;
   }
   break;
  } else {
   VAR_6 += VAR_4 / 2;
   VAR_4 = *VAR_6 & 0x00FF;
   VAR_5 = (unsigned char)((*VAR_6) >> 8);
   VAR_6++;
  }
 }
}
