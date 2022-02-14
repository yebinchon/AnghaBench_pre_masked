
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (char*,char*,scalar_t__) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*,char) ;

__attribute__((used)) static void FUNC_4(char *VAR_2)
{
 FUNC_0(VAR_2, VAR_0, 512-6);
 if (VAR_1 != 0)
 {
  char *VAR_3 = FUNC_3(VAR_2, '.');
  if (VAR_3 == ((void*)0))
   VAR_3 = VAR_2 + FUNC_2(VAR_2);
  FUNC_1(VAR_3, ".%i.cfg", VAR_1);
 }
 VAR_2[511] = 0;
}
