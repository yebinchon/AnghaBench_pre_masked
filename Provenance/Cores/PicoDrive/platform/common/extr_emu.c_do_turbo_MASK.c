
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int turbo_rate; } ;


 TYPE_1__ VAR_0 ;

__attribute__((used)) static void FUNC_0(int *VAR_1, int VAR_2)
{
 static int VAR_3 = 0;
 static unsigned char VAR_4[3] = { 0, 0, 0 };
 int VAR_5 = VAR_0.turbo_rate * 2;

 if (VAR_2 & 0x1000) {
  VAR_4[0] += VAR_5;
  if (VAR_4[0] >= 60)
   VAR_3 ^= 0x10, VAR_4[0] = 0;
 }
 if (VAR_2 & 0x2000) {
  VAR_4[1] += VAR_5;
  if (VAR_4[1] >= 60)
   VAR_3 ^= 0x20, VAR_4[1] = 0;
 }
 if (VAR_2 & 0x4000) {
  VAR_4[2] += VAR_5;
  if (VAR_4[2] >= 60)
   VAR_3 ^= 0x40, VAR_4[2] = 0;
 }
 *VAR_1 |= VAR_3 & (VAR_2 >> 8);
}
