
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int jvirt_barray_ptr ;
typedef TYPE_3__* j_compress_ptr ;
typedef int j_common_ptr ;
struct TYPE_11__ {scalar_t__ global_state; scalar_t__ next_scanline; TYPE_2__* dest; TYPE_1__* err; } ;
struct TYPE_10__ {int (* init_destination ) (TYPE_3__*) ;} ;
struct TYPE_9__ {int (* reset_error_mgr ) (int ) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_3__*,int ,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,int *) ;

void
FUNC_5 (j_compress_ptr VAR_4, jvirt_barray_ptr * VAR_5)
{
  if (VAR_4->global_state != VAR_0)
    FUNC_0(VAR_4, VAR_3, VAR_4->global_state);

  FUNC_1(VAR_4, VAR_2);

  (*VAR_4->err->reset_error_mgr) ((j_common_ptr) VAR_4);
  (*VAR_4->dest->init_destination) (VAR_4);

  FUNC_4(VAR_4, VAR_5);

  VAR_4->next_scanline = 0;
  VAR_4->global_state = VAR_1;
}
