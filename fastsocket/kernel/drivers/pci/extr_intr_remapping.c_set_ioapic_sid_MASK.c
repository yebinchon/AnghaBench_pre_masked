
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct irte {int dummy; } ;
struct TYPE_2__ {int id; int bus; int devfn; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct irte*,int,int ,int) ;

int FUNC_2(struct irte *VAR_2, int VAR_3)
{
 int VAR_4;
 u16 VAR_5 = 0;

 if (!VAR_2)
  return -1;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (VAR_1[VAR_4].id == VAR_3) {
   VAR_5 = (VAR_1[VAR_4].bus << 8) | VAR_1[VAR_4].devfn;
   break;
  }
 }

 if (VAR_5 == 0) {
  FUNC_0("Failed to set source-id of IOAPIC (%d)\n", VAR_3);
  return -1;
 }

 FUNC_1(VAR_2, 1, 0, VAR_5);

 return 0;
}
