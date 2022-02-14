
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* VAR_1 ;
 scalar_t__ FUNC_0 (int ,char const**) ;
 int FUNC_1 (char*,size_t,char*,char const*,char const*,...) ;

__attribute__((used)) static void FUNC_2(char *VAR_2, size_t VAR_3,
 const char *VAR_4, const char *VAR_5)
{
 const char *VAR_6 = ((void*)0);

 if (FUNC_0(VAR_0, &VAR_6) && VAR_6) {
  FUNC_1(VAR_2, VAR_3, "%s%c%s%s", VAR_6, VAR_1, VAR_4, VAR_5);
 }
 else {
  FUNC_1(VAR_2, VAR_3, "%s%s", VAR_4, VAR_5);
 }
}
