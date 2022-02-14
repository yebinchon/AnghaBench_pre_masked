
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ num; int a; } ;
typedef int THREAD ;
typedef TYPE_1__ CHECK_THREAD_3 ;


 int VAR_0 ;
 int * FUNC_0 (void (*) (int *,void*),TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;

void FUNC_3(THREAD *VAR_1, void *VAR_2)
{
 CHECK_THREAD_3 *VAR_3 = (CHECK_THREAD_3 *)VAR_2;
 THREAD *VAR_4;

 if (VAR_3->num == 0)
 {
  return;
 }
 VAR_3->num--;
 VAR_3->a++;

 VAR_4 = FUNC_0(FUNC_3, VAR_3);
 FUNC_2(VAR_4, VAR_0);
 FUNC_1(VAR_4);
}
