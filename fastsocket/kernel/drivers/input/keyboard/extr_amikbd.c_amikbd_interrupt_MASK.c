
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int irqreturn_t ;
struct TYPE_2__ {unsigned char sdr; int cra; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 (int ,unsigned char,unsigned char) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_4, void *VAR_5)
{
 unsigned char VAR_6, VAR_7;

 VAR_6 = ~VAR_3.sdr;
 VAR_3.cra |= 0x40;
 FUNC_3(85);
 VAR_3.cra &= ~0x40;

 VAR_7 = !(VAR_6 & 1);
 VAR_6 >>= 1;

 if (VAR_6 < 0x78) {
  if (VAR_6 == 98) {
   FUNC_0(VAR_1, VAR_6, 1);
   FUNC_0(VAR_1, VAR_6, 0);
  } else {
   FUNC_0(VAR_1, VAR_6, VAR_7);
  }

  FUNC_1(VAR_1);
 } else
  FUNC_2(VAR_2[VAR_6 - 0x78]);

 return VAR_0;
}
