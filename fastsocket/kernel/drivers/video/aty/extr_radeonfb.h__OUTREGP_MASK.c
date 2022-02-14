
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct radeonfb_info {int reg_lock; } ;


 unsigned int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int,unsigned int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static inline void FUNC_4(struct radeonfb_info *VAR_0, u32 VAR_1,
         u32 VAR_2, u32 VAR_3)
{
 unsigned long VAR_4;
 unsigned int VAR_5;

 FUNC_2(&VAR_0->reg_lock, VAR_4);
 VAR_5 = FUNC_0(VAR_1);
 VAR_5 &= (VAR_3);
 VAR_5 |= (VAR_2);
 FUNC_1(VAR_1, VAR_5);
 FUNC_3(&VAR_0->reg_lock, VAR_4);
}
