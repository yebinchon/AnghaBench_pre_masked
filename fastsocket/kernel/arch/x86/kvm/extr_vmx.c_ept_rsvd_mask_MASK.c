
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long long u64 ;
struct TYPE_2__ {int x86_phys_bits; } ;


 TYPE_1__ VAR_0 ;

__attribute__((used)) static u64 FUNC_0(u64 VAR_1, int VAR_2)
{
 int VAR_3;
 u64 VAR_4 = 0;

 for (VAR_3 = 51; VAR_3 > VAR_0.x86_phys_bits; VAR_3--)
  VAR_4 |= (1ULL << VAR_3);

 if (VAR_2 > 2)

  VAR_4 |= 0xf8;
 else if (VAR_2 == 2) {
  if (VAR_1 & (1ULL << 7))

   VAR_4 |= 0x1ff000;
  else

   VAR_4 |= 0x78;
 }

 return VAR_4;
}
