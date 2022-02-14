
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_2__* vm_map_t ;
typedef TYPE_3__* thread_t ;
struct TYPE_12__ {TYPE_2__* map; } ;
struct TYPE_11__ {TYPE_1__* pmap; } ;
struct TYPE_10__ {scalar_t__ pagezero_accessible; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*,TYPE_3__*,int) ;
 int FUNC_1 (TYPE_2__*,TYPE_3__*,int) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int) ;

__attribute__((used)) static inline void FUNC_4(thread_t VAR_1, thread_t VAR_2, int VAR_3) {
 FUNC_3(FUNC_2() == VAR_0);
 vm_map_t VAR_4 = VAR_2->map, VAR_5 = VAR_1->map;
 if ((VAR_5 != VAR_4) || (VAR_4->pmap->pagezero_accessible)) {
  FUNC_1(VAR_5, VAR_1, VAR_3);
  FUNC_0(VAR_4, VAR_2, VAR_3);
 }
}
