
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef TYPE_1__* uthread_t ;
struct TYPE_2__ {int * pth_name; } ;


 int VAR_0 ;
 int FUNC_0 (void*,int ) ;

void
FUNC_1(void *VAR_1)
{
 uthread_t VAR_2 = (uthread_t)VAR_1;
 if (VAR_2->pth_name != ((void*)0)) {
  void *VAR_3 = VAR_2->pth_name;
  VAR_2->pth_name = ((void*)0);
  FUNC_0(VAR_3, VAR_0);
 }
 return;
}
