
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
struct TYPE_14__ {scalar_t__ global_state; TYPE_3__* dest; TYPE_1__* marker; TYPE_2__* err; } ;
struct TYPE_13__ {int (* term_destination ) (TYPE_4__*) ;int (* init_destination ) (TYPE_4__*) ;} ;
struct TYPE_12__ {int (* reset_error_mgr ) (int ) ;} ;
struct TYPE_11__ {int (* write_tables_only ) (TYPE_4__*) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_4__*,int ,scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*) ;

void
FUNC_7 (j_compress_ptr VAR_2)
{
  if (VAR_2->global_state != VAR_0)
    FUNC_0(VAR_2, VAR_1, VAR_2->global_state);


  (*VAR_2->err->reset_error_mgr) ((j_common_ptr) VAR_2);
  (*VAR_2->dest->init_destination) (VAR_2);

  FUNC_1(VAR_2);

  (*VAR_2->marker->write_tables_only) (VAR_2);

  (*VAR_2->dest->term_destination) (VAR_2);

  FUNC_2((j_common_ptr) VAR_2);
}
