
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int qos0_pri; int qos1_pri; int qos2_pri; int qos3_pri; int qos4_pri; int qos5_pri; int qos6_pri; int qos7_pri; } ;
union cvmx_pow_pp_grp_mskx {int u64; TYPE_1__ s; } ;
typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (char*,unsigned long long) ;

__attribute__((used)) static inline void FUNC_6(uint64_t VAR_1,
      const uint8_t VAR_2[])
{

 if (!FUNC_1(VAR_0)) {
  union cvmx_pow_pp_grp_mskx VAR_3;

  VAR_3.u64 = FUNC_3(FUNC_0(VAR_1));
  VAR_3.s.qos0_pri = VAR_2[0];
  VAR_3.s.qos1_pri = VAR_2[1];
  VAR_3.s.qos2_pri = VAR_2[2];
  VAR_3.s.qos3_pri = VAR_2[3];
  VAR_3.s.qos4_pri = VAR_2[4];
  VAR_3.s.qos5_pri = VAR_2[5];
  VAR_3.s.qos6_pri = VAR_2[6];
  VAR_3.s.qos7_pri = VAR_2[7];


  {
   int VAR_4;
   uint32_t VAR_5 = 0;

   for (VAR_4 = 0; VAR_4 < 8; VAR_4++)
    if (VAR_2[VAR_4] != 0xF)
     VAR_5 |= 1 << VAR_2[VAR_4];

   if (VAR_5 ^ ((1 << FUNC_2(VAR_5)) - 1)) {
    FUNC_5("POW static priorities should be "
           "contiguous (0x%llx)\n",
         (unsigned long long)VAR_5);
    return;
   }
  }

  FUNC_4(FUNC_0(VAR_1), VAR_3.u64);
 }
}
