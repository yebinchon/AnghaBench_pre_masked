
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint16_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__*,scalar_t__*,scalar_t__) ;
 int FUNC_1 (scalar_t__*,char const*,scalar_t__) ;
 scalar_t__ FUNC_2 (char const*) ;

__attribute__((used)) static inline uint8_t FUNC_3(uint8_t * VAR_1, uint16_t * VAR_2, const char * VAR_3)
{
    uint8_t VAR_4 = FUNC_2(VAR_3);
    if ((*VAR_2 + VAR_4 + 1) >= VAR_0) {
        return 0;
    }
    FUNC_0(VAR_1, VAR_2, VAR_4);
    FUNC_1(VAR_1 + *VAR_2, VAR_3, VAR_4);
    *VAR_2 += VAR_4;
    return VAR_4 + 1;
}
