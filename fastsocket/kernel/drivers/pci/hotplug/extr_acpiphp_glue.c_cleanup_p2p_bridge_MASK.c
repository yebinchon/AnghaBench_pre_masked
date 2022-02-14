
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct acpiphp_bridge {int dummy; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int (*) (int ,int ,void*,void**),int *,int *) ;
 struct acpiphp_bridge* FUNC_1 (int ) ;
 int FUNC_2 (struct acpiphp_bridge*) ;

__attribute__((used)) static acpi_status
FUNC_3(acpi_handle VAR_2, u32 VAR_3, void *VAR_4, void **VAR_5)
{
 struct acpiphp_bridge *VAR_6;



 FUNC_0(VAR_0, VAR_2, (u32)1,
    FUNC_3, ((void*)0), ((void*)0));

 VAR_6 = FUNC_1(VAR_2);
 if (VAR_6)
  FUNC_2(VAR_6);

 return VAR_1;
}
