
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* usimple_lock_t ;
typedef int simple_lock_t ;
struct TYPE_4__ {int lck_spin_data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,unsigned short) ;
 int FUNC_3 (TYPE_1__*,unsigned short) ;

void
FUNC_4(
    usimple_lock_t VAR_0,
    unsigned short VAR_1)
{

 FUNC_0(FUNC_3(VAR_0, VAR_1));
 FUNC_1(&VAR_0->lck_spin_data);



}
