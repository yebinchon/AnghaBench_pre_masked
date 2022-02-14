
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int acpi_status ;
struct TYPE_3__ {char* name; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

acpi_status FUNC_2(char *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_2); VAR_4++) {
  if (!FUNC_1(VAR_3, VAR_2[VAR_4].name)) {
   *VAR_2[VAR_4].name = '\0';
   return VAR_1;
  }
 }
 return VAR_0;
}
