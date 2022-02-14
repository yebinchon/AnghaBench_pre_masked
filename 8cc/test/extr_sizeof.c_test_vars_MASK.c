
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int d ;
typedef int c ;
typedef int b ;
typedef int a ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static void FUNC_1() {
    char VAR_0[] = { 1, 2, 3 };
    FUNC_0(3, sizeof(VAR_0));
    char VAR_1[] = "abc";
    FUNC_0(4, sizeof(VAR_1));
    FUNC_0(1, sizeof(VAR_1[0]));
    FUNC_0(1, sizeof((VAR_1[0])));
    FUNC_0(1, sizeof((VAR_1)[0]));
    char *VAR_2[5];
    FUNC_0(40, sizeof(VAR_2));
    char *(*VAR_3)[3];
    FUNC_0(8, sizeof(VAR_3));
    FUNC_0(24, sizeof(*VAR_3));
    FUNC_0(8, sizeof(**VAR_3));
    FUNC_0(1, sizeof(***VAR_3));
    FUNC_0(4, sizeof((int)VAR_0));
}
