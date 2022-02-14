
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int u_int64_t ;
struct timespec {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;
typedef int lck_mtx_t ;
typedef int caddr_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int,char const*,int ,int (*) (int),int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (scalar_t__,int *) ;

int
FUNC_3(
 void *VAR_1,
 lck_mtx_t *VAR_2,
 int VAR_3,
 const char *VAR_4,
 struct timespec *VAR_5)
{
 u_int64_t VAR_6 = 0;

 if (VAR_5 && (VAR_5->tv_sec || VAR_5->tv_nsec)) {
  FUNC_2((uint64_t)VAR_5->tv_sec * VAR_0 + VAR_5->tv_nsec, &VAR_6 );
  FUNC_1( VAR_6, &VAR_6 );
 }

 return FUNC_0((caddr_t)VAR_1, VAR_3, VAR_4, VAR_6, (int (*)(int))0, VAR_2);
}
