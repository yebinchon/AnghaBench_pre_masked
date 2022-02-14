
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_info {int dummy; } ;


 unsigned long VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct thread_info *VAR_1, unsigned long VAR_2)
{
 return (VAR_2 > (unsigned long)VAR_1)
  && (VAR_2 < (unsigned long)VAR_1 + VAR_0 - 3);
}
