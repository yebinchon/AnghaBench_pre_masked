
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eeprom_93cx6 {int (* register_write ) (struct eeprom_93cx6*) ;scalar_t__ reg_data_clock; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct eeprom_93cx6*) ;

__attribute__((used)) static inline void FUNC_2(struct eeprom_93cx6 *VAR_0)
{
 VAR_0->reg_data_clock = 0;
 VAR_0->register_write(VAR_0);






 FUNC_0(450);
}
