
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ max_txtrig_level; } ;
struct ath_hw {scalar_t__ tx_trig_level; TYPE_1__ config; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (struct ath_hw*,int ) ;
 int FUNC_2 (struct ath_hw*,int ,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (struct ath_hw*) ;
 int FUNC_5 (struct ath_hw*) ;

bool FUNC_6(struct ath_hw *VAR_3, bool VAR_4)
{
 u32 VAR_5, VAR_6, VAR_7;

 if (VAR_3->tx_trig_level >= VAR_3->config.max_txtrig_level)
  return 0;

 FUNC_4(VAR_3);

 VAR_5 = FUNC_1(VAR_3, VAR_1);
 VAR_6 = FUNC_0(VAR_5, VAR_0);
 VAR_7 = VAR_6;
 if (VAR_4) {
  if (VAR_6 < VAR_3->config.max_txtrig_level)
   VAR_7++;
 } else if (VAR_6 > VAR_2)
  VAR_7--;
 if (VAR_7 != VAR_6)
  FUNC_2(VAR_3, VAR_1,
     (VAR_5 & ~VAR_0) | FUNC_3(VAR_7, VAR_0));

 FUNC_5(VAR_3);

 VAR_3->tx_trig_level = VAR_7;

 return VAR_7 != VAR_6;
}
