
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*,char*) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 char** VAR_1 ;
 char* FUNC_3 (char*) ;

int
FUNC_4(void)
{
 int VAR_2, VAR_3;
 char *VAR_4;

 VAR_2 = 0;
 for (VAR_3 = 0; VAR_3 < 256; VAR_3++) {
  if (VAR_1[VAR_3] == ((void*)0))
   break;
  VAR_4 = VAR_1[VAR_3];

  while (*VAR_4) {
   VAR_4 = FUNC_3(VAR_4);
   if(FUNC_1(VAR_4)) {
    VAR_2 = FUNC_2(VAR_4);
    break;
   }
  }
  if (VAR_2) {
   FUNC_0(VAR_0, "%s", "invalid range found");
   break;
  }
 }
 return VAR_2;
}
