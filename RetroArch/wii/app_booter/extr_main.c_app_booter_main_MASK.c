
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct __argv {int dummy; } ;
typedef int (* entrypoint ) () ;
struct TYPE_3__ {scalar_t__ argvMagic; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (void*,TYPE_1__*,int) ;
 int FUNC_3 (void*,int) ;
 int FUNC_4 (void*) ;

void FUNC_5(void)
{
 entrypoint VAR_3;
 uint32_t VAR_4 = 0;
 void *VAR_5 = (void*)VAR_1;

 if (FUNC_4(VAR_5) == 1)
  VAR_4 = FUNC_1(VAR_5);
 else
  VAR_4 = FUNC_0(VAR_5);

 VAR_3 = (entrypoint) VAR_4;

 if (!VAR_3)
  return;

 if (VAR_2->argvMagic == VAR_0)
 {
  void *VAR_6 = (void*)(VAR_4 + 8);
  FUNC_2(VAR_6, VAR_2, sizeof(struct __argv));
  FUNC_3(VAR_6, sizeof(struct __argv));
 }

 VAR_3();
}
