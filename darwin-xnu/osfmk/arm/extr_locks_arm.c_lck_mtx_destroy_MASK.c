
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ lck_mtx_type; scalar_t__ lck_mtx_tag; } ;
typedef TYPE_1__ lck_mtx_t ;
typedef int lck_grp_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (char*,TYPE_1__*) ;

void
FUNC_4(
  lck_mtx_t * VAR_4,
  lck_grp_t * VAR_5)
{
 if (VAR_4->lck_mtx_type != VAR_2)
  FUNC_3("Destroying invalid mutex %p", VAR_4);
 if (VAR_4->lck_mtx_tag == VAR_1)
  FUNC_3("Destroying previously destroyed lock %p", VAR_4);
 FUNC_2(VAR_4, VAR_0);
 VAR_4->lck_mtx_tag = VAR_1;
 FUNC_1(VAR_5, VAR_3);
 FUNC_0(VAR_5);
 return;
}
