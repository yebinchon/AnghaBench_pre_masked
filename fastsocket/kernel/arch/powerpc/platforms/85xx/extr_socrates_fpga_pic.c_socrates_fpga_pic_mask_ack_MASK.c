
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int irq_line; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 unsigned int FUNC_1 (unsigned int) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(unsigned int VAR_3)
{
 unsigned long VAR_4;
 unsigned int VAR_5;
 int VAR_6;
 u32 VAR_7;

 VAR_5 = FUNC_1(VAR_3);

 VAR_6 = VAR_1[VAR_5].irq_line;
 FUNC_4(&VAR_2, VAR_4);
 VAR_7 = FUNC_2(FUNC_0(VAR_6))
  & VAR_0;
 VAR_7 &= ~(1 << VAR_5);
 VAR_7 |= (1 << (VAR_5 + 16));
 FUNC_3(FUNC_0(VAR_6), VAR_7);
 FUNC_5(&VAR_2, VAR_4);
}
