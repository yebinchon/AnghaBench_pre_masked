
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath_hw {int radar_conf; } ;
struct TYPE_2__ {int (* set_radar_params ) (struct ath_hw*,int *) ;} ;


 TYPE_1__* FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (struct ath_hw*,int *) ;

__attribute__((used)) static inline void FUNC_2(struct ath_hw *VAR_0)
{
 if (!FUNC_0(VAR_0)->set_radar_params)
  return;

 FUNC_0(VAR_0)->set_radar_params(VAR_0, &VAR_0->radar_conf);
}
