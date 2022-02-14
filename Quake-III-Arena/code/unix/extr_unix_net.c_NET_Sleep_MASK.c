
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timeval {int tv_sec; int tv_usec; } ;
typedef scalar_t__ qboolean ;
typedef int fd_set ;
struct TYPE_2__ {int integer; } ;


 int FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (scalar_t__,int *,int *,int *,struct timeval*) ;

void FUNC_3(int VAR_2)
{
    struct timeval VAR_3;
 fd_set VAR_4;
 extern qboolean VAR_5;

 if (!VAR_1 || !VAR_0->integer)
  return;

 FUNC_1(&VAR_4);
 if (VAR_5)
  FUNC_0(0, &VAR_4);
 FUNC_0(VAR_1, &VAR_4);
 VAR_3.tv_sec = VAR_2/1000;
 VAR_3.tv_usec = (VAR_2%1000)*1000;
 FUNC_2(VAR_1+1, &VAR_4, ((void*)0), ((void*)0), &VAR_3);
}
