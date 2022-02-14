
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef TYPE_4__* j_decompress_ptr ;
typedef int j_common_ptr ;
typedef int boolean ;
struct TYPE_14__ {scalar_t__ global_state; scalar_t__ output_scanline; scalar_t__ output_height; TYPE_3__* src; TYPE_2__* inputctl; TYPE_1__* master; int buffered_image; } ;
struct TYPE_13__ {int (* term_source ) (TYPE_4__*) ;} ;
struct TYPE_12__ {scalar_t__ (* consume_input ) (TYPE_4__*) ;int eoi_reached; } ;
struct TYPE_11__ {int (* finish_output_pass ) (TYPE_4__*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_4__*,int ) ;
 int FUNC_1 (TYPE_4__*,int ,scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_4__*) ;
 scalar_t__ FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*) ;

boolean
FUNC_6 (j_decompress_ptr VAR_9)
{
  if ((VAR_9->global_state == VAR_2 ||
       VAR_9->global_state == VAR_1) && ! VAR_9->buffered_image) {

    if (VAR_9->output_scanline < VAR_9->output_height)
      FUNC_0(VAR_9, VAR_6);
    (*VAR_9->master->finish_output_pass) (VAR_9);
    VAR_9->global_state = VAR_3;
  } else if (VAR_9->global_state == VAR_0) {

    VAR_9->global_state = VAR_3;
  } else if (VAR_9->global_state != VAR_3) {

    FUNC_1(VAR_9, VAR_5, VAR_9->global_state);
  }

  while (! VAR_9->inputctl->eoi_reached) {
    if ((*VAR_9->inputctl->consume_input) (VAR_9) == VAR_7)
      return VAR_4;
  }

  (*VAR_9->src->term_source) (VAR_9);

  FUNC_2((j_common_ptr) VAR_9);
  return VAR_8;
}
