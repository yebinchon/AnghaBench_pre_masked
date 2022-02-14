
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ __sighandler_t ;
struct TYPE_3__ {int sa_flags; int sa_mask; scalar_t__ sa_handler; } ;
struct TYPE_4__ {TYPE_1__ sigact; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 TYPE_2__ VAR_10 ;
 scalar_t__ FUNC_0 (int ,TYPE_1__*,int *) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(void)
{
 VAR_10.sigact.sa_flags = (VAR_0 | VAR_2 | VAR_1);
 VAR_10.sigact.sa_handler = (__sighandler_t)VAR_9;
 if (FUNC_1(&VAR_10.sigact.sa_mask) < 0)
  return -1;
 if (FUNC_0(VAR_5, &VAR_10.sigact, ((void*)0)) < 0)
  return -1;
 if (FUNC_0(VAR_8, &VAR_10.sigact, ((void*)0)) < 0)
  return -1;
 if (FUNC_0(VAR_6, &VAR_10.sigact, ((void*)0)) < 0)
  return -1;
 if (FUNC_0(VAR_3, &VAR_10.sigact, ((void*)0)) < 0)
  return -1;
 if (FUNC_0(VAR_7, &VAR_10.sigact, ((void*)0)) < 0)
  return -1;
 if (FUNC_0(VAR_4, &VAR_10.sigact, ((void*)0)) < 0)
  return -1;

 return 0;
}
