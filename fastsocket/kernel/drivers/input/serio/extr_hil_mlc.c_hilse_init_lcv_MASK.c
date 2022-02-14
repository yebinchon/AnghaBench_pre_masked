
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct timeval {int tv_sec; } ;
struct TYPE_3__ {scalar_t__ lcv; struct timeval lcv_tv; } ;
typedef TYPE_1__ hil_mlc ;


 int FUNC_0 (struct timeval*) ;

__attribute__((used)) static int FUNC_1(hil_mlc *VAR_0, int VAR_1)
{
 struct timeval VAR_2;

 FUNC_0(&VAR_2);

 if (VAR_0->lcv && (VAR_2.tv_sec - VAR_0->lcv_tv.tv_sec) < 5)
  return -1;

 VAR_0->lcv_tv = VAR_2;
 VAR_0->lcv = 0;

 return 0;
}
