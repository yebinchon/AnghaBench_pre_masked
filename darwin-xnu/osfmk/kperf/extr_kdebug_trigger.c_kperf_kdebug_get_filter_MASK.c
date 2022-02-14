
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct kperf_kdebug_filter {int n_debugids; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 struct kperf_kdebug_filter* VAR_0 ;

uint32_t
FUNC_2(struct kperf_kdebug_filter **VAR_1)
{
 int VAR_2;

 if ((VAR_2 = FUNC_1())) {
  return 0;
 }

 FUNC_0(VAR_1 != ((void*)0));

 *VAR_1 = VAR_0;
 return VAR_0->n_debugids;
}
