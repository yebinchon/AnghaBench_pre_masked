
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct env {int lock; scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct env *VAR_2, u8 VAR_3, u8 VAR_4)
{
 FUNC_0(&VAR_2->lock);
 FUNC_2(VAR_3, VAR_2->regs + VAR_0);
 FUNC_2(VAR_4, VAR_2->regs + VAR_1);
 FUNC_1(&VAR_2->lock);
}
