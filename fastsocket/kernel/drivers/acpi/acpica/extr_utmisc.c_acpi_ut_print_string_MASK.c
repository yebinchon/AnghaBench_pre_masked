
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef size_t u32 ;
typedef int s32 ;


 int FUNC_0 (char) ;
 int FUNC_1 (char*,...) ;

void FUNC_2(char *VAR_0, u8 VAR_1)
{
 u32 VAR_2;

 if (!VAR_0) {
  FUNC_1("<\"NULL STRING PTR\">");
  return;
 }

 FUNC_1("\"");
 for (VAR_2 = 0; VAR_0[VAR_2] && (VAR_2 < VAR_1); VAR_2++) {



  switch (VAR_0[VAR_2]) {
  case 0x07:
   FUNC_1("\\a");
   break;

  case 0x08:
   FUNC_1("\\b");
   break;

  case 0x0C:
   FUNC_1("\\f");
   break;

  case 0x0A:
   FUNC_1("\\n");
   break;

  case 0x0D:
   FUNC_1("\\r");
   break;

  case 0x09:
   FUNC_1("\\t");
   break;

  case 0x0B:
   FUNC_1("\\v");
   break;

  case '\'':
  case '\"':
  case '\\':
   FUNC_1("\\%c", (int)VAR_0[VAR_2]);
   break;

  default:



   if (FUNC_0(VAR_0[VAR_2])) {


    FUNC_1("%c", (int)VAR_0[VAR_2]);
   } else {


    FUNC_1("\\x%2.2X", (s32) VAR_0[VAR_2]);
   }
   break;
  }
 }
 FUNC_1("\"");

 if (VAR_2 == VAR_1 && VAR_0[VAR_2]) {
  FUNC_1("...");
 }
}
