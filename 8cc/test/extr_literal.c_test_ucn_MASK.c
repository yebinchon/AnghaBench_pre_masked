
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char,int) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static void FUNC_2() {
    FUNC_0('$', L'\u0024');
    FUNC_0('$', L'\U00000024');
    FUNC_1("$", "\u0024");
    FUNC_1("$", "\U00000024");
    FUNC_0('X', L'X');
    FUNC_0('X', U'X');
    FUNC_0('X', u'X');
}
