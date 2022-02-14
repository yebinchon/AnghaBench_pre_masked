
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct timespec {scalar_t__ tv_sec; scalar_t__ tv_nsec; } ;
typedef int clockid_t ;
struct TYPE_2__ {scalar_t__ tv_sec; scalar_t__ tv_nsec; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int,scalar_t__,scalar_t__*) ;
 int FUNC_1 () ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(const clockid_t VAR_3, const struct timespec *VAR_4)
{

 u64 VAR_5;
 u32 VAR_6;

 VAR_5 = FUNC_1() * VAR_2;

 VAR_1.tv_sec = VAR_4->tv_sec - FUNC_0(VAR_5, VAR_0, &VAR_6);

 if (VAR_6 <= VAR_4->tv_nsec)
  VAR_1.tv_nsec = VAR_4->tv_sec - VAR_6;
 else {
  VAR_1.tv_nsec = VAR_4->tv_sec + VAR_0 - VAR_6;
  VAR_1.tv_sec--;
 }
 return 0;
}
