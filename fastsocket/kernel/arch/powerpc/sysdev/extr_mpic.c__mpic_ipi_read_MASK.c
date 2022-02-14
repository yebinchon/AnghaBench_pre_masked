
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mpic {int reg_type; int flags; int gregs; } ;
typedef enum mpic_reg_type { ____Placeholder_mpic_reg_type } mpic_reg_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int,int *,unsigned int) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static inline u32 FUNC_2(struct mpic *VAR_5, unsigned int VAR_6)
{
 enum mpic_reg_type VAR_7 = VAR_5->reg_type;
 unsigned int VAR_8 = FUNC_0(VAR_1) +
         (VAR_6 * FUNC_0(VAR_0));

 if ((VAR_5->flags & VAR_2) && VAR_7 == VAR_4)
  VAR_7 = VAR_3;
 return FUNC_1(VAR_7, &VAR_5->gregs, VAR_8);
}
