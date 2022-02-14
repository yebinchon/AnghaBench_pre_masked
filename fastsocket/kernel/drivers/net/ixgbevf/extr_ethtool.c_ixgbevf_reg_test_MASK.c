
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct ixgbevf_reg_test {scalar_t__ reg; scalar_t__ array_len; int test_type; int write; int mask; } ;
struct TYPE_2__ {scalar_t__ hw_addr; } ;
struct ixgbevf_adapter {TYPE_1__ hw; } ;



 int FUNC_0 (scalar_t__,int ,int ) ;
 int FUNC_1 (scalar_t__,int ,int ) ;





 struct ixgbevf_reg_test* VAR_0 ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct ixgbevf_adapter *VAR_1, u64 *VAR_2)
{
 const struct ixgbevf_reg_test *VAR_3;
 u32 VAR_4;

 VAR_3 = VAR_0;





 while (VAR_3->reg) {
  for (VAR_4 = 0; VAR_4 < VAR_3->array_len; VAR_4++) {
   switch (VAR_3->test_type) {
   case 133:
    FUNC_0(VAR_3->reg + (VAR_4 * 0x40),
      VAR_3->mask,
      VAR_3->write);
    break;
   case 132:
    FUNC_1(VAR_3->reg + (VAR_4 * 0x40),
      VAR_3->mask,
      VAR_3->write);
    break;
   case 128:
    FUNC_2(VAR_3->write,
           (VAR_1->hw.hw_addr + VAR_3->reg)
           + (VAR_4 * 0x40));
    break;
   case 131:
    FUNC_0(VAR_3->reg + (VAR_4 * 4),
      VAR_3->mask,
      VAR_3->write);
    break;
   case 129:
    FUNC_0(VAR_3->reg + (VAR_4 * 8),
      VAR_3->mask,
      VAR_3->write);
    break;
   case 130:
    FUNC_0((VAR_3->reg + 4) + (VAR_4 * 8),
      VAR_3->mask,
      VAR_3->write);
    break;
   }
  }
  VAR_3++;
 }

 *VAR_2 = 0;
 return *VAR_2;
}
