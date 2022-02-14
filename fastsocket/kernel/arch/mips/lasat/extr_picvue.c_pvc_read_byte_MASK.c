
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int data_mask; int data_shift; int e; } ;


 int FUNC_0 (int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;

__attribute__((used)) static u8 FUNC_3(u32 VAR_1)
{
 u8 VAR_2;

 VAR_1 |= VAR_0->e;
 FUNC_2(VAR_1);
 FUNC_0(220);
 VAR_2 = (FUNC_1() & VAR_0->data_mask) >> VAR_0->data_shift;
 VAR_1 &= ~VAR_0->e;
 FUNC_2(VAR_1);
 FUNC_0(220);
 return VAR_2;
}
