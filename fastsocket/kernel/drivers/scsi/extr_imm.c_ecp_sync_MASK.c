
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int base_hi; } ;
typedef TYPE_1__ imm_struct ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static inline void FUNC_3(imm_struct *VAR_0)
{
 int VAR_1, VAR_2 = VAR_0->base_hi;

 if (VAR_2 == 0)
  return;

 if ((FUNC_1(VAR_2) & 0xe0) == 0x60) {
  for (VAR_1 = 0; VAR_1 < 100; VAR_1++) {
   if (FUNC_1(VAR_2) & 0x01)
    return;
   FUNC_2(5);
  }
  FUNC_0("imm: ECP sync failed as data still present in FIFO.\n");
 }
}
