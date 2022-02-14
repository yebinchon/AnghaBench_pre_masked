
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
typedef int fd_set ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,int *,int *,int *,struct timeval*) ;

int FUNC_3(int VAR_1, fd_set *VAR_2, fd_set *VAR_3, fd_set *VAR_4,
                   struct timeval *VAR_5)
{
  if(VAR_1 < 0) {
    FUNC_0(VAR_0);
    return -1;
  }
  return FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
}
