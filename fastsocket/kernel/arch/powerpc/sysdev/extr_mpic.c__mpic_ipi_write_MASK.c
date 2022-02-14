
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mpic {int gregs; int reg_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,unsigned int,int ) ;

__attribute__((used)) static inline void FUNC_2(struct mpic *VAR_2, unsigned int VAR_3, u32 VAR_4)
{
 unsigned int VAR_5 = FUNC_0(VAR_1) +
         (VAR_3 * FUNC_0(VAR_0));

 FUNC_1(VAR_2->reg_type, &VAR_2->gregs, VAR_5, VAR_4);
}
