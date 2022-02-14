
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct ath_hw {int initPDADC; int PDADCdelta; int* originalGain; TYPE_1__* eep_ops; } ;
struct TYPE_2__ {scalar_t__ (* get_eeprom ) (struct ath_hw*,int ) ;} ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (size_t,int ) ;
 size_t FUNC_1 (struct ath_hw*,int ) ;
 int FUNC_2 (struct ath_hw*,scalar_t__,int ,int) ;
 scalar_t__ FUNC_3 (struct ath_hw*,int ) ;

__attribute__((used)) static void FUNC_4(struct ath_hw *VAR_6)
{
 u32 VAR_7, VAR_8;
 int VAR_9, VAR_10, VAR_11;

 VAR_7 = FUNC_1(VAR_6, VAR_3);
 VAR_10 = FUNC_0(VAR_7, VAR_4);

 if (VAR_6->initPDADC == 0 || VAR_10 == 0)
  return;

 if (VAR_6->eep_ops->get_eeprom(VAR_6, VAR_5))
  VAR_9 = (VAR_10 - VAR_6->initPDADC + 4) / 8;
 else
  VAR_9 = (VAR_10 - VAR_6->initPDADC + 5) / 10;

 if (VAR_9 != VAR_6->PDADCdelta) {
  VAR_6->PDADCdelta = VAR_9;
  for (VAR_8 = 1; VAR_8 < VAR_0; VAR_8++) {
   VAR_11 = VAR_6->originalGain[VAR_8] - VAR_9;
   if (VAR_11 < 0)
    VAR_11 = 0;

   FUNC_2(VAR_6,
          VAR_2 + VAR_8 * 4,
          VAR_1, VAR_11);
  }
 }
}
