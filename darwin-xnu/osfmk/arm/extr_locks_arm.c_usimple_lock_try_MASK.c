
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* usimple_lock_t ;
typedef int simple_lock_t ;
typedef int pc_t ;
struct TYPE_6__ {int lck_spin_data; } ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int *) ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*,int ) ;

unsigned int
FUNC_6(
   usimple_lock_t VAR_0)
{

 pc_t VAR_1;
 unsigned int VAR_2;

 FUNC_0(VAR_1, VAR_0);
 FUNC_1(FUNC_5(VAR_0, VAR_1));
 if ((VAR_2 = FUNC_2(&VAR_0->lck_spin_data))) {
  FUNC_1(FUNC_4(VAR_0, VAR_1));
 }
 return VAR_2;



}
