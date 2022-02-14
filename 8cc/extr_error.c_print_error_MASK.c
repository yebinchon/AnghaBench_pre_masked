
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_4(char *VAR_1, char *VAR_2, char *VAR_3, char *VAR_4, va_list VAR_5) {
    FUNC_1(VAR_0, FUNC_2(FUNC_0(VAR_0)) ? "\e[1;31m[%s]\e[0m " : "[%s] ", VAR_3);
    FUNC_1(VAR_0, "%s: %s: ", VAR_1, VAR_2);
    FUNC_3(VAR_0, VAR_4, VAR_5);
    FUNC_1(VAR_0, "\n");
}
