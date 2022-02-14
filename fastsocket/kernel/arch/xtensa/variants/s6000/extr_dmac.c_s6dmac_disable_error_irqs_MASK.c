
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int spinlock_t ;
struct TYPE_2__ {int lock; } ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(u32 VAR_1, u32 VAR_2)
{
 unsigned long VAR_3;
 spinlock_t *VAR_4 = &VAR_0[FUNC_0(VAR_1)].lock;
 FUNC_2(VAR_4, VAR_3);
 FUNC_1(VAR_1, VAR_2);
 FUNC_3(VAR_4, VAR_3);
}
