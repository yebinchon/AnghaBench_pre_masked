
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tsd_t ;
struct TYPE_3__ {scalar_t__ prof_accumbytes; } ;
typedef TYPE_1__ tcache_t ;
typedef int tcache_bin_t ;
typedef int szind_t ;
typedef int arena_t ;


 int FUNC_0 (int *,int *,int ,scalar_t__) ;
 scalar_t__ VAR_0 ;
 void* FUNC_1 (int *) ;

void *
FUNC_2(tsd_t *VAR_1, arena_t *VAR_2, tcache_t *VAR_3,
    tcache_bin_t *VAR_4, szind_t VAR_5)
{
 void *VAR_6;

 FUNC_0(VAR_2, VAR_4, VAR_5, VAR_0 ?
     VAR_3->prof_accumbytes : 0);
 if (VAR_0)
  VAR_3->prof_accumbytes = 0;
 VAR_6 = FUNC_1(VAR_4);

 return (VAR_6);
}
