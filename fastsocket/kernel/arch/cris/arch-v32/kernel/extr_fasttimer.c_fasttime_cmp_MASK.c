
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fasttime_t {scalar_t__ tv_usec; int tv_jiff; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;

inline int FUNC_2(struct fasttime_t *VAR_0, struct fasttime_t *VAR_1)
{

 if (FUNC_1(VAR_0->tv_jiff, VAR_1->tv_jiff))
  return -1;
 else if (FUNC_0(VAR_0->tv_jiff, VAR_1->tv_jiff))
  return 1;


 if (VAR_0->tv_usec < VAR_1->tv_usec)
  return -1;
 else if (VAR_0->tv_usec > VAR_1->tv_usec)
  return 1;
 return 0;
}
