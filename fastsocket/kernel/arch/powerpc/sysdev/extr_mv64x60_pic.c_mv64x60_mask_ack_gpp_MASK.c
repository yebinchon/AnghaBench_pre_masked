
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hwirq; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(unsigned int VAR_7)
{
 int VAR_8 = VAR_3[VAR_7].hwirq & VAR_2;
 unsigned long VAR_9;

 FUNC_2(&VAR_6, VAR_9);
 VAR_4 &= ~(1 << VAR_8);
 FUNC_1(VAR_5 + VAR_1,
   VAR_4);
 FUNC_1(VAR_5 + VAR_0,
   ~(1 << VAR_8));
 FUNC_3(&VAR_6, VAR_9);
 (void)FUNC_0(VAR_5 + VAR_0);
}
