
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int acpi_status ;
struct TYPE_4__ {int capability; int type; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int,int,TYPE_1__*) ;
 int FUNC_2 (int,int,TYPE_1__*) ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static acpi_status FUNC_3(u32 VAR_5, u32 VAR_6)
{
 acpi_status VAR_7;

 if (VAR_4->capability & VAR_6) {
  switch (VAR_4->type) {
  case 130:
   return FUNC_1(VAR_5, VAR_6, VAR_4);
  case 129:
   if (VAR_6 == VAR_1)
    return FUNC_1(VAR_5, VAR_6, VAR_4);







   if (VAR_6 == VAR_2 ||
    VAR_6 == VAR_0) {
    VAR_7 = FUNC_2(VAR_5, VAR_6, VAR_4);
    if (FUNC_0(VAR_7))
     return VAR_7;

    return FUNC_1(VAR_5, VAR_6, VAR_4);
   }
  case 128:
   return FUNC_2(VAR_5, VAR_6, VAR_4);
  default:
   return VAR_3;
  }
 }
 return VAR_3;
}
