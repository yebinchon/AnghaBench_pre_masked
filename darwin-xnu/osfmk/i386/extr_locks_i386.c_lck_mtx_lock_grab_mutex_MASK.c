
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef TYPE_1__* thread_t ;
typedef int lck_mtx_t ;
typedef int boolean_t ;
struct TYPE_3__ {int mutex_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,uintptr_t) ;

__attribute__((used)) static inline boolean_t
FUNC_4(
 lck_mtx_t *VAR_3)
{
 uint32_t VAR_4;

 VAR_4 = FUNC_2(VAR_3);

 if (!FUNC_1(VAR_3, VAR_1, &VAR_4)) {
  return VAR_0;
 }



 thread_t VAR_5 = FUNC_0();

 FUNC_3(VAR_3, (uintptr_t)VAR_5);






 return VAR_2;
}
