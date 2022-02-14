
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int user_addr_t ;
typedef int * thread_t ;
struct TYPE_2__ {int * r; int lr; int sp; int pc; } ;
typedef TYPE_1__ savearea_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int * FUNC_1 () ;
 scalar_t__ FUNC_2 (int *,int ,int ,int ) ;
 scalar_t__ FUNC_3 (int *) ;

int
FUNC_4(void)
{
 thread_t VAR_2 = FUNC_1();
 savearea_t *VAR_3;
 user_addr_t VAR_4, VAR_5;
 int VAR_6 = 0;

 if (VAR_2 == ((void*)0))
  return 0;

 if (FUNC_0(VAR_1))
  return (-1);

 VAR_3 = (savearea_t *) FUNC_3(VAR_2);
 if (VAR_3 == ((void*)0))
  return 0;

 VAR_4 = VAR_3->pc;
 VAR_5 = VAR_3->sp;

 if (FUNC_0(VAR_0)) {
  VAR_6++;
  VAR_4 = VAR_3->lr;
 }
 VAR_6 += FUNC_2(((void*)0), 0, VAR_4, VAR_3->r[7]);

 return (VAR_6);
}
