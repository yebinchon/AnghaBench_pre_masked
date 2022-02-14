
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int pdirty; int pactive; scalar_t__ nthreads; } ;
typedef TYPE_1__ ctl_arena_stats_t ;
struct TYPE_11__ {scalar_t__ ndirty; scalar_t__ nactive; } ;
typedef TYPE_2__ arena_t ;
struct TYPE_12__ {size_t narenas; TYPE_1__* arenas; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*) ;
 TYPE_3__ VAR_1 ;

__attribute__((used)) static void
FUNC_3(arena_t *VAR_2, unsigned VAR_3)
{
 ctl_arena_stats_t *VAR_4 = &VAR_1.arenas[VAR_3];
 ctl_arena_stats_t *VAR_5 = &VAR_1.arenas[VAR_1.narenas];

 FUNC_0(VAR_4);

 VAR_5->nthreads += VAR_4->nthreads;
 if (VAR_0) {
  FUNC_1(VAR_4, VAR_2);

  FUNC_2(VAR_5, VAR_4);
 } else {
  VAR_4->pactive += VAR_2->nactive;
  VAR_4->pdirty += VAR_2->ndirty;

  VAR_5->pactive += VAR_2->nactive;
  VAR_5->pdirty += VAR_2->ndirty;
 }
}
