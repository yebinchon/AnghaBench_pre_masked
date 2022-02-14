
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint64_t ;
typedef int uint32_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(size_t VAR_0, uint64_t* VAR_1,
                             size_t* VAR_2, uint64_t* VAR_3) {
  size_t VAR_4 = (VAR_0 == 1) ? 1 : FUNC_1((uint32_t)(VAR_0 - 1)) + 1;
  size_t VAR_5 = (VAR_4 < 16 ? 16 : (VAR_4 + 3)) / 4;
  FUNC_0(VAR_0 > 0);
  FUNC_0(VAR_0 <= (1 << 24));
  FUNC_0(VAR_4 <= 24);
  *VAR_3 = VAR_5 - 4;
  *VAR_2 = VAR_5 * 4;
  *VAR_1 = VAR_0 - 1;
}
