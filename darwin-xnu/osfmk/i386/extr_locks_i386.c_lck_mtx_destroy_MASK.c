
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ lck_mtx_tag; int lck_mtx_ptr; } ;
typedef TYPE_1__ lck_mtx_t ;
typedef int lck_mtx_ext_t ;
typedef int lck_grp_t ;
typedef int boolean_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,int) ;

void
FUNC_5(
 lck_mtx_t *VAR_4,
 lck_grp_t *VAR_5)
{
 boolean_t VAR_6;

 if (VAR_4->lck_mtx_tag == VAR_1)
  return;



 VAR_6 = (VAR_4->lck_mtx_tag == VAR_2);

 FUNC_4(VAR_4, VAR_6);

 if (VAR_6)
  FUNC_0(VAR_4->lck_mtx_ptr, sizeof(lck_mtx_ext_t));
 FUNC_2(VAR_5, VAR_3);
 FUNC_1(VAR_5);
 return;
}
