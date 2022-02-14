
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {int ia_rows; } ;
struct ath_hw {int * analogBank6Data; TYPE_1__* eep_ops; TYPE_2__ iniBank6; } ;
struct ath9k_channel {int dummy; } ;
struct TYPE_3__ {int (* get_eeprom ) (struct ath_hw*,int ) ;} ;


 scalar_t__ FUNC_0 (struct ath_hw*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_2__*,int,int) ;
 scalar_t__ FUNC_2 (struct ath9k_channel*) ;
 int FUNC_3 (int *,int,int) ;
 int FUNC_4 (int *,int,int,int,int ) ;
 int FUNC_5 (struct ath_hw*,int*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (struct ath_hw*,int ) ;
 int FUNC_7 (struct ath_hw*,int ) ;
 int FUNC_8 (struct ath_hw*,int ) ;
 int FUNC_9 (struct ath_hw*,int ) ;
 int FUNC_10 (struct ath_hw*,int ) ;

__attribute__((used)) static bool FUNC_11(struct ath_hw *VAR_10,
      struct ath9k_channel *VAR_11,
      u16 VAR_12)
{
 u32 VAR_13;
 u32 VAR_14 = 0, VAR_15 = 0;
 u32 VAR_16 = 0, VAR_17 = 0;
 int VAR_18 = 0;
 int VAR_19;






 if (FUNC_0(VAR_10))
  return 1;


 VAR_13 = VAR_10->eep_ops->get_eeprom(VAR_10, VAR_2);

 for (VAR_19 = 0; VAR_19 < VAR_10->iniBank6.ia_rows; VAR_19++)
  VAR_10->analogBank6Data[VAR_19] = FUNC_1(&VAR_10->iniBank6, VAR_19, VAR_12);


 if (VAR_13 >= 2) {
  if (FUNC_2(VAR_11)) {
   VAR_16 = VAR_10->eep_ops->get_eeprom(VAR_10, VAR_3);
   VAR_17 = VAR_10->eep_ops->get_eeprom(VAR_10, VAR_0);
   FUNC_4(VAR_10->analogBank6Data,
             VAR_16, 3, 197, 0);
   FUNC_4(VAR_10->analogBank6Data,
             VAR_17, 3, 194, 0);
  } else {
   VAR_14 = VAR_10->eep_ops->get_eeprom(VAR_10, VAR_4);
   VAR_15 = VAR_10->eep_ops->get_eeprom(VAR_10, VAR_1);
   FUNC_4(VAR_10->analogBank6Data,
             VAR_14, 3, 203, 0);
   FUNC_4(VAR_10->analogBank6Data,
             VAR_15, 3, 200, 0);
  }
 }


 FUNC_3(&VAR_5, 1, VAR_18);
 FUNC_3(&VAR_6, 1, VAR_18);
 FUNC_3(&VAR_7, 1, VAR_18);
 FUNC_3(&VAR_8, VAR_12, VAR_18);
 FUNC_5(VAR_10, &VAR_18);
 FUNC_3(&VAR_9, 1, VAR_18);

 return 1;
}
