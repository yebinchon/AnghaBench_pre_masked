
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int) ;

__attribute__((used)) static void FUNC_1() {
    char *VAR_0 = "abcdefg";
    char *VAR_1 = VAR_0 + 5;
    FUNC_0(8, sizeof(VAR_1 - VAR_0));
    FUNC_0(5, VAR_1 - VAR_0);
}
