
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int tv_sec; int tv_nsec; } ;
typedef int mtx_t ;
typedef int cnd_t ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int ) ;
 scalar_t__ FUNC_1 (int ,struct timespec*) ;
 int FUNC_2 (int *,int *,struct timespec const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_3(cnd_t *VAR_5, mtx_t *VAR_6, const struct timespec *VAR_7)
{
  int VAR_8;
  VAR_8 = FUNC_2(VAR_5, VAR_6, VAR_7);
  if (VAR_8 == VAR_1)
  {
    return VAR_4;
  }
  return VAR_8 == 0 ? VAR_3 : VAR_2;

}
