
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int reference_count; int type; } ;
union acpi_operand_object {TYPE_1__ common; } ;
typedef int u32 ;
typedef int u16 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int VAR_3 ;



 int FUNC_4 (union acpi_operand_object*) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_5(union acpi_operand_object *VAR_5, u32 VAR_6)
{
 u16 VAR_7;
 u16 VAR_8;

 FUNC_2(VAR_4);

 if (!VAR_5) {
  return;
 }

 VAR_7 = VAR_5->common.reference_count;
 VAR_8 = VAR_7;




 switch (VAR_6) {
 case 128:

  VAR_8++;
  VAR_5->common.reference_count = VAR_8;

  FUNC_0((VAR_0,
      "Obj %p Refs=%X, [Incremented]\n",
      VAR_5, VAR_8));
  break;

 case 130:

  if (VAR_7 < 1) {
   FUNC_0((VAR_0,
       "Obj %p Refs=%X, can't decrement! (Set to 0)\n",
       VAR_5, VAR_8));

   VAR_8 = 0;
  } else {
   VAR_8--;

   FUNC_0((VAR_0,
       "Obj %p Refs=%X, [Decremented]\n",
       VAR_5, VAR_8));
  }

  if (VAR_5->common.type == VAR_2) {
   FUNC_0((VAR_0,
       "Method Obj %p Refs=%X, [Decremented]\n",
       VAR_5, VAR_8));
  }

  VAR_5->common.reference_count = VAR_8;
  if (VAR_8 == 0) {
   FUNC_4(VAR_5);
  }
  break;

 case 129:

  FUNC_0((VAR_0,
      "Obj %p Refs=%X, Force delete! (Set to 0)\n",
      VAR_5, VAR_7));

  VAR_8 = 0;
  VAR_5->common.reference_count = VAR_8;
  FUNC_4(VAR_5);
  break;

 default:

  FUNC_1((VAR_3, "Unknown action (%X)", VAR_6));
  break;
 }





 if (VAR_7 > VAR_1) {
  FUNC_3((VAR_3,
         "Large Reference Count (%X) in object %p", VAR_7,
         VAR_5));
 }
}
