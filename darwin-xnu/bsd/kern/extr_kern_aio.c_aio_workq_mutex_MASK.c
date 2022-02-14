
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lck_mtx_t ;
typedef TYPE_1__* aio_workq_t ;
struct TYPE_3__ {int aioq_mtx; } ;



__attribute__((used)) static lck_mtx_t*
FUNC_0(aio_workq_t VAR_0)
{
 return &VAR_0->aioq_mtx;
}
