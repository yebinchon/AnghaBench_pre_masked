
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int io_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 (int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_1__* VAR_3 ;
 unsigned long FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,int ,unsigned long) ;

__attribute__((used)) static inline void FUNC_5(void)
{
 unsigned long VAR_4;

 FUNC_1(&VAR_3->io_lock);
 VAR_4 = FUNC_3(VAR_3, VAR_0) & FUNC_0(VAR_2, 0x0f);
 FUNC_4(VAR_3, VAR_0, VAR_4 | FUNC_0(VAR_1, 0x55));
 FUNC_4(VAR_3, VAR_0, VAR_4 | FUNC_0(VAR_1, 0xaa));
 FUNC_2(&VAR_3->io_lock);
}
