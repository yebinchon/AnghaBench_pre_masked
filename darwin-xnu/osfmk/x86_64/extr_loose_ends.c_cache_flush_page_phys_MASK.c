
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ppnum_t ;
struct TYPE_4__ {int cache_linesize; } ;
typedef TYPE_1__ i386_cpu_info_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (void*) ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,TYPE_1__*) ;

void
FUNC_7(ppnum_t VAR_2)
{
 boolean_t VAR_3;
 unsigned char *VAR_4;
 i386_cpu_info_t *VAR_5 = FUNC_2();
 int VAR_6;
 int VAR_7;

 VAR_6 = VAR_5->cache_linesize;
 if (VAR_6 == 0)
  FUNC_6("cacheline_size=0 cpuid_infop=%p\n", VAR_5);
 VAR_7 = VAR_1/VAR_6;

 FUNC_4();

 VAR_3 = FUNC_5(VAR_0);

 for (VAR_4 = (unsigned char *)FUNC_0(FUNC_3(VAR_2));
      VAR_7 > 0;
      VAR_7--, VAR_4 += VAR_6) {
  FUNC_1((void *) VAR_4);
 }

 (void) FUNC_5(VAR_3);

 FUNC_4();
}
