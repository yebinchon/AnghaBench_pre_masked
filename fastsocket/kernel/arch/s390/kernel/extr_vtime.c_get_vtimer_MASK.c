
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u64 ;



__attribute__((used)) static inline __u64 FUNC_0(void)
{
 __u64 VAR_0;

 asm volatile("STPT %0" : "=m" (VAR_0));
 return VAR_0;
}
