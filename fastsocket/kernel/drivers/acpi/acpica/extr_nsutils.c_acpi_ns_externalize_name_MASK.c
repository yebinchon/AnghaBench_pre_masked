
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef size_t u32 ;
typedef int acpi_status ;
typedef int acpi_size ;


 char* FUNC_0 (size_t) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;
 int FUNC_3 (int ) ;

acpi_status
FUNC_4(u32 VAR_6,
    const char *VAR_7,
    u32 * VAR_8, char **VAR_9)
{
 u32 VAR_10 = 0;
 u32 VAR_11 = 0;
 u32 VAR_12;
 u32 VAR_13 = 0;
 u32 VAR_14 = 0;
 u32 VAR_15 = 0;

 FUNC_2(VAR_5);

 if (!VAR_6 || !VAR_7 || !VAR_9) {
  FUNC_3(VAR_0);
 }



 switch (VAR_7[0]) {
 case '\\':
  VAR_13 = 1;
  break;

 case '^':
  for (VAR_14 = 0; VAR_14 < VAR_6; VAR_14++) {
   if (VAR_7[VAR_14] == '^') {
    VAR_13 = VAR_14 + 1;
   } else {
    break;
   }
  }

  if (VAR_14 == VAR_6) {
   VAR_13 = VAR_14;
  }

  break;

 default:
  break;
 }





 if (VAR_13 < VAR_6) {
  switch (VAR_7[VAR_13]) {
  case 128:



   VAR_10 = VAR_13 + 2;
   VAR_11 = (u8)
       VAR_7[(acpi_size) VAR_13 + 1];
   break;

  case 129:



   VAR_10 = VAR_13 + 1;
   VAR_11 = 2;
   break;

  case 0:



   VAR_10 = 0;
   VAR_11 = 0;
   break;

  default:



   VAR_10 = VAR_13;
   VAR_11 = 1;
   break;
  }
 }






 VAR_12 = VAR_13 + (4 * VAR_11) +
     ((VAR_11 > 0) ? (VAR_11 - 1) : 0) + 1;





 if (VAR_12 > VAR_6) {
  FUNC_1((VAR_2, "Invalid internal name"));
  FUNC_3(VAR_1);
 }



 *VAR_9 = FUNC_0(VAR_12);
 if (!(*VAR_9)) {
  FUNC_3(VAR_3);
 }

 VAR_15 = 0;

 for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14++) {
  (*VAR_9)[VAR_15++] = VAR_7[VAR_14];
 }

 if (VAR_11 > 0) {
  for (VAR_14 = 0; VAR_14 < VAR_11; VAR_14++) {
   if (VAR_14 > 0) {
    (*VAR_9)[VAR_15++] = '.';
   }

   (*VAR_9)[VAR_15++] = VAR_7[VAR_10++];
   (*VAR_9)[VAR_15++] = VAR_7[VAR_10++];
   (*VAR_9)[VAR_15++] = VAR_7[VAR_10++];
   (*VAR_9)[VAR_15++] = VAR_7[VAR_10++];
  }
 }

 if (VAR_8) {
  *VAR_8 = (u32) VAR_12;
 }

 FUNC_3(VAR_4);
}
