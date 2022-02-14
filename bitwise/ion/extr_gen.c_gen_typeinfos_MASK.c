
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Type ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,...) ;
 int * FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int VAR_2 ;

void FUNC_6(void) {
    FUNC_3("#define TYPEID0(index, kind) ((ullong)(index) | ((ullong)(kind) << 24))");
    FUNC_3("#define TYPEID(index, kind, ...) ((ullong)(index) | ((ullong)sizeof(__VA_ARGS__) << 32) | ((ullong)(kind) << 24))");
    FUNC_2();
    if (VAR_0) {
        FUNC_3("int num_typeinfos;");
        FUNC_3("TypeInfo **typeinfos;");
    } else {
        int VAR_3 = VAR_2;
        FUNC_3("TypeInfo *typeinfo_table[%d] = {", VAR_3);
        VAR_1++;
        for (int VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
            FUNC_3("[%d] = ", VAR_4);
            Type *VAR_5 = FUNC_4(VAR_4);
            if (VAR_5 && !FUNC_5(VAR_5)) {
                FUNC_0(VAR_5);
            } else {
                FUNC_1("NULL, // No associated type");
            }
        }
        VAR_1--;
        FUNC_3("};");
        FUNC_2();
        FUNC_3("int num_typeinfos = %d;", VAR_3);
        FUNC_3("TypeInfo **typeinfos = (TypeInfo **)typeinfo_table;");
    }
}
