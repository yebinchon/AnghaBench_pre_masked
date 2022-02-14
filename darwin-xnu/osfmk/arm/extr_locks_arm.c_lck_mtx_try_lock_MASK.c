
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int thread_t ;
struct TYPE_6__ {int lck_mtx_data; } ;
typedef TYPE_1__ lck_mtx_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_1__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int *,int ,int ,int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_3 ;

boolean_t
FUNC_6(lck_mtx_t *VAR_4)
{
 thread_t VAR_5 = FUNC_3();

 FUNC_5(VAR_4);
 if (FUNC_2(&VAR_4->lck_mtx_data, 0, FUNC_0(VAR_5),
     VAR_3, VAR_0)) {



  return VAR_2;
 }
 return FUNC_4(VAR_4, VAR_5);
}
