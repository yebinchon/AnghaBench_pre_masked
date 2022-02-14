
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct op_counter_config {scalar_t__ enabled; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned long,int,unsigned long) ;

__attribute__((used)) static inline void
FUNC_1(unsigned long VAR_1, int VAR_2, unsigned long VAR_3,
   struct op_counter_config *VAR_4, unsigned long VAR_5)
{
 unsigned long VAR_6 = 2 + VAR_5;
 if (VAR_3 == 1)
  VAR_6 += VAR_0;
 if (VAR_4[VAR_6].enabled)
  FUNC_0(VAR_1, VAR_2, VAR_6);
}
