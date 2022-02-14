
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int cp0_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static inline int FUNC_1(struct pt_regs *VAR_3)
{
 if (VAR_2)
  return VAR_3->cp0_status & VAR_0;



 return 0;

}
