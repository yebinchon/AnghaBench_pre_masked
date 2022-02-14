
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
struct TYPE_15__ {int lck_rw_data; } ;
typedef TYPE_2__ lck_rw_t ;
struct TYPE_14__ {int rwlock_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,TYPE_2__*,int ) ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 int FUNC_1 (int,char*,int ,TYPE_1__*) ;
 scalar_t__ FUNC_2 (int *,int,int,int ,int ) ;
 TYPE_1__* FUNC_3 () ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_8 ;
 int FUNC_5 (TYPE_2__*) ;
 TYPE_1__* FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,TYPE_1__*) ;

void
FUNC_8(lck_rw_t *VAR_9)
{
 thread_t VAR_10 = FUNC_3();

 VAR_10->rwlock_count++;
 if (FUNC_2(&VAR_9->lck_rw_data,
  (VAR_3 | VAR_4 | VAR_5 | VAR_2),
  VAR_4, VAR_8, VAR_1)) {



 } else
  FUNC_4(VAR_9);




 FUNC_7(VAR_9, VAR_10);
}
