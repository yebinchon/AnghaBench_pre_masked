
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 int FUNC_0 (size_t const,int,size_t*,scalar_t__*) ;
 int FUNC_1 (size_t const,size_t*,scalar_t__*) ;
 int FUNC_2 (scalar_t__*,scalar_t__ const*,size_t const) ;

__attribute__((used)) static void FUNC_3(const uint8_t* VAR_0, const uint8_t* VAR_1,
                                      const size_t VAR_2,
                                      size_t* VAR_3, uint8_t* VAR_4) {
  const size_t VAR_5 = (size_t)(VAR_1 - VAR_0);
  FUNC_1(VAR_2, VAR_3, VAR_4);
  FUNC_0(VAR_5, 1, VAR_3, VAR_4);
  *VAR_3 = (*VAR_3 + 7u) & ~7u;
  FUNC_2(&VAR_4[*VAR_3 >> 3], VAR_0, VAR_5);
  *VAR_3 += VAR_5 << 3;
  VAR_4[*VAR_3 >> 3] = 0;
}
