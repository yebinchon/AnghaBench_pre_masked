
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hwirq; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(unsigned int VAR_6)
{
 int VAR_7 = VAR_2[VAR_6].hwirq & VAR_1;
 unsigned long VAR_8;

 FUNC_2(&VAR_5, VAR_8);
 VAR_3 &= ~(1 << VAR_7);
 FUNC_1(VAR_4 + VAR_0,
   VAR_3);
 FUNC_3(&VAR_5, VAR_8);
 (void)FUNC_0(VAR_4 + VAR_0);
}
