
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ lck_rw_type_t ;
struct TYPE_5__ {scalar_t__ lck_rw_owner; scalar_t__ lck_rw_shared_count; int lck_rw_data; } ;
typedef TYPE_1__ lck_rw_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,char*,scalar_t__,...) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*,TYPE_1__*,scalar_t__) ;

void
FUNC_3(
 lck_rw_t *VAR_2)
{
 lck_rw_type_t VAR_3;

 FUNC_0(VAR_2->lck_rw_owner == VAR_1, "state=0x%x, owner=%p", VAR_2->lck_rw_data, VAR_2->lck_rw_owner);
 FUNC_0(VAR_2->lck_rw_shared_count > 0, "shared_count=0x%x", VAR_2->lck_rw_shared_count);
 VAR_3 = FUNC_1(VAR_2);

 if (VAR_3 != VAR_0)
  FUNC_2("lck_rw_unlock_shared(): lock %p held in mode: %d", VAR_2, VAR_3);
}
