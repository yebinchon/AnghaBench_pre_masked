
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef TYPE_3__* j_compress_ptr ;
typedef int j_common_ptr ;
struct TYPE_19__ {int num_scans; TYPE_2__* marker; TYPE_1__* mem; scalar_t__ optimize_coding; scalar_t__ progressive_mode; scalar_t__ arith_code; int raw_data_in; } ;
struct TYPE_18__ {int (* write_file_header ) (TYPE_3__*) ;} ;
struct TYPE_17__ {int (* realize_virt_arrays ) (int ) ;} ;


 int FUNC_0 (TYPE_3__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (TYPE_3__*) ;

void
FUNC_13 (j_compress_ptr VAR_3)
{

  FUNC_3(VAR_3, VAR_0 );


  if (! VAR_3->raw_data_in) {
    FUNC_5(VAR_3);
    FUNC_6(VAR_3);
    FUNC_4(VAR_3, VAR_0 );
  }

  FUNC_7(VAR_3);

  if (VAR_3->arith_code) {
    FUNC_0(VAR_3, VAR_1);
  } else {
    if (VAR_3->progressive_mode) {



      FUNC_0(VAR_3, VAR_2);

    } else
      FUNC_8(VAR_3);
  }


  FUNC_1(VAR_3,
     (VAR_3->num_scans > 1 || VAR_3->optimize_coding));
  FUNC_2(VAR_3, VAR_0 );

  FUNC_9(VAR_3);


  (*VAR_3->mem->realize_virt_arrays) ((j_common_ptr) VAR_3);





  (*VAR_3->marker->write_file_header) (VAR_3);
}
