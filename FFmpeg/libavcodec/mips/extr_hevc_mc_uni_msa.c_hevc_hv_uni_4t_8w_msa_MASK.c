
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int int8_t ;
typedef int int32_t ;


 int FUNC_0 (int *,int,int *,int,int const*,int const*,int) ;
 int FUNC_1 (int *,int,int *,int,int const*,int const*,int,int) ;
 int FUNC_2 (int *,int,int *,int,int const*,int const*) ;
 int FUNC_3 (int *,int,int *,int,int const*,int const*) ;

__attribute__((used)) static void FUNC_4(uint8_t *VAR_0,
                                  int32_t VAR_1,
                                  uint8_t *VAR_2,
                                  int32_t VAR_3,
                                  const int8_t *VAR_4,
                                  const int8_t *VAR_5,
                                  int32_t VAR_6)
{
    if (2 == VAR_6) {
        FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3,
                               VAR_4, VAR_5);
    } else if (4 == VAR_6) {
        FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3,
                                   VAR_4, VAR_5, 1);
    } else if (6 == VAR_6) {
        FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3,
                               VAR_4, VAR_5);
    } else if (0 == (VAR_6 % 4)) {
        FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3,
                                       VAR_4, VAR_5, VAR_6, 1);
    }
}
