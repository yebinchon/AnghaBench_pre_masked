
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* usimple_lock_t ;
typedef int simple_lock_t ;
typedef int pc_t ;
struct TYPE_7__ {int lck_spin_data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (char*,TYPE_1__**,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_1__*,int ) ;

void
FUNC_8(
      usimple_lock_t VAR_1)
{

 pc_t VAR_2;

 FUNC_0(VAR_2, VAR_1);
 FUNC_1(FUNC_7(VAR_1, VAR_2));

 if (!FUNC_3(&VAR_1->lck_spin_data, VAR_0))

  FUNC_4("simple lock deadlock detection - l=%p, cpu=%d, ret=%p", &VAR_1, FUNC_2(), VAR_2);

 FUNC_1(FUNC_6(VAR_1, VAR_2));



}
