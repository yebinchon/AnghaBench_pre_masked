
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cap_has_phyerr_counters; } ;
struct ath5k_hw {TYPE_1__ ah_capabilities; } ;
struct ath5k_ani_state {unsigned int ofdm_errors; unsigned int sum_ofdm_errors; unsigned int cck_errors; unsigned int sum_cck_errors; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int FUNC_0 (struct ath5k_hw*,int ) ;
 int FUNC_1 (struct ath5k_hw*,unsigned int,int ) ;

__attribute__((used)) static int
FUNC_2(struct ath5k_hw *VAR_5,
        struct ath5k_ani_state *VAR_6)
{
 unsigned int VAR_7, VAR_8;

 if (!VAR_5->ah_capabilities.cap_has_phyerr_counters)
  return 0;

 VAR_7 = FUNC_0(VAR_5, VAR_0);
 VAR_8 = FUNC_0(VAR_5, VAR_1);


 FUNC_1(VAR_5, VAR_4 - VAR_3,
      VAR_0);
 FUNC_1(VAR_5, VAR_4 - VAR_2,
      VAR_1);

 VAR_7 = VAR_3 - (VAR_4 - VAR_7);
 VAR_8 = VAR_2 - (VAR_4 - VAR_8);



 if (VAR_7 <= 0 && VAR_8 <= 0)
  return 0;


 if (VAR_7 > 0) {
  VAR_6->ofdm_errors += VAR_7;
  VAR_6->sum_ofdm_errors += VAR_7;
 }
 if (VAR_8 > 0) {
  VAR_6->cck_errors += VAR_8;
  VAR_6->sum_cck_errors += VAR_8;
 }
 return 1;
}
