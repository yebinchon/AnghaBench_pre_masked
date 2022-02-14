
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct timespec {unsigned long member_0; unsigned long member_1; } ;


 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (struct timespec*) ;

__attribute__((used)) static u64 FUNC_2(unsigned long VAR_0, unsigned long VAR_1)
{
 if (VAR_0 || VAR_1) {
  struct timespec VAR_2 = {VAR_0, VAR_1};
  return FUNC_0() + FUNC_1(&VAR_2);
 } else
  return 0;
}
