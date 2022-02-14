
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;


 int FUNC_0 (struct timespec*) ;
 int FUNC_1 (struct timespec*,scalar_t__,scalar_t__) ;

void FUNC_2(struct timespec *VAR_0, struct timespec *VAR_1)
{
 struct timespec VAR_2;

 FUNC_1(&VAR_2,
    VAR_0->tv_sec + VAR_1->tv_sec,
    VAR_0->tv_nsec + VAR_1->tv_nsec);

 FUNC_0(&VAR_2);
}
