
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int tx_queue; int flags; } ;
typedef TYPE_1__ hrz_dev ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,TYPE_1__*) ;
 int FUNC_1 (int ,int *) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline void FUNC_3 (hrz_dev * VAR_2) {
  FUNC_1 (VAR_1, &VAR_2->flags);
  FUNC_0 (VAR_0, "cleared tx_busy for dev %p", VAR_2);
  FUNC_2 (&VAR_2->tx_queue);
}
