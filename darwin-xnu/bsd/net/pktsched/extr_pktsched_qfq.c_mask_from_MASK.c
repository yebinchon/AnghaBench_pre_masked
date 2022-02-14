
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long pktsched_bitmap_t ;



__attribute__((used)) static inline pktsched_bitmap_t
FUNC_0(pktsched_bitmap_t VAR_0, int VAR_1)
{
 return (VAR_0 & ~((1UL << VAR_1) - 1));
}
