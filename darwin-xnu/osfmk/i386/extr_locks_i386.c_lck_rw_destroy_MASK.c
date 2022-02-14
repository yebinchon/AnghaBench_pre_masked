
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ lck_rw_tag; } ;
typedef TYPE_1__ lck_rw_t ;
typedef int lck_grp_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;

void
FUNC_3(
 lck_rw_t *VAR_3,
 lck_grp_t *VAR_4)
{
 if (VAR_3->lck_rw_tag == VAR_1)
  return;



 VAR_3->lck_rw_tag = VAR_1;
 FUNC_1(VAR_4, VAR_2);
 FUNC_0(VAR_4);
 return;
}
