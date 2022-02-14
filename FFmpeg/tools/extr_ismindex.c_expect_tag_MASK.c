
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int32_t ;


 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (int ,char*,char*,char*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(int32_t VAR_1, int32_t VAR_2) {
    if (VAR_1 != VAR_2) {
        char VAR_3[4], VAR_4[4];
        FUNC_0(VAR_3, VAR_1);
        FUNC_0(VAR_4, VAR_2);
        FUNC_1(VAR_0, "wanted tag %.4s, got %.4s\n", VAR_4,
                VAR_3);
        return -1;
    }
    return 0;
}
