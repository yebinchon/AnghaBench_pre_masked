
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(const uint32_t* VAR_0, size_t VAR_1) {
    for (size_t VAR_2 = 0; VAR_2 < VAR_1; ++VAR_2) {
        FUNC_0("%08x ", *VAR_0);
        ++VAR_0;
        if ((VAR_2 + 1) % 4 == 0) {
            FUNC_0("\n");
        }
    }
}
