
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ lck_rw_type_t ;
struct TYPE_5__ {scalar_t__ lck_rw_owner; int lck_rw_data; } ;
typedef TYPE_1__ lck_rw_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*,int ,scalar_t__) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*,TYPE_1__*,scalar_t__) ;

void
FUNC_4(
 lck_rw_t *VAR_1)
{
 lck_rw_type_t VAR_2;

 FUNC_0(VAR_1->lck_rw_owner == FUNC_1(), "state=0x%x, owner=%p", VAR_1->lck_rw_data, VAR_1->lck_rw_owner);
 VAR_2 = FUNC_2(VAR_1);

 if (VAR_2 != VAR_0)
  FUNC_3("lck_rw_unlock_exclusive(): lock %p held in mode: %d", VAR_1, VAR_2);
}
