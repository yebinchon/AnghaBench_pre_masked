
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int acpi_status ;
typedef size_t acpi_mutex_handle ;
struct TYPE_2__ {scalar_t__ use_count; int thread_id; int mutex; } ;


 int FUNC_0 (int ,size_t) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int VAR_5 ;

__attribute__((used)) static acpi_status FUNC_3(acpi_mutex_handle VAR_6)
{
 acpi_status VAR_7 = VAR_3;

 FUNC_0(VAR_5, VAR_6);

 if (VAR_6 > VAR_0) {
  FUNC_2(VAR_2);
 }

 if (!VAR_4[VAR_6].mutex) {
  VAR_7 =
      FUNC_1(&VAR_4[VAR_6].mutex);
  VAR_4[VAR_6].thread_id =
      VAR_1;
  VAR_4[VAR_6].use_count = 0;
 }

 FUNC_2(VAR_7);
}
