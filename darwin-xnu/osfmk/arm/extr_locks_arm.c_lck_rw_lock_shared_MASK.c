
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ thread_t ;
struct TYPE_8__ {int lck_rw_data; } ;
typedef TYPE_1__ lck_rw_t ;
struct TYPE_9__ {int rwlock_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,TYPE_1__*,int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int,char*,int ,scalar_t__) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int*,int ) ;
 scalar_t__ FUNC_4 (int *,int,int,int ) ;
 int FUNC_5 () ;
 TYPE_6__* FUNC_6 () ;
 int FUNC_7 (TYPE_1__*) ;
 int VAR_7 ;
 int FUNC_8 (TYPE_1__*) ;
 scalar_t__ FUNC_9 (TYPE_1__*) ;

void
FUNC_10(lck_rw_t *VAR_8)
{
 uint32_t VAR_9, VAR_10;

 FUNC_6()->rwlock_count++;
 for ( ; ; ) {
  VAR_9 = FUNC_3(&VAR_8->lck_rw_data, &VAR_10, VAR_7);
  if (VAR_9 & (VAR_3 | VAR_4 | VAR_1)) {
   FUNC_2();
   FUNC_7(VAR_8);
   break;
  }
  VAR_9 += VAR_2;
  if (FUNC_4(&VAR_8->lck_rw_data, VAR_10, VAR_9, VAR_7))
   break;
  FUNC_5();
 }







 return;
}
