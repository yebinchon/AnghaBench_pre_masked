
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char) ;

__attribute__((used)) static void FUNC_1(int VAR_0) {
 static char VAR_1[] = "0F234IUPVB";

 if (VAR_0 < 0 || VAR_0 >= (sizeof VAR_1/sizeof VAR_1[0]) - 1)
  FUNC_0("%d", VAR_0);
 else
  FUNC_0("%c", VAR_1[VAR_0]);
}
