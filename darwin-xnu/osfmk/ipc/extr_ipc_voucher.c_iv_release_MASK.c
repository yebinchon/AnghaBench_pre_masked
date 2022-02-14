
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* ipc_voucher_t ;
struct TYPE_4__ {int iv_refs; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static inline void
FUNC_2(ipc_voucher_t VAR_1)
{
 if (FUNC_1(&VAR_1->iv_refs) == 0) {
  FUNC_0(VAR_1, VAR_0);
 }
}
