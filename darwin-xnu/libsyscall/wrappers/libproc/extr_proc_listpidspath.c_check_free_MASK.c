
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* fdOpenInfoRef ;
struct TYPE_4__ {struct TYPE_4__* fds; struct TYPE_4__* threads; struct TYPE_4__* pids; } ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1(fdOpenInfoRef VAR_0)
{
 if (VAR_0->pids != ((void*)0)) {
  FUNC_0(VAR_0->pids);
 }

 if (VAR_0->threads != ((void*)0)) {
  FUNC_0(VAR_0->threads);
 }

 if (VAR_0->fds != ((void*)0)) {
  FUNC_0(VAR_0->fds);
 }

 FUNC_0(VAR_0);

 return;
}
