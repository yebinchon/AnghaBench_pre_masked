
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flush_icache_range_args {unsigned long start; unsigned long end; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int ,struct flush_icache_range_args*,int) ;

__attribute__((used)) static void FUNC_2(unsigned long VAR_1, unsigned long VAR_2)
{
 struct flush_icache_range_args VAR_3;

 VAR_3.start = VAR_1;
 VAR_3.end = VAR_2;

 FUNC_1(VAR_0, &VAR_3, 1);
 FUNC_0();
}
