
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_2__ {unsigned int* ao_range; int * eeprom_data; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct comedi_device*,int ,int ,unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 TYPE_1__* VAR_0 ;
 unsigned int FUNC_4 (int ) ;
 unsigned int FUNC_5 (int ) ;
 int FUNC_6 (unsigned int) ;
 int FUNC_7 (unsigned int) ;
 size_t FUNC_8 (unsigned int,unsigned int) ;
 size_t FUNC_9 (unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_10(struct comedi_device *VAR_1, unsigned int VAR_2,
    unsigned int VAR_3)
{
 unsigned int VAR_4, VAR_5, VAR_6, VAR_7;


 VAR_0->ao_range[VAR_2] = VAR_3;


 VAR_4 =
     FUNC_4(VAR_0->eeprom_data
          [FUNC_9(VAR_2, VAR_3)]);
 VAR_5 =
     FUNC_5(VAR_0->eeprom_data
        [FUNC_9(VAR_2, VAR_3)]);
 VAR_6 =
     FUNC_4(VAR_0->eeprom_data
          [FUNC_8(VAR_2, VAR_3)]);
 VAR_7 =
     FUNC_5(VAR_0->eeprom_data
        [FUNC_8(VAR_2, VAR_3)]);


 FUNC_1(VAR_1, FUNC_0(VAR_2),
          FUNC_3(VAR_2), VAR_4);
 FUNC_1(VAR_1, FUNC_0(VAR_2),
          FUNC_7(VAR_2), VAR_5);
 FUNC_1(VAR_1, FUNC_0(VAR_2),
          FUNC_2(VAR_2), VAR_6);
 FUNC_1(VAR_1, FUNC_0(VAR_2),
          FUNC_6(VAR_2), VAR_7);
}
