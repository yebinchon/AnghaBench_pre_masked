
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint32_t ;
typedef TYPE_1__* thread_t ;
struct TYPE_14__ {int lck_mtx_owner; } ;
typedef TYPE_2__ lck_mtx_t ;
typedef int boolean_t ;
struct TYPE_13__ {int mutex_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int) ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (TYPE_2__**,int*) ;
 int FUNC_3 (TYPE_2__*,int,int*) ;
 void FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 void FUNC_6 (TYPE_2__*,int,int ) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,int ) ;
 int FUNC_9 (TYPE_2__*,int) ;

__attribute__((noinline))
void
FUNC_10(
 lck_mtx_t *VAR_8)
{
 thread_t VAR_9;
 uint32_t VAR_10, VAR_11;
 boolean_t VAR_12 = VAR_0;

 VAR_10 = FUNC_7(VAR_8);


 if (FUNC_0(VAR_10 == VAR_5)) {
  VAR_12 = FUNC_2(&VAR_8, &VAR_10);
 }

 VAR_9 = FUNC_1();
 if (FUNC_0((VAR_10 & VAR_2) == 0))
  goto unlock;

 FUNC_3(VAR_8, VAR_2, &VAR_10);

unlock:



 FUNC_8(VAR_8, 0);

 VAR_11 = VAR_10;

 VAR_10 &= (~(VAR_1 | VAR_4 | VAR_3));
 if ((VAR_10 & VAR_7))
  VAR_10 -= VAR_6;
 FUNC_9(VAR_8, VAR_10);
 if ((VAR_11 & (VAR_3 | VAR_7)))
  return FUNC_6(VAR_8, VAR_11, VAR_12);


 FUNC_5(VAR_8, VAR_0);

 return;
}
