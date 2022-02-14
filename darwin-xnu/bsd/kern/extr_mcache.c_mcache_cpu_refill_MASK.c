
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cc_objs; int cc_bktsize; int cc_pobjs; int * cc_filled; int * cc_pfilled; } ;
typedef TYPE_1__ mcache_cpu_t ;
typedef int mcache_bkt_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(mcache_cpu_t *VAR_0, mcache_bkt_t *VAR_1, int VAR_2)
{
 FUNC_0((VAR_0->cc_filled == ((void*)0) && VAR_0->cc_objs == -1) ||
     (VAR_0->cc_filled && VAR_0->cc_objs + VAR_2 == VAR_0->cc_bktsize));
 FUNC_0(VAR_0->cc_bktsize > 0);

 VAR_0->cc_pfilled = VAR_0->cc_filled;
 VAR_0->cc_pobjs = VAR_0->cc_objs;
 VAR_0->cc_filled = VAR_1;
 VAR_0->cc_objs = VAR_2;
}
