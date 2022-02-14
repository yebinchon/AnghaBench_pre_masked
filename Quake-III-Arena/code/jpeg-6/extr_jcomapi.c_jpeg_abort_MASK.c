
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* j_common_ptr ;
struct TYPE_6__ {scalar_t__ is_decompressor; int global_state; TYPE_1__* mem; } ;
struct TYPE_5__ {int (* free_pool ) (TYPE_2__*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,int) ;

void
FUNC_1 (j_common_ptr VAR_4)
{
  int VAR_5;




  for (VAR_5 = VAR_2-1; VAR_5 > VAR_3; VAR_5--) {
    (*VAR_4->mem->free_pool) (VAR_4, VAR_5);
  }


  VAR_4->global_state = (VAR_4->is_decompressor ? VAR_1 : VAR_0);
}
