
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_2__ {void* hypercall_page; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (void*) ;

__attribute__((used)) static u64 FUNC_1(u64 VAR_1, void *VAR_2, void *VAR_3)
{
 u32 VAR_4 = VAR_1 >> 32;
 u32 VAR_5 = VAR_1 & 0xFFFFFFFF;
 u32 VAR_6 = 1;
 u32 VAR_7 = 1;
 u64 VAR_8 = (VAR_2) ? FUNC_0(VAR_2) : 0;
 u32 VAR_9 = VAR_8 >> 32;
 u32 VAR_10 = VAR_8 & 0xFFFFFFFF;
 u64 VAR_11 = (VAR_3) ? FUNC_0(VAR_3) : 0;
 u32 VAR_12 = VAR_11 >> 32;
 u32 VAR_13 = VAR_11 & 0xFFFFFFFF;
 void *VAR_14 = VAR_0.hypercall_page;

 __asm__ __volatile__ ("call *%8" : "=d"(VAR_6),
         "=a"(VAR_7) : "d" (VAR_4),
         "a" (VAR_5), "b" (VAR_9),
         "c" (VAR_10), "D"(VAR_12),
         "S"(VAR_13), "m" (VAR_14));

 return VAR_7 | ((u64)VAR_6 << 32);

}
