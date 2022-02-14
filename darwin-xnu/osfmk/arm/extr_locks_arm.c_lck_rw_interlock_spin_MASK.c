
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int lck_rw_data; } ;
typedef TYPE_1__ lck_rw_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int FUNC_2 (char*,TYPE_1__*,int ) ;
 int FUNC_3 () ;

__attribute__((used)) static inline void
FUNC_4(lck_rw_t *VAR_2)
{
 FUNC_2("lck_rw_interlock_spin(): Interlock locked %p %x", VAR_2, VAR_2->lck_rw_data);

}
