
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_3__* j_decompress_ptr ;
typedef int j_common_ptr ;
typedef int boolean ;
struct TYPE_12__ {scalar_t__ global_state; int input_scan_number; int output_scan_number; scalar_t__ total_iMCU_rows; TYPE_2__* progress; TYPE_1__* inputctl; scalar_t__ buffered_image; } ;
struct TYPE_11__ {scalar_t__ pass_counter; scalar_t__ pass_limit; int (* progress_monitor ) (int ) ;} ;
struct TYPE_10__ {int (* consume_input ) (TYPE_3__*) ;scalar_t__ has_multiple_scans; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_3__*,int ,scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__*) ;

boolean
FUNC_6 (j_decompress_ptr VAR_12)
{
  if (VAR_12->global_state == VAR_3) {

    FUNC_2(VAR_12);
    if (VAR_12->buffered_image) {

      VAR_12->global_state = VAR_0;
      return VAR_11;
    }
    VAR_12->global_state = VAR_1;
  }
  if (VAR_12->global_state == VAR_1) {

    if (VAR_12->inputctl->has_multiple_scans) {
      FUNC_0(VAR_12, VAR_6);

    }
    VAR_12->output_scan_number = VAR_12->input_scan_number;
  } else if (VAR_12->global_state != VAR_2)
    FUNC_1(VAR_12, VAR_5, VAR_12->global_state);

  return FUNC_3(VAR_12);
}
