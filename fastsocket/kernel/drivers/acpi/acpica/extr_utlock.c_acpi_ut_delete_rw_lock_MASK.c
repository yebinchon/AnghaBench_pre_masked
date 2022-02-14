
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_rw_lock {int * writer_mutex; int * reader_mutex; scalar_t__ num_readers; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct acpi_rw_lock *VAR_0)
{

 FUNC_0(VAR_0->reader_mutex);
 FUNC_0(VAR_0->writer_mutex);

 VAR_0->num_readers = 0;
 VAR_0->reader_mutex = ((void*)0);
 VAR_0->writer_mutex = ((void*)0);
}
