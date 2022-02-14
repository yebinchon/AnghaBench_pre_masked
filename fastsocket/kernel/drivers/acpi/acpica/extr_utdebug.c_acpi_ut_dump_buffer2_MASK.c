
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef size_t acpi_size ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int*,int *) ;
 int FUNC_2 (int*,int *) ;




 int FUNC_3 (char*,...) ;

void FUNC_4(u8 * VAR_0, u32 VAR_1, u32 VAR_2)
{
 u32 VAR_3 = 0;
 u32 VAR_4;
 u32 VAR_5;
 u8 VAR_6;

 if (!VAR_0) {
  FUNC_3("Null Buffer Pointer in DumpBuffer!\n");
  return;
 }

 if ((VAR_1 < 4) || (VAR_1 & 0x01)) {
  VAR_2 = 131;
 }



 while (VAR_3 < VAR_1) {



  FUNC_3("%6.4X: ", VAR_3);



  for (VAR_4 = 0; VAR_4 < 16;) {
   if (VAR_3 + VAR_4 >= VAR_1) {



    FUNC_3("%*s", ((VAR_2 * 2) + 1), " ");
    VAR_4 += VAR_2;
    continue;
   }

   switch (VAR_2) {
   case 131:
   default:

    FUNC_3("%02X ",
            VAR_0[(acpi_size) VAR_3 + VAR_4]);
    break;

   case 128:

    FUNC_1(&VAR_5,
         &VAR_0[(acpi_size) VAR_3 + VAR_4]);
    FUNC_3("%04X ", VAR_5);
    break;

   case 130:

    FUNC_2(&VAR_5,
         &VAR_0[(acpi_size) VAR_3 + VAR_4]);
    FUNC_3("%08X ", VAR_5);
    break;

   case 129:

    FUNC_2(&VAR_5,
         &VAR_0[(acpi_size) VAR_3 + VAR_4]);
    FUNC_3("%08X", VAR_5);

    FUNC_2(&VAR_5,
         &VAR_0[(acpi_size) VAR_3 + VAR_4 +
          4]);
    FUNC_3("%08X ", VAR_5);
    break;
   }

   VAR_4 += VAR_2;
  }





  FUNC_3(" ");
  for (VAR_4 = 0; VAR_4 < 16; VAR_4++) {
   if (VAR_3 + VAR_4 >= VAR_1) {
    FUNC_3("\n");
    return;
   }

   VAR_6 = VAR_0[(acpi_size) VAR_3 + VAR_4];
   if (FUNC_0(VAR_6)) {
    FUNC_3("%c", VAR_6);
   } else {
    FUNC_3(".");
   }
  }



  FUNC_3("\n");
  VAR_3 += 16;
 }

 return;
}
