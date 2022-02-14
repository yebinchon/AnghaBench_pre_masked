
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;
typedef unsigned long long cputime64_t ;


 unsigned long long FUNC_0 (unsigned int,unsigned long long*) ;
 unsigned long long FUNC_1 (unsigned int,int *) ;
 scalar_t__ FUNC_2 (unsigned int,unsigned long long*) ;

__attribute__((used)) static inline cputime64_t FUNC_3(unsigned int VAR_0, cputime64_t *VAR_1)
{
 u64 VAR_2 = FUNC_1(VAR_0, ((void*)0));

 if (VAR_2 == -1ULL)
  return FUNC_0(VAR_0, VAR_1);
 else
  VAR_2 += FUNC_2(VAR_0, VAR_1);

 return VAR_2;
}
