
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int data; } ;
typedef TYPE_1__ lck_rw_t ;
typedef int boolean_t ;
struct TYPE_7__ {int rwlock_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,TYPE_1__*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int*,int ) ;
 scalar_t__ FUNC_3 (int *,int,int,int ) ;
 int FUNC_4 () ;
 TYPE_4__* FUNC_5 () ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_8 ;

boolean_t FUNC_7(lck_rw_t *VAR_9)
{
 uint32_t VAR_10, VAR_11;

 for ( ; ; ) {
  VAR_10 = FUNC_2(&VAR_9->data, &VAR_11, VAR_8);
  if (VAR_10 & VAR_2) {
   FUNC_1();
   FUNC_6(VAR_9);
   continue;
  }
  if (VAR_10 & (VAR_3 | VAR_4 | VAR_5)) {
   FUNC_1();
   return VAR_1;
  }
  VAR_10 |= VAR_4;
  if (FUNC_3(&VAR_9->data, VAR_11, VAR_10, VAR_8))
   break;
  FUNC_4();
 }

 FUNC_5()->rwlock_count++;



 return VAR_7;
}
