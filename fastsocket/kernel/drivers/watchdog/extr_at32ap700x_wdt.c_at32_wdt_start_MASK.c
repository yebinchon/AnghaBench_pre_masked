
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int timeout; int io_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_1__* VAR_4 ;
 int FUNC_4 (TYPE_1__*,int ,int) ;

__attribute__((used)) static inline void FUNC_5(void)
{

 unsigned long VAR_5 = (VAR_4->timeout > 1) ? 0xf : 0xe;

 FUNC_2(&VAR_4->io_lock);
 FUNC_4(VAR_4, VAR_0, FUNC_1(VAR_1)
   | FUNC_0(VAR_3, VAR_5)
   | FUNC_0(VAR_2, 0x55));
 FUNC_4(VAR_4, VAR_0, FUNC_1(VAR_1)
   | FUNC_0(VAR_3, VAR_5)
   | FUNC_0(VAR_2, 0xaa));
 FUNC_3(&VAR_4->io_lock);
}
