
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u32 ;



__attribute__((used)) static inline __u32 FUNC_0(void)
{
    __u32 VAR_0;
    asm volatile ("rpcc %0" : "=r"(VAR_0));
    return VAR_0;
}
