
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int sec_t ;
typedef int CACHE ;


 int FUNC_0 (int *,int *,int ,unsigned int,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;

bool FUNC_3 (CACHE* VAR_0, uint32_t *VAR_1, sec_t VAR_2, unsigned int VAR_3, int VAR_4) {
  uint8_t VAR_5[4];
  if (!FUNC_0(VAR_0, VAR_5, VAR_2, VAR_3, VAR_4)) return 0;

  switch(VAR_4) {
  case 1: *VAR_1 = VAR_5[0]; break;
  case 2: *VAR_1 = FUNC_1(VAR_5,0); break;
  case 4: *VAR_1 = FUNC_2(VAR_5,0); break;
  default: return 0;
  }
  return 1;
}
