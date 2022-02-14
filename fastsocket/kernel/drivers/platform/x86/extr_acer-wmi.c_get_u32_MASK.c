
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int acpi_status ;
struct TYPE_4__ {int type; } ;




 int VAR_0 ;

 int VAR_1 ;
 int FUNC_0 (int *,int ,TYPE_1__*) ;
 int FUNC_1 (int *,int ,TYPE_1__*) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static acpi_status FUNC_2(u32 *VAR_3, u32 VAR_4)
{
 acpi_status VAR_5 = VAR_1;

 switch (VAR_2->type) {
 case 130:
  VAR_5 = FUNC_0(VAR_3, VAR_4, VAR_2);
  break;
 case 129:
  if (VAR_4 == VAR_0) {
   VAR_5 = FUNC_0(VAR_3, VAR_4, VAR_2);
   break;
  }
 case 128:
  VAR_5 = FUNC_1(VAR_3, VAR_4, VAR_2);
  break;
 }

 return VAR_5;
}
