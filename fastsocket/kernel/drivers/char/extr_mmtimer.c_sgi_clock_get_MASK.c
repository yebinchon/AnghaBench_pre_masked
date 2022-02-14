
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct timespec {int tv_sec; } ;
typedef int clockid_t ;
struct TYPE_2__ {scalar_t__ tv_sec; scalar_t__ tv_nsec; } ;


 struct timespec FUNC_0 (scalar_t__) ;
 int FUNC_1 () ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(clockid_t VAR_2, struct timespec *VAR_3)
{
 u64 VAR_4;

 VAR_4 = FUNC_1() * VAR_1
   + VAR_0.tv_nsec;
 *VAR_3 = FUNC_0(VAR_4);
 VAR_3->tv_sec += VAR_0.tv_sec;
 return 0;
}
