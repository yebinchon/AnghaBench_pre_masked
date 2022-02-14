
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {TYPE_1__* lck_mtx_ptr; } ;
typedef TYPE_2__ lck_mtx_t ;
typedef int boolean_t ;
struct TYPE_5__ {TYPE_2__ lck_mtx; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) __attribute__((always_inline))
static boolean_t
FUNC_1(
 lck_mtx_t **VAR_1,
 uint32_t *VAR_2)
{
 *VAR_1 = &((*VAR_1)->lck_mtx_ptr->lck_mtx);
 *VAR_2 = FUNC_0(*VAR_1);
 return VAR_0;
}
