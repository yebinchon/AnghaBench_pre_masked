
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mpic {int flags; int * cpuregs; int reg_type; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,unsigned int,int ) ;
 unsigned int FUNC_1 () ;

__attribute__((used)) static inline void FUNC_2(struct mpic *VAR_1, unsigned int VAR_2, u32 VAR_3)
{
 unsigned int VAR_4 = 0;

 if (VAR_1->flags & VAR_0)
  VAR_4 = FUNC_1();

 FUNC_0(VAR_1->reg_type, &VAR_1->cpuregs[VAR_4], VAR_2, VAR_3);
}
