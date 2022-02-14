
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,char) ;

__attribute__((used)) static void FUNC_4(int VAR_1, unsigned char *VAR_2)
{
 int VAR_3;
 char VAR_4[5], VAR_5[VAR_0], *VAR_6;

 VAR_6 = ((void*)0);
 FUNC_3(VAR_4, "mac%c", 'a' + VAR_1);
 VAR_6 = FUNC_1(VAR_4);
 if (!VAR_6) {
  FUNC_3(VAR_4, "mac%c", 'a');
  VAR_6 = FUNC_1(VAR_4);
 }
 if (!VAR_6) {
  FUNC_2(VAR_5);
  VAR_6 = VAR_5;
 }
 for (VAR_3 = 0; VAR_3 < 6; VAR_3++)
  VAR_2[VAR_3] = (FUNC_0(VAR_6[VAR_3 * 3]) << 4) +
   FUNC_0(VAR_6[VAR_3 * 3 + 1]);
}
