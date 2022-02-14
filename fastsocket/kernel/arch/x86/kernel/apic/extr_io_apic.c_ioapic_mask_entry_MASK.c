
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mask; } ;
union entry_union {int w2; int w1; TYPE_1__ entry; } ;


 int FUNC_0 (int,int,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(int VAR_1, int VAR_2)
{
 unsigned long VAR_3;
 union entry_union VAR_4 = { .entry.mask = 1 };

 FUNC_1(&VAR_0, VAR_3);
 FUNC_0(VAR_1, 0x10 + 2*VAR_2, VAR_4.w1);
 FUNC_0(VAR_1, 0x11 + 2*VAR_2, VAR_4.w2);
 FUNC_2(&VAR_0, VAR_3);
}
