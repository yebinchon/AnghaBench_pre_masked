
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ timeout_fcn_t ;
typedef int thread_call_func_t ;
struct timespec {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;


 int VAR_0 ;
 int FUNC_0 (int,int*) ;
 int FUNC_1 (scalar_t__,int*) ;
 int FUNC_2 (int ,void*,int) ;

void
FUNC_3(
 timeout_fcn_t VAR_1,
 void *VAR_2,
 struct timespec *VAR_3)
{
 uint64_t VAR_4 = 0;

 if (VAR_3 && (VAR_3->tv_sec || VAR_3->tv_nsec)) {
  FUNC_1((uint64_t)VAR_3->tv_sec * VAR_0 + VAR_3->tv_nsec, &VAR_4 );
  FUNC_0( VAR_4, &VAR_4 );
 }
 FUNC_2((thread_call_func_t)VAR_1, VAR_2, VAR_4);
}
