
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Buffer ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,char*) ;
 int FUNC_3 (int *,char) ;
 int * FUNC_4 () ;

__attribute__((used)) static void FUNC_5() {
    Buffer *VAR_0 = FUNC_4();
    FUNC_3(VAR_0, 'a');
    FUNC_3(VAR_0, 'b');
    FUNC_3(VAR_0, '\0');
    FUNC_0("ab", FUNC_1(VAR_0));

    Buffer *VAR_1 = FUNC_4();
    FUNC_3(VAR_1, '.');
    FUNC_2(VAR_1, "%s", "0123456789");
    FUNC_0(".0123456789", FUNC_1(VAR_1));
}
