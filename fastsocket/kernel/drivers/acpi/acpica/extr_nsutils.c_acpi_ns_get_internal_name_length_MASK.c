
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct acpi_namestring_info {char* external_name; int num_segments; char const* next_external_char; scalar_t__ num_carats; scalar_t__ length; int fully_qualified; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (char const) ;
 scalar_t__ FUNC_2 (char const) ;

void FUNC_3(struct acpi_namestring_info *VAR_3)
{
 const char *VAR_4;
 u32 VAR_5;

 FUNC_0();

 VAR_4 = VAR_3->external_name;
 VAR_3->num_carats = 0;
 VAR_3->num_segments = 0;
 VAR_3->fully_qualified = VAR_1;
 if (FUNC_2(*VAR_4)) {
  VAR_3->fully_qualified = VAR_2;
  VAR_4++;



  while (FUNC_2(*VAR_4)) {
   VAR_4++;
  }
 } else {


  while (*VAR_4 == '^') {
   VAR_3->num_carats++;
   VAR_4++;
  }
 }






 if (*VAR_4) {
  VAR_3->num_segments = 1;
  for (VAR_5 = 0; VAR_4[VAR_5]; VAR_5++) {
   if (FUNC_1(VAR_4[VAR_5])) {
    VAR_3->num_segments++;
   }
  }
 }

 VAR_3->length = (VAR_0 * VAR_3->num_segments) +
     4 + VAR_3->num_carats;

 VAR_3->next_external_char = VAR_4;
}
