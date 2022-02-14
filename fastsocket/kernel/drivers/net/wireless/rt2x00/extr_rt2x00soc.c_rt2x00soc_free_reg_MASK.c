
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int base; } ;
struct rt2x00_dev {TYPE_1__ csr; int * eeprom; int * rf; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct rt2x00_dev *VAR_0)
{
 FUNC_1(VAR_0->rf);
 VAR_0->rf = ((void*)0);

 FUNC_1(VAR_0->eeprom);
 VAR_0->eeprom = ((void*)0);

 FUNC_0(VAR_0->csr.base);
}
