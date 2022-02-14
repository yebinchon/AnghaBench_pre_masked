
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct thermal_zone_device {int device; } ;
typedef scalar_t__ acpi_status ;
typedef int acpi_handle ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,void**) ;
 scalar_t__ FUNC_2 (int ,int ,int *) ;
 int VAR_7 ;
 int * VAR_8 ;
 int VAR_9 ;
 int * VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (char*,int,int ,int *,int *,int ) ;

__attribute__((used)) static acpi_status FUNC_4(acpi_handle VAR_12, u32 VAR_13,
      void *VAR_14, void **VAR_15)
{
 acpi_status VAR_16;
 acpi_handle VAR_17;
 struct thermal_zone_device *VAR_18;
 int VAR_19;

 VAR_19 = FUNC_1(VAR_12, (void **)&VAR_18);
 if (VAR_19)
  return 0;


 VAR_16 = FUNC_2(VAR_12, VAR_3, &VAR_17);
 if (FUNC_0(VAR_16))
  goto not_found;

 VAR_16 = FUNC_2(VAR_12, VAR_5, &VAR_17);
 if (FUNC_0(VAR_16))
  goto not_found;

 VAR_19 = FUNC_3("aux0", 0644,
      VAR_7, VAR_8,
      &VAR_18->device, VAR_12);
 if (VAR_19)
  return VAR_0;

 VAR_16 = FUNC_2(VAR_12, VAR_4, &VAR_17);
 if (FUNC_0(VAR_16))
  goto not_found;

 VAR_16 = FUNC_2(VAR_12, VAR_6, &VAR_17);
 if (FUNC_0(VAR_16))
  goto not_found;

 VAR_19 = FUNC_3("aux1", 0644,
      VAR_9, VAR_10,
      &VAR_18->device, VAR_12);
 if (VAR_19)
  return VAR_0;






 VAR_19 = FUNC_3("bios_enabled", 0444,
      VAR_11, ((void*)0),
      &VAR_18->device, VAR_12);
 if (VAR_19)
  return VAR_0;

 not_found:
 if (VAR_16 == VAR_1)
  return VAR_2;
 else
  return VAR_16;
}
