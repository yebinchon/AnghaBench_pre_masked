
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flush_icache_range_args {unsigned long start; unsigned long end; } ;


 int FUNC_0 (unsigned long,unsigned long) ;

__attribute__((used)) static inline void FUNC_1(void *VAR_0)
{
 struct flush_icache_range_args *VAR_1 = VAR_0;
 unsigned long VAR_2 = VAR_1->start;
 unsigned long VAR_3 = VAR_1->end;

 FUNC_0(VAR_2, VAR_3);
}
