
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int acpi_walk_callback ;
typedef int acpi_status ;
typedef scalar_t__ acpi_object_type ;
typedef int acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int (*) (scalar_t__,int ,int ,int ,void*,void**)) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (scalar_t__,int ,int ,int ,int ,void*,void**) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;

acpi_status
FUNC_8(acpi_object_type VAR_5,
      acpi_handle VAR_6,
      u32 VAR_7,
      acpi_walk_callback VAR_8,
      void *VAR_9, void **VAR_10)
{
 acpi_status VAR_11;

 FUNC_1(FUNC_8);



 if ((VAR_5 > VAR_2) || (!VAR_7) || (!VAR_8)) {
  FUNC_7(VAR_3);
 }
 VAR_11 = FUNC_4(&VAR_4);
 if (FUNC_0(VAR_11)) {
  return VAR_11;
 }







 VAR_11 = FUNC_3(VAR_0);
 if (FUNC_0(VAR_11)) {
  goto unlock_and_exit;
 }

 VAR_11 = FUNC_2(VAR_5, VAR_6, VAR_7,
     VAR_1, VAR_8,
     VAR_9, VAR_10);

 (void)FUNC_5(VAR_0);

      unlock_and_exit:
 (void)FUNC_6(&VAR_4);
 FUNC_7(VAR_11);
}
