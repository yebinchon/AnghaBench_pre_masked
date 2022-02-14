
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* pve_next; } ;
typedef TYPE_1__ pv_entry_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline void FUNC_2(pv_entry_t *VAR_3, pv_entry_t *VAR_4, int VAR_5) {
 FUNC_0(&VAR_2);
 VAR_4->pve_next = VAR_1;
 VAR_1 = VAR_3;
 VAR_0 += VAR_5;
 FUNC_1(&VAR_2);
}
