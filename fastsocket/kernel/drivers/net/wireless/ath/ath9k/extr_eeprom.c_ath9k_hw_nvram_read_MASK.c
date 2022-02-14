
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct ath_hw {scalar_t__ eeprom_blob; } ;
struct ath_common {TYPE_1__* bus_ops; } ;
struct TYPE_2__ {int (* eeprom_read ) (struct ath_common*,int ,int *) ;} ;


 int VAR_0 ;
 struct ath_common* FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (struct ath_hw*,int ,int *) ;
 int FUNC_2 (struct ath_common*,int ,char*,int ) ;
 int FUNC_3 (struct ath_common*,int ,int *) ;

bool FUNC_4(struct ath_hw *VAR_1, u32 VAR_2, u16 *VAR_3)
{
 struct ath_common *VAR_4 = FUNC_0(VAR_1);
 bool VAR_5;

 if (VAR_1->eeprom_blob)
  VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3);
 else
  VAR_5 = VAR_4->bus_ops->eeprom_read(VAR_4, VAR_2, VAR_3);

 if (!VAR_5)
  FUNC_2(VAR_4, VAR_0,
   "unable to read eeprom region at offset %u\n", VAR_2);

 return VAR_5;
}
