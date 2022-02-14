
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef TYPE_4__* j_compress_ptr ;
typedef int j_common_ptr ;
typedef scalar_t__ boolean ;
struct TYPE_14__ {scalar_t__ global_state; scalar_t__ raw_data_in; scalar_t__ next_scanline; TYPE_2__* master; TYPE_1__* dest; TYPE_3__* err; } ;
struct TYPE_13__ {int (* reset_error_mgr ) (int ) ;} ;
struct TYPE_12__ {int (* prepare_for_pass ) (TYPE_4__*) ;} ;
struct TYPE_11__ {int (* init_destination ) (TYPE_4__*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_4__*,int ,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*) ;

void
FUNC_6 (j_compress_ptr VAR_5, boolean VAR_6)
{
  if (VAR_5->global_state != VAR_2)
    FUNC_0(VAR_5, VAR_4, VAR_5->global_state);

  if (VAR_6)
    FUNC_2(VAR_5, VAR_3);


  (*VAR_5->err->reset_error_mgr) ((j_common_ptr) VAR_5);
  (*VAR_5->dest->init_destination) (VAR_5);

  FUNC_1(VAR_5);

  (*VAR_5->master->prepare_for_pass) (VAR_5);



  VAR_5->next_scanline = 0;
  VAR_5->global_state = (VAR_5->raw_data_in ? VAR_0 : VAR_1);
}
