
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int next_lch; int next_linked_ch; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 TYPE_1__* VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static inline void FUNC_5(int VAR_1)
{
 u32 VAR_2;

 VAR_2 = FUNC_3(FUNC_0(VAR_1));

 if (FUNC_1())
  VAR_2 &= ~(1 << 14);


 if (VAR_0[VAR_1].next_lch != -1)
  VAR_2 = VAR_0[VAR_1].next_lch | (1 << 15);


 if (FUNC_2())
  if (VAR_0[VAR_1].next_linked_ch != -1)
   VAR_2 = VAR_0[VAR_1].next_linked_ch | (1 << 15);


 FUNC_4(VAR_2, FUNC_0(VAR_1));
}
