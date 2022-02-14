
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int data; } ;
typedef TYPE_1__ lck_rw_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void
FUNC_2(lck_rw_t *VAR_1)
{
 while (FUNC_1(&VAR_1->data) & VAR_0) {
  FUNC_0();
 }
}
