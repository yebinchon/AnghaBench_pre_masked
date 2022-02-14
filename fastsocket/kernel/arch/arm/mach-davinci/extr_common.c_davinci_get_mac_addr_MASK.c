
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct memory_accessor {scalar_t__ (* read ) (struct memory_accessor*,char*,int ,scalar_t__) ;} ;
typedef int off_t ;
struct TYPE_4__ {TYPE_1__* emac_pdata; } ;
struct TYPE_3__ {char* mac_addr; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (struct memory_accessor*,char*,int ,scalar_t__) ;

void FUNC_2(struct memory_accessor *VAR_2, void *VAR_3)
{
 char *VAR_4 = VAR_1.emac_pdata->mac_addr;
 off_t VAR_5 = (off_t)VAR_3;


 if (VAR_2->read(VAR_2, VAR_4, VAR_5, VAR_0) == VAR_0)
  FUNC_0("Read MAC addr from EEPROM: %pM\n", VAR_4);
}
