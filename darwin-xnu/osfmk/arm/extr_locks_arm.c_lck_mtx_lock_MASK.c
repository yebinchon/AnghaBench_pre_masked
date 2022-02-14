
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int thread_t ;
struct TYPE_7__ {int lck_mtx_data; } ;
typedef TYPE_1__ lck_mtx_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_1__*,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int *,int ,int ,int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int ,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_2 ;

void
FUNC_7(lck_mtx_t *VAR_3)
{
 thread_t VAR_4;

 FUNC_6(VAR_3);
 FUNC_4(VAR_3);
 VAR_4 = FUNC_3();
 if (FUNC_2(&VAR_3->lck_mtx_data, 0, FUNC_0(VAR_4),
     VAR_2, VAR_0)) {



  return;
 }
 FUNC_5(VAR_3, VAR_4, VAR_0);
}
