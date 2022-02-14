
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct acpi_namestring_info {int num_segments; char* internal_name; char* next_external_char; int num_carats; scalar_t__ fully_qualified; } ;
typedef int acpi_status ;
typedef size_t acpi_size ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 char VAR_4 ;
 char VAR_5 ;
 scalar_t__ FUNC_3 (char const) ;
 int VAR_6 ;
 int FUNC_4 (int ) ;

acpi_status FUNC_5(struct acpi_namestring_info *VAR_7)
{
 u32 VAR_8 = VAR_7->num_segments;
 char *VAR_9 = VAR_7->internal_name;
 const char *VAR_10 = VAR_7->next_external_char;
 char *VAR_11 = ((void*)0);
 u32 VAR_12;

 FUNC_1(VAR_6);



 if (VAR_7->fully_qualified) {
  VAR_9[0] = '\\';

  if (VAR_8 <= 1) {
   VAR_11 = &VAR_9[1];
  } else if (VAR_8 == 2) {
   VAR_9[1] = VAR_4;
   VAR_11 = &VAR_9[2];
  } else {
   VAR_9[1] = VAR_5;
   VAR_9[2] = (char)VAR_8;
   VAR_11 = &VAR_9[3];
  }
 } else {




  VAR_12 = 0;
  if (VAR_7->num_carats) {
   for (VAR_12 = 0; VAR_12 < VAR_7->num_carats; VAR_12++) {
    VAR_9[VAR_12] = '^';
   }
  }

  if (VAR_8 <= 1) {
   VAR_11 = &VAR_9[VAR_12];
  } else if (VAR_8 == 2) {
   VAR_9[VAR_12] = VAR_4;
   VAR_11 = &VAR_9[(acpi_size) VAR_12 + 1];
  } else {
   VAR_9[VAR_12] = VAR_5;
   VAR_9[(acpi_size) VAR_12 + 1] = (char)VAR_8;
   VAR_11 = &VAR_9[(acpi_size) VAR_12 + 2];
  }
 }



 for (; VAR_8; VAR_8--) {
  for (VAR_12 = 0; VAR_12 < VAR_1; VAR_12++) {
   if (FUNC_3(*VAR_10) ||
       (*VAR_10 == 0)) {



    VAR_11[VAR_12] = '_';
   } else {


    VAR_11[VAR_12] =
        (char)FUNC_2((int)*VAR_10);
    VAR_10++;
   }
  }



  if (!FUNC_3(*VAR_10) &&
      (*VAR_10 != 0)) {
   FUNC_4(VAR_2);
  }



  VAR_10++;
  VAR_11 += VAR_1;
 }



 *VAR_11 = 0;

 if (VAR_7->fully_qualified) {
  FUNC_0((VAR_0,
      "Returning [%p] (abs) \"\\%s\"\n",
      VAR_9, VAR_9));
 } else {
  FUNC_0((VAR_0, "Returning [%p] (rel) \"%s\"\n",
      VAR_9, VAR_9));
 }

 FUNC_4(VAR_3);
}
