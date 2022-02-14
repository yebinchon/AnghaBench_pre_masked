
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int dtrace_probedesc_t ;
struct TYPE_3__ {void* stsy_return; void* stsy_entry; int * stsy_underlying; } ;


 void* VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 int FUNC_2 (int ,int *,int ,char*,int ,void*) ;
 scalar_t__ FUNC_3 (int ,int *,int ,char*) ;
 int * VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ,TYPE_1__**) ;
 TYPE_1__* VAR_6 ;

__attribute__((used)) static void
FUNC_5(void *VAR_7, const dtrace_probedesc_t *VAR_8)
{
#pragma unused(arg)
 unsigned int VAR_9;

 if (VAR_8 != ((void*)0))
  return;

 FUNC_4(VAR_4, &VAR_6);

 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
  if (VAR_6[VAR_9].stsy_underlying == ((void*)0))
   continue;

  if (FUNC_3(VAR_5, ((void*)0),
      VAR_3[VAR_9], "entry") != 0)
   continue;

  (void) FUNC_2(VAR_5, ((void*)0), VAR_3[VAR_9],
      "entry", VAR_2,
      (void *)((uintptr_t)FUNC_0(VAR_9)));
  (void) FUNC_2(VAR_5, ((void*)0), VAR_3[VAR_9],
      "return", VAR_2,
      (void *)((uintptr_t)FUNC_1(VAR_9)));

  VAR_6[VAR_9].stsy_entry = VAR_0;
  VAR_6[VAR_9].stsy_return = VAR_0;
 }
}
