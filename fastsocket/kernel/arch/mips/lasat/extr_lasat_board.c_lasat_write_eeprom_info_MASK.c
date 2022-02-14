
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lasat_eeprom_struct {int dummy; } ;
struct TYPE_3__ {unsigned long crc32; } ;
struct TYPE_4__ {TYPE_1__ li_eeprom_info; } ;


 int FUNC_0 (int ,unsigned char*,int) ;
 unsigned long FUNC_1 (unsigned char*,int) ;
 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(void)
{
 unsigned long VAR_2;

 FUNC_2(&VAR_1);


 VAR_2 = FUNC_1((unsigned char *)(&VAR_0.li_eeprom_info),
      sizeof(struct lasat_eeprom_struct) - 4);
 VAR_0.li_eeprom_info.crc32 = VAR_2;


 FUNC_0(0, (unsigned char *)&VAR_0.li_eeprom_info,
      sizeof(struct lasat_eeprom_struct));

 FUNC_3(&VAR_1);
}
