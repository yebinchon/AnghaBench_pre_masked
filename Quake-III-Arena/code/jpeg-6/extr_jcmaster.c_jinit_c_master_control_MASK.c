
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct jpeg_comp_master {int dummy; } ;
typedef TYPE_3__* my_master_ptr ;
typedef TYPE_4__* j_compress_ptr ;
typedef int j_common_ptr ;
typedef scalar_t__ boolean ;
struct TYPE_12__ {int num_scans; scalar_t__ optimize_coding; void* progressive_mode; int * scan_info; struct jpeg_comp_master* master; TYPE_1__* mem; } ;
struct TYPE_10__ {void* is_last_pass; int finish_pass; int pass_startup; int prepare_for_pass; } ;
struct TYPE_11__ {int total_passes; scalar_t__ pass_number; scalar_t__ scan_number; int pass_type; TYPE_2__ pub; } ;
struct TYPE_9__ {scalar_t__ (* alloc_small ) (int ,int ,int ) ;} ;


 int FUNC_0 (TYPE_4__*,int ) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_4__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (TYPE_4__*) ;

void
FUNC_5 (j_compress_ptr VAR_11, boolean VAR_12)
{
  my_master_ptr VAR_13;

  VAR_13 = (my_master_ptr)
      (*VAR_11->mem->alloc_small) ((j_common_ptr) VAR_11, VAR_2,
      FUNC_1(VAR_7));
  VAR_11->master = (struct jpeg_comp_master *) VAR_13;
  VAR_13->pub.prepare_for_pass = VAR_10;
  VAR_13->pub.pass_startup = VAR_9;
  VAR_13->pub.finish_pass = VAR_4;
  VAR_13->pub.is_last_pass = VAR_0;


  FUNC_2(VAR_11);

  if (VAR_11->scan_info != ((void*)0)) {



    FUNC_0(VAR_11, VAR_1);

  } else {
    VAR_11->progressive_mode = VAR_0;
    VAR_11->num_scans = 1;
  }

  if (VAR_11->progressive_mode)
    VAR_11->optimize_coding = VAR_3;


  if (VAR_12) {

    if (VAR_11->optimize_coding)
      VAR_13->pass_type = VAR_5;
    else
      VAR_13->pass_type = VAR_8;
  } else {

    VAR_13->pass_type = VAR_6;
  }
  VAR_13->scan_number = 0;
  VAR_13->pass_number = 0;
  if (VAR_11->optimize_coding)
    VAR_13->total_passes = VAR_11->num_scans * 2;
  else
    VAR_13->total_passes = VAR_11->num_scans;
}
