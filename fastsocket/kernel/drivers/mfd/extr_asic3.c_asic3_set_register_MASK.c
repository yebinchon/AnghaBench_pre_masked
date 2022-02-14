
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct asic3 {int lock; } ;


 int FUNC_0 (struct asic3*,int ) ;
 int FUNC_1 (struct asic3*,int ,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(struct asic3 *VAR_0, u32 VAR_1, u32 VAR_2, bool VAR_3)
{
 unsigned long VAR_4;
 u32 VAR_5;

 FUNC_2(&VAR_0->lock, VAR_4);
 VAR_5 = FUNC_0(VAR_0, VAR_1);
 if (VAR_3)
  VAR_5 |= VAR_2;
 else
  VAR_5 &= ~VAR_2;
 FUNC_1(VAR_0, VAR_1, VAR_5);
 FUNC_3(&VAR_0->lock, VAR_4);
}
