
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int loff_t ;
typedef int ctl_table ;
struct TYPE_3__ {int prid; } ;
struct TYPE_4__ {int li_prid; TYPE_1__ li_eeprom_info; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int,void*,size_t*,int *) ;

int FUNC_3(ctl_table *VAR_1, int VAR_2,
         void *VAR_3, size_t *VAR_4, loff_t *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_6 < 0)
  return VAR_6;
 if (VAR_2) {
  VAR_0.li_eeprom_info.prid =
   VAR_0.li_prid;
  FUNC_1();
  FUNC_0();
 }
 return 0;
}
