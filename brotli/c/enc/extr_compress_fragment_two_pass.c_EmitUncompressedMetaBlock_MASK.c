
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 int FUNC_0 (size_t,int,size_t*,scalar_t__*) ;
 int FUNC_1 (scalar_t__*,scalar_t__ const*,size_t) ;

__attribute__((used)) static void FUNC_2(const uint8_t* VAR_0, size_t VAR_1,
                                      size_t* VAR_2, uint8_t* VAR_3) {
  FUNC_0(VAR_1, 1, VAR_2, VAR_3);
  *VAR_2 = (*VAR_2 + 7u) & ~7u;
  FUNC_1(&VAR_3[*VAR_2 >> 3], VAR_0, VAR_1);
  *VAR_2 += VAR_1 << 3;
  VAR_3[*VAR_2 >> 3] = 0;
}
