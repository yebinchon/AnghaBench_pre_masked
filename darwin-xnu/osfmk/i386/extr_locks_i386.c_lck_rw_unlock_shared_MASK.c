
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ lck_rw_type_t ;
struct TYPE_6__ {scalar_t__ lck_rw_shared_count; } ;
typedef TYPE_1__ lck_rw_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*,TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*,TYPE_1__*,scalar_t__) ;

void
FUNC_3(
 lck_rw_t *VAR_1)
{
 lck_rw_type_t VAR_2;

 FUNC_0(VAR_1->lck_rw_shared_count > 0, "lck %p has shared_count=0x%x", VAR_1, VAR_1->lck_rw_shared_count);
 VAR_2 = FUNC_1(VAR_1);

 if (VAR_2 != VAR_0)
  FUNC_2("lck_rw_unlock_shared(): lock %p held in mode: %d\n", VAR_1, VAR_2);
}
