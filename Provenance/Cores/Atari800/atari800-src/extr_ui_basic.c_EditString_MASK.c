
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int,int,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int,char**,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int,int,char,int,int) ;
 int FUNC_4 (int,int,char const*,int,int,int) ;
 int VAR_2 ;
 int FUNC_5 (char*,char*,char*) ;
 int FUNC_6 (char*,char*,char*) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static int FUNC_10(int VAR_3, int VAR_4, const char *VAR_5,
                      char *VAR_6, int VAR_7, int VAR_8, int VAR_9, int VAR_10,
                      char VAR_11[][VAR_1], int VAR_12)
{
 int VAR_13 = FUNC_9(VAR_6);
 int VAR_14 = 0;
 for (;;) {
  int VAR_15;
  char *VAR_16;
  int VAR_17;
  FUNC_0(VAR_3, VAR_4, VAR_8, VAR_9, VAR_8 + 1 + VAR_10, VAR_9 + 2);
  FUNC_4(VAR_4, VAR_3, VAR_5, VAR_8 + 1, VAR_9, VAR_10);
  if (VAR_13 - VAR_14 >= VAR_10)
   VAR_14 = VAR_13 - VAR_10 + 1;
  else if (VAR_13 < VAR_14)
   VAR_14 = VAR_13;
  VAR_16 = VAR_6 + VAR_14;
  for (VAR_15 = 0; VAR_15 < VAR_10; VAR_15++)
   if (VAR_14 + VAR_15 == VAR_13)
    FUNC_3(VAR_4, VAR_3, *VAR_16 != '\0' ? *VAR_16++ : ' ', VAR_8 + 1 + VAR_15, VAR_9 + 1);
   else
    FUNC_3(VAR_3, VAR_4, *VAR_16 != '\0' ? *VAR_16++ : ' ', VAR_8 + 1 + VAR_15, VAR_9 + 1);
  VAR_17 = FUNC_2();
  switch (VAR_17) {
  case 0x1e:
   if (VAR_13 > 0)
    VAR_13--;
   break;
  case 0x1f:
   if (VAR_6[VAR_13] != '\0')
    VAR_13++;
   break;
  case 0x7e:
   if (VAR_13 > 0) {
    VAR_13--;
    VAR_16 = VAR_6 + VAR_13;
    do
     VAR_16[0] = VAR_16[1];
    while (*VAR_16++ != '\0');
   }
   break;
  case 0xfe:
   if (VAR_6[VAR_13] != '\0') {
    VAR_16 = VAR_6 + VAR_13;
    do
     VAR_16[0] = VAR_16[1];
    while (*VAR_16++ != '\0');
   }
   break;
  case 0x7d:
  case 0x9c:
   VAR_13 = 0;
   VAR_6[0] = '\0';
   break;
  case 0x9b:
   if (VAR_12 >= 0) {

    char VAR_18;
    if (VAR_6[0] == '\0')
     return VAR_0;
    VAR_18 = VAR_6[FUNC_9(VAR_6) - 1];
    return VAR_18 != '/' && VAR_18 != '\\';
   }
   return VAR_2;
  case 0x1b:
   return VAR_0;
  default:

   VAR_15 = FUNC_9(VAR_6);
   if (VAR_15 + 1 < VAR_7 && VAR_17 >= ' ' && VAR_17 < 0x7f) {
    do
     VAR_6[VAR_15 + 1] = VAR_6[VAR_15];
    while (--VAR_15 >= VAR_13);
    VAR_6[VAR_13++] = (char) VAR_17;
   }
   break;
  }
 }
}
