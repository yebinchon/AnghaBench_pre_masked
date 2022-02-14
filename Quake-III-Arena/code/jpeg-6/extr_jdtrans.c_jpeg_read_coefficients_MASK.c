
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int jvirt_barray_ptr ;
typedef TYPE_4__* j_decompress_ptr ;
typedef int j_common_ptr ;
struct TYPE_12__ {scalar_t__ global_state; TYPE_3__* coef; scalar_t__ total_iMCU_rows; TYPE_2__* progress; TYPE_1__* inputctl; } ;
struct TYPE_11__ {int * coef_arrays; } ;
struct TYPE_10__ {scalar_t__ pass_counter; scalar_t__ pass_limit; int (* progress_monitor ) (int ) ;} ;
struct TYPE_9__ {int (* consume_input ) (TYPE_4__*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_4__*,int ,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;

jvirt_barray_ptr *
FUNC_4 (j_decompress_ptr VAR_8)
{
  if (VAR_8->global_state == VAR_1) {

    FUNC_3(VAR_8);
    VAR_8->global_state = VAR_0;
  } else if (VAR_8->global_state != VAR_0)
    FUNC_0(VAR_8, VAR_3, VAR_8->global_state);

  for (;;) {
    int VAR_9;

    if (VAR_8->progress != ((void*)0))
      (*VAR_8->progress->progress_monitor) ((j_common_ptr) VAR_8);

    VAR_9 = (*VAR_8->inputctl->consume_input) (VAR_8);
    if (VAR_9 == VAR_7)
      return ((void*)0);
    if (VAR_9 == VAR_4)
      break;

    if (VAR_8->progress != ((void*)0) &&
 (VAR_9 == VAR_6 || VAR_9 == VAR_5)) {
      if (++VAR_8->progress->pass_counter >= VAR_8->progress->pass_limit) {

 VAR_8->progress->pass_limit += (long) VAR_8->total_iMCU_rows;
      }
    }
  }

  VAR_8->global_state = VAR_2;
  return VAR_8->coef->coef_arrays;
}
