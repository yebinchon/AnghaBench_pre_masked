
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vc_data {int dummy; } ;
struct TYPE_2__ {int lock; int * pid; int sig; } ;


 scalar_t__ FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void FUNC_4(struct vc_data *VAR_1)
{
 FUNC_2(&VAR_0.lock);
 if (VAR_0.pid)
  if (FUNC_0(VAR_0.pid, VAR_0.sig, 1)) {
   FUNC_1(VAR_0.pid);
   VAR_0.pid = ((void*)0);
  }
 FUNC_3(&VAR_0.lock);
}
