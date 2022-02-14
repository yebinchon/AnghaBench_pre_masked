
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct timespec {int tv_nsec; int tv_sec; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,scalar_t__*) ;

uint64_t
FUNC_1(struct timespec *VAR_1)
{
 uint64_t VAR_2, VAR_3;
 FUNC_0(VAR_1->tv_sec, VAR_0, &VAR_2);
 FUNC_0(VAR_1->tv_nsec, 1, &VAR_3);
 return VAR_2 + VAR_3;
}
