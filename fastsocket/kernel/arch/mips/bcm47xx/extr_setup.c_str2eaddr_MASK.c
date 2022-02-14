
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int ,int) ;
 scalar_t__ FUNC_1 (char*,int *,int) ;

__attribute__((used)) static void FUNC_2(char *VAR_0, char *VAR_1)
{
 int VAR_2 = 0;

 if (VAR_0 == ((void*)0)) {
  FUNC_0(VAR_1, 0, 6);
  return;
 }

 for (;;) {
  VAR_1[VAR_2++] = (char) FUNC_1(VAR_0, ((void*)0), 16);
  VAR_0 += 2;
  if (!*VAR_0++ || VAR_2 == 6)
   break;
 }
}
