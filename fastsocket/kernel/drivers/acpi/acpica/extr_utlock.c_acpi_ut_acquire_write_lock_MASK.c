
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_rw_lock {int writer_mutex; } ;
typedef int acpi_status ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

acpi_status FUNC_1(struct acpi_rw_lock *VAR_1)
{
 acpi_status VAR_2;

 VAR_2 = FUNC_0(VAR_1->writer_mutex, VAR_0);
 return VAR_2;
}
