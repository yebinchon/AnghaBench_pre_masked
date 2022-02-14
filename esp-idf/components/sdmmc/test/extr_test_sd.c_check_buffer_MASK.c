
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
typedef int uint8_t ;
typedef int uint32_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int const*,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(uint32_t VAR_0, const uint8_t* VAR_1, size_t VAR_2) {
    FUNC_3(VAR_0);
    for (size_t VAR_3 = 0; VAR_3 < VAR_2; ++VAR_3) {
        uint32_t VAR_4;
        FUNC_1(&VAR_4, VAR_1 + VAR_3 * sizeof(uint32_t), sizeof(VAR_4));
        FUNC_0(FUNC_2(), VAR_4);
    }
}
