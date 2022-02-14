
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char const* VAR_3 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (int) ;
 int* VAR_4 ;
 char* FUNC_2 (char const*,char const) ;

__attribute__((used)) static int FUNC_3(int VAR_5, int VAR_6, const char *VAR_7, const char *VAR_8) {
 int VAR_9 = 0;
 static int VAR_10;

 if (VAR_5 == VAR_1)
  return 0;
 if (VAR_10 != 0 && VAR_10 != VAR_5)
  FUNC_0("\n");
 VAR_10 = VAR_5;
 if (VAR_6 == VAR_0 || VAR_6 == VAR_2) {
  FUNC_0(" %s=%d", VAR_8, VAR_5 + VAR_6);
  VAR_9++;
 } else {
  int VAR_11, VAR_12 = 0;
  const char *VAR_13;
  for (VAR_11 = 0; VAR_7[VAR_11] != '\0' && (VAR_13 = FUNC_2(VAR_3, VAR_7[VAR_11])) != ((void*)0); VAR_11++) {
   int VAR_14 = VAR_4[VAR_13-VAR_3];
   if ((VAR_12&(1<<VAR_14)) == 0) {
    FUNC_0(" %s%d=%d", VAR_8, VAR_14, VAR_5 + VAR_6 + FUNC_1(VAR_14));
    VAR_9++;
   }
   VAR_12 |= 1<<VAR_14;
  }
 }
 FUNC_0("\n");
 return VAR_9;
}
