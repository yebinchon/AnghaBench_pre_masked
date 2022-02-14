
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct acpi_buffer {int pointer; int * member_1; int member_0; } ;
typedef int acpi_status ;
typedef void* acpi_handle ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (void*,int ,struct acpi_buffer*) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int ,void*) ;

__attribute__((used)) static acpi_status FUNC_3(acpi_handle VAR_4, u32 VAR_5, void *VAR_6,
    void **VAR_7)
{
 acpi_status VAR_8;
 struct acpi_buffer VAR_9 = { VAR_0, ((void*)0) };
 VAR_8 = FUNC_0(VAR_4, VAR_1, &VAR_9);
 if (FUNC_2(VAR_9.pointer, VAR_6) != ((void*)0)) {
  *VAR_7 = VAR_4;
  FUNC_1(VAR_9.pointer);
  return VAR_2;
 }
 return VAR_3;
}
