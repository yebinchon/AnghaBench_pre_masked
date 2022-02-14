
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(const uint8_t *VAR_2) {
    int VAR_3 = FUNC_0(VAR_2 + 6);
    if (FUNC_0(VAR_2) != VAR_0 || !VAR_2[2] || VAR_2[2] > 2 || VAR_2[4] != 0x55 ||
        (VAR_2[5] & 0xe0) || VAR_3 > VAR_1)
        return -1;
    return VAR_3 + 8;
}
