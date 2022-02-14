
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int data; } ;
typedef TYPE_1__ lck_rw_t ;
struct TYPE_7__ {int rwlock_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,TYPE_1__*,int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int *,int,int,int ,int ) ;
 TYPE_4__* FUNC_2 () ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_7 ;

void
FUNC_4(lck_rw_t *VAR_8)
{
 FUNC_2()->rwlock_count++;
 if (FUNC_1(&VAR_8->data,
  (VAR_3 | VAR_4 | VAR_5 | VAR_2),
  VAR_4, VAR_7, VAR_1)) {



 } else
  FUNC_3(VAR_8);
}
