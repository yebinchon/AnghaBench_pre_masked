
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ lck_rw_want_upgrade; scalar_t__ lck_rw_want_write; } ;
typedef TYPE_1__ lck_rw_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int) ;

boolean_t
FUNC_4(lck_rw_t *VAR_3, boolean_t VAR_4)
{
 FUNC_0(VAR_3, VAR_1);

 if (VAR_3->lck_rw_want_write || VAR_3->lck_rw_want_upgrade || VAR_4) {
  FUNC_2(VAR_3);
  FUNC_3(2);
  FUNC_1(VAR_3);
  return VAR_2;
 }

 return VAR_0;
}
