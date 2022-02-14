
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int data; } ;
typedef TYPE_1__ lck_rw_t ;
struct TYPE_7__ {int rwlock_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,TYPE_1__*,int ) ;
 int VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int*,int ) ;
 scalar_t__ FUNC_3 (int *,int,int,int ) ;
 int FUNC_4 () ;
 TYPE_4__* FUNC_5 () ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_6 ;

void
FUNC_7(lck_rw_t *VAR_7)
{
 uint32_t VAR_8, VAR_9;

 FUNC_5()->rwlock_count++;
 for ( ; ; ) {
  VAR_8 = FUNC_2(&VAR_7->data, &VAR_9, VAR_6);
  if (VAR_8 & (VAR_3 | VAR_4 | VAR_1)) {
   FUNC_1();
   FUNC_6(VAR_7);
   break;
  }
  VAR_8 += VAR_2;
  if (FUNC_3(&VAR_7->data, VAR_9, VAR_8, VAR_6))
   break;
  FUNC_4();
 }



 return;
}
