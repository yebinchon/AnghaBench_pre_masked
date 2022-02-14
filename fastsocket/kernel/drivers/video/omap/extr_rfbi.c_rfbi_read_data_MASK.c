
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {int bits_per_cycle; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (int) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(void *VAR_2, unsigned int VAR_3)
{
 FUNC_1(1);
 if (VAR_1.bits_per_cycle == 16) {
  u16 *VAR_4 = VAR_2;
  FUNC_0(VAR_3 & ~1);
  for (; VAR_3; VAR_3 -= 2) {
   FUNC_3(VAR_0, 0);
   *VAR_4++ = FUNC_2(VAR_0);
  }
 } else {
  u8 *VAR_5 = VAR_2;
  FUNC_0(VAR_1.bits_per_cycle != 8);
  for (; VAR_3; VAR_3--) {
   FUNC_3(VAR_0, 0);
   *VAR_5++ = FUNC_2(VAR_0);
  }
 }
 FUNC_1(0);
}
