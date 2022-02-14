
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mpic {int flags; int * cpuregs; int reg_type; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,unsigned int) ;
 unsigned int FUNC_1 () ;

__attribute__((used)) static inline u32 FUNC_2(struct mpic *VAR_1, unsigned int VAR_2)
{
 unsigned int VAR_3 = 0;

 if (VAR_1->flags & VAR_0)
  VAR_3 = FUNC_1();
 return FUNC_0(VAR_1->reg_type, &VAR_1->cpuregs[VAR_3], VAR_2);
}
