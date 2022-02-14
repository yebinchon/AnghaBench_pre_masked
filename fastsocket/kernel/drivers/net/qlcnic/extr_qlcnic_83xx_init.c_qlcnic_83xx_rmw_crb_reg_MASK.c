
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct qlcnic_adapter {TYPE_2__* ahw; } ;
struct qlc_83xx_rmw {int index_a; int mask; int shl; int shr; int or_value; int xor_value; } ;
struct TYPE_3__ {int* array; } ;
struct TYPE_4__ {TYPE_1__ reset; } ;


 int FUNC_0 (struct qlcnic_adapter*,int ) ;
 int FUNC_1 (struct qlcnic_adapter*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct qlcnic_adapter *VAR_0,
        u32 VAR_1, u32 VAR_2,
        struct qlc_83xx_rmw *VAR_3)
{
 int VAR_4;

 if (VAR_3->index_a)
  VAR_4 = VAR_0->ahw->reset.array[VAR_3->index_a];
 else
  VAR_4 = FUNC_0(VAR_0, VAR_1);

 VAR_4 &= VAR_3->mask;
 VAR_4 <<= VAR_3->shl;
 VAR_4 >>= VAR_3->shr;
 VAR_4 |= VAR_3->or_value;
 VAR_4 ^= VAR_3->xor_value;
 FUNC_1(VAR_0, VAR_2, VAR_4);
}
