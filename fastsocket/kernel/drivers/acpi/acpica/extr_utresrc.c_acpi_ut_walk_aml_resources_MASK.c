
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct aml_resource_end_tag {int dummy; } ;
typedef int (* acpi_walk_aml_callback ) (int *,scalar_t__,scalar_t__,int ,void**) ;
typedef int acpi_status ;
typedef int acpi_size ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int ) ;
 int VAR_3 ;

acpi_status
FUNC_6(u8 * VAR_4,
      acpi_size VAR_5,
      acpi_walk_aml_callback VAR_6, void **VAR_7)
{
 acpi_status VAR_8;
 u8 *VAR_9;
 u8 VAR_10;
 u32 VAR_11;
 u32 VAR_12 = 0;

 FUNC_1(VAR_3);



 if (VAR_5 < sizeof(struct aml_resource_end_tag)) {
  FUNC_5(VAR_1);
 }



 VAR_9 = VAR_4 + VAR_5;



 while (VAR_4 < VAR_9) {



  VAR_8 = FUNC_4(VAR_4, &VAR_10);
  if (FUNC_0(VAR_8)) {
   FUNC_5(VAR_8);
  }



  VAR_11 = FUNC_2(VAR_4);



  if (VAR_6) {
   VAR_8 =
       VAR_6(VAR_4, VAR_11, VAR_12, VAR_10,
       VAR_7);
   if (FUNC_0(VAR_8)) {
    return (VAR_8);
   }
  }



  if (FUNC_3(VAR_4) ==
      VAR_0) {




   if ((VAR_4 + 1) >= VAR_9) {
    FUNC_5(VAR_1);
   }



   if (!VAR_6) {
    *VAR_7 = VAR_4;
   }



   FUNC_5(VAR_2);
  }

  VAR_4 += VAR_11;
  VAR_12 += VAR_11;
 }



 return (VAR_1);
}
