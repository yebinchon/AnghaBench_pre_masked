
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u64 ;
struct amd64_pvt {scalar_t__ ext_model; TYPE_1__* csels; } ;
struct TYPE_4__ {int x86; } ;
struct TYPE_3__ {int* csbases; int* csmasks; } ;


 int FUNC_0 (int,int) ;
 scalar_t__ VAR_0 ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static void FUNC_1(struct amd64_pvt *VAR_2, int VAR_3, u8 VAR_4,
     u64 *VAR_5, u64 *VAR_6)
{
 u64 VAR_7, VAR_8, VAR_9, VAR_10;
 u8 VAR_11;

 if (VAR_1.x86 == 0xf && VAR_2->ext_model < VAR_0) {
  VAR_7 = VAR_2->csels[VAR_4].csbases[VAR_3];
  VAR_8 = VAR_2->csels[VAR_4].csmasks[VAR_3];
  VAR_9 = FUNC_0(21, 31) | FUNC_0(9, 15);
  VAR_10 = FUNC_0(21, 29) | FUNC_0(9, 15);
  VAR_11 = 4;





 } else if (VAR_1.x86 == 0x16) {
  VAR_7 = VAR_2->csels[VAR_4].csbases[VAR_3];
  VAR_8 = VAR_2->csels[VAR_4].csmasks[VAR_3 >> 1];

  *VAR_5 = (VAR_7 & FUNC_0(5, 15)) << 6;
  *VAR_5 |= (VAR_7 & FUNC_0(19, 30)) << 8;

  *VAR_6 = ~0ULL;

  *VAR_6 &= ~((FUNC_0(5, 15) << 6) |
      (FUNC_0(19, 30) << 8));

  *VAR_6 |= (VAR_8 & FUNC_0(5, 15)) << 6;
  *VAR_6 |= (VAR_8 & FUNC_0(19, 30)) << 8;

  return;
 } else {
  VAR_7 = VAR_2->csels[VAR_4].csbases[VAR_3];
  VAR_8 = VAR_2->csels[VAR_4].csmasks[VAR_3 >> 1];
  VAR_11 = 8;

  if (VAR_1.x86 == 0x15)
   VAR_9 = VAR_10 = FUNC_0(19,30) | FUNC_0(5,13);
  else
   VAR_9 = VAR_10 = FUNC_0(19,28) | FUNC_0(5,13);
 }

 *VAR_5 = (VAR_7 & VAR_9) << VAR_11;

 *VAR_6 = ~0ULL;

 *VAR_6 &= ~(VAR_10 << VAR_11);

 *VAR_6 |= (VAR_8 & VAR_10) << VAR_11;
}
