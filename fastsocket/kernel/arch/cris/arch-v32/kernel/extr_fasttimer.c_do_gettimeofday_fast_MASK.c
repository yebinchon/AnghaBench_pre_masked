
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fasttime_t {int tv_usec; int tv_jiff; } ;


 int FUNC_0 () ;
 int VAR_0 ;

inline void FUNC_1(struct fasttime_t *VAR_1)
{
 VAR_1->tv_jiff = VAR_0;
 VAR_1->tv_usec = FUNC_0();
}
