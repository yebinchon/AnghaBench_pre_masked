
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int s64 ;
struct TYPE_4__ {int d32; } ;
struct TYPE_5__ {int position; int accum; TYPE_1__ part; } ;
typedef TYPE_2__ emmh32_context ;


 int FUNC_0 (int) ;
 int* VAR_0 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(emmh32_context *VAR_1, u8 VAR_2[4])
{
 int VAR_3, VAR_4;
 u32 VAR_5;

 u64 VAR_6, VAR_7;
 s64 VAR_8;

 VAR_3 = VAR_1->position >> 2;


 VAR_4 = VAR_1->position & 3;
 if (VAR_4) {

  VAR_5 = FUNC_1(VAR_1->part.d32);
  FUNC_0(VAR_5 & VAR_0[VAR_4]);
 }


 VAR_6 = VAR_1->accum;
 VAR_8 = (VAR_6 & 0xffffffffLL) - ((VAR_6 >> 32) * 15);
 VAR_7 = (VAR_8 & 0xffffffffLL) - ((VAR_8 >> 32) * 15);
 VAR_6 = VAR_7 & 0xffffffffLL;
 if (VAR_7 > 0x10000000fLL)
  VAR_6 -= 15;

 VAR_5 = (u32)VAR_6;
 VAR_2[0] = (VAR_5>>24) & 0xFF;
 VAR_2[1] = (VAR_5>>16) & 0xFF;
 VAR_2[2] = (VAR_5>>8) & 0xFF;
 VAR_2[3] = VAR_5 & 0xFF;
}
