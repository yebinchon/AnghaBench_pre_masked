
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_1 (TYPE_1__*,scalar_t__,int ) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static void FUNC_2(uint32_t VAR_3, uint32_t *VAR_4,
    uint32_t VAR_5)
{
 for (; VAR_5 > 0; VAR_5--) {
  FUNC_0(VAR_2.dev,
   "write param mem - addr = 0x%08X, data = 0x%08X\n",
   VAR_3, *VAR_4);
  FUNC_1(&VAR_2, VAR_3, VAR_0);
  FUNC_1(&VAR_2, *VAR_4++, VAR_1);
  VAR_3++;
  if ((VAR_3 & 0x7) == 5) {
   VAR_3 &= ~0x7;
   VAR_3 += 8;
  }
 }
}
