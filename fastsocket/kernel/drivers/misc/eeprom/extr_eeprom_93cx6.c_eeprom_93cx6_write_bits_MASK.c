
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct eeprom_93cx6 {int reg_data_in; int (* register_write ) (struct eeprom_93cx6*) ;scalar_t__ reg_data_out; int (* register_read ) (struct eeprom_93cx6*) ;} ;


 int FUNC_0 (struct eeprom_93cx6*) ;
 int FUNC_1 (struct eeprom_93cx6*) ;
 int FUNC_2 (struct eeprom_93cx6*) ;
 int FUNC_3 (struct eeprom_93cx6*) ;
 int FUNC_4 (struct eeprom_93cx6*) ;

__attribute__((used)) static void FUNC_5(struct eeprom_93cx6 *VAR_0,
 const u16 VAR_1, const u16 VAR_2)
{
 unsigned int VAR_3;

 VAR_0->register_read(VAR_0);




 VAR_0->reg_data_in = 0;
 VAR_0->reg_data_out = 0;




 for (VAR_3 = VAR_2; VAR_3 > 0; VAR_3--) {



  VAR_0->reg_data_in = !!(VAR_1 & (1 << (VAR_3 - 1)));




  VAR_0->register_write(VAR_0);




  FUNC_0(VAR_0);
  FUNC_1(VAR_0);
 }

 VAR_0->reg_data_in = 0;
 VAR_0->register_write(VAR_0);
}
