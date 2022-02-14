
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct qib_devdata {int (* f_eeprom_wen ) (struct qib_devdata*,int) ;int twsi_eeprom_dev; } ;


 int FUNC_0 (struct qib_devdata*,char*) ;
 int FUNC_1 (struct qib_devdata*,int ,int ,void const*,int) ;
 int FUNC_2 (struct qib_devdata*) ;
 int FUNC_3 (struct qib_devdata*,int) ;
 int FUNC_4 (struct qib_devdata*,int) ;

__attribute__((used)) static int FUNC_5(struct qib_devdata *VAR_0, u8 VAR_1,
       const void *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;

 VAR_5 = VAR_0->f_eeprom_wen(VAR_0, 1);
 VAR_4 = FUNC_2(VAR_0);
 if (VAR_4)
  FUNC_0(VAR_0, "EEPROM Reset for write failed\n");
 else
  VAR_4 = FUNC_1(VAR_0, VAR_0->twsi_eeprom_dev,
          VAR_1, VAR_2, VAR_3);
 VAR_0->f_eeprom_wen(VAR_0, VAR_5);
 return VAR_4;
}
