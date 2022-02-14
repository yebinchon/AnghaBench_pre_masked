
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int** word_ram1M; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static u32 FUNC_0(u32 VAR_1)
{
  u32 VAR_2 = VAR_0->word_ram1M[0][((VAR_1 >> 1) ^ 1) & 0x1ffff];
  VAR_2 |= VAR_2 << 4;
  VAR_2 &= ~0xf0;
  return VAR_2;
}
