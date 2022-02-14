
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_rw_lock {int writer_mutex; int reader_mutex; scalar_t__ num_readers; } ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

acpi_status FUNC_2(struct acpi_rw_lock *VAR_0)
{
 acpi_status VAR_1;

 VAR_0->num_readers = 0;
 VAR_1 = FUNC_1(&VAR_0->reader_mutex);
 if (FUNC_0(VAR_1)) {
  return VAR_1;
 }

 VAR_1 = FUNC_1(&VAR_0->writer_mutex);
 return VAR_1;
}
