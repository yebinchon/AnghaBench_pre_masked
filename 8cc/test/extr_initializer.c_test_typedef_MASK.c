
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int b ;
typedef int a ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static void FUNC_1() {
    typedef int A[];
    A VAR_0 = { 1, 2 };
    A VAR_1 = { 3, 4, 5 };
    FUNC_0(2, sizeof(VAR_0) / sizeof(*VAR_0));
    FUNC_0(3, sizeof(VAR_1) / sizeof(*VAR_1));
}
