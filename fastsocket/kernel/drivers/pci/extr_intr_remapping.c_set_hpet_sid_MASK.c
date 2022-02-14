
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct irte {int dummy; } ;
struct TYPE_2__ {scalar_t__ id; int bus; int devfn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (struct irte*,int ,int ,int) ;

int FUNC_2(struct irte *VAR_4, u8 VAR_5)
{
 int VAR_6;
 u16 VAR_7 = 0;

 if (!VAR_4)
  return -1;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  if (VAR_3[VAR_6].id == VAR_5) {
   VAR_7 = (VAR_3[VAR_6].bus << 8) | VAR_3[VAR_6].devfn;
   break;
  }
 }

 if (VAR_7 == 0) {
  FUNC_0("Failed to set source-id of HPET block (%d)\n", VAR_5);
  return -1;
 }






 FUNC_1(VAR_4, VAR_2, VAR_1, VAR_7);

 return 0;
}
