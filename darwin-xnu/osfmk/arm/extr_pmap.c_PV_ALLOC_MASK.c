
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* pve_next; } ;
typedef TYPE_1__ pv_entry_t ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static inline void FUNC_3(pv_entry_t **VAR_6) {
 FUNC_0(*VAR_6 == VAR_0);
 FUNC_1(&VAR_3);




 if ((VAR_4 >= VAR_5) && ((*VAR_6 = VAR_2) != 0)) {
  VAR_2 = (pv_entry_t *)(*VAR_6)->pve_next;
  (*VAR_6)->pve_next = VAR_0;
  VAR_1--;
 }

 FUNC_2(&VAR_3);
}
