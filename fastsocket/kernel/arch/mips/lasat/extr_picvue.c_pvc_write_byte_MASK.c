
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int e; int data_mask; int data_shift; } ;


 int FUNC_0 (int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(u32 VAR_1, u8 VAR_2)
{
 VAR_1 |= VAR_0->e;
 FUNC_1(VAR_1);
 VAR_1 &= ~VAR_0->data_mask;
 VAR_1 |= VAR_2 << VAR_0->data_shift;
 FUNC_1(VAR_1);
 FUNC_0(220);
 FUNC_1(VAR_1 & ~VAR_0->e);
 FUNC_0(220);
}
