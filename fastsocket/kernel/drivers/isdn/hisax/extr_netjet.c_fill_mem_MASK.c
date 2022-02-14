
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct TYPE_3__ {int* s_end; int* send; } ;
struct TYPE_4__ {TYPE_1__ tiger; } ;
struct BCState {TYPE_2__ hw; } ;



__attribute__((used)) static void FUNC_0(struct BCState *VAR_0, u_int *VAR_1, u_int VAR_2, int VAR_3, u_char VAR_4)
{
 u_int VAR_5=0x000000ff, VAR_6 = 0, *VAR_7=VAR_1;
 u_int VAR_8;

 VAR_6 |= VAR_4;
 if (VAR_3) {
  VAR_6 <<= 8;
  VAR_5 <<= 8;
 }
 VAR_5 ^= 0xffffffff;
 for (VAR_8=0; VAR_8<VAR_2; VAR_8++) {
  *VAR_7 &= VAR_5;
  *VAR_7++ |= VAR_6;
  if (VAR_7 > VAR_0->hw.tiger.s_end)
   VAR_7 = VAR_0->hw.tiger.send;
 }
}
