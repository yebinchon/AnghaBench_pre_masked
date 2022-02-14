
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UBYTE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (size_t,char*) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int * VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (char const) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,int ,int ) ;
 char* VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int ,char*) ;
 int FUNC_8 (int*,int,int,int *) ;
 size_t VAR_9 ;
 int VAR_10 ;
 int FUNC_9 (char*,char const*,int) ;

__attribute__((used)) static void FUNC_10(int VAR_11)
{
 const char *VAR_12;
 UBYTE VAR_13[2];
 if (VAR_8)
  FUNC_4("LOAD Command");
 VAR_9 = FUNC_1(VAR_4);
 if (VAR_9 < 0)
  return;


 for (VAR_12 = VAR_3; *VAR_12 != '\0'; ) {
  int VAR_14;
  const char *VAR_15;
  char *VAR_16;
  if (VAR_12[0] == 'H' && VAR_12[1] >= '1' && VAR_12[1] <= '4' && VAR_12[2] == ':') {
   VAR_14 = VAR_12[1] - '1';
   VAR_12 += 3;
  }
  else
   VAR_14 = VAR_9;
  for (VAR_15 = VAR_12; *VAR_15 != '\0' && *VAR_15 != ';'; VAR_15++);
  VAR_16 = VAR_5 + (VAR_15 - VAR_12);
  if (VAR_15 != VAR_12) {
   FUNC_9(VAR_5, VAR_12, VAR_15 - VAR_12);
   if (!FUNC_3(VAR_15[-1]))
    *VAR_16++ = '>';
  }
  if (FUNC_0(VAR_14, VAR_16) == 0)
   return;
  FUNC_5(VAR_10, VAR_2[VAR_14], VAR_6);
  VAR_7 = FUNC_7(VAR_10, "rb");
  if (VAR_7 != ((void*)0) || *VAR_15 == '\0')
   break;
  VAR_12 = VAR_15 + 1;
 }

 if (VAR_7 == ((void*)0)) {

  if (FUNC_0(VAR_9, VAR_5) == 0)
   return;
  FUNC_5(VAR_10, VAR_2[VAR_9], VAR_6);
  VAR_7 = FUNC_7(VAR_10, "rb");
  if (VAR_7 == ((void*)0)) {
   VAR_1 = 170;
   VAR_0;
   return;
  }
 }


 if (FUNC_8(VAR_13, 1, 2, VAR_7) != 2 || VAR_13[0] != 0xff || VAR_13[1] != 0xff) {
  FUNC_6(VAR_7);
  VAR_7 = ((void*)0);
  FUNC_4("H: load: not valid BIN file");
  VAR_1 = 180;
  VAR_0;
  return;
 }

 FUNC_2(VAR_11);
}
