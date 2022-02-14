
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct jpeg_input_controller {int dummy; } ;
typedef TYPE_3__* my_inputctl_ptr ;
typedef TYPE_4__* j_decompress_ptr ;
typedef int j_common_ptr ;
struct TYPE_9__ {struct jpeg_input_controller* inputctl; TYPE_2__* mem; } ;
struct TYPE_6__ {void* eoi_reached; void* has_multiple_scans; int finish_input_pass; int start_input_pass; int reset_input_controller; int consume_input; } ;
struct TYPE_8__ {int inheaders; TYPE_1__ pub; } ;
struct TYPE_7__ {scalar_t__ (* alloc_small ) (int ,int ,int ) ;} ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;

void
FUNC_2 (j_decompress_ptr VAR_8)
{
  my_inputctl_ptr VAR_9;


  VAR_9 = (my_inputctl_ptr)
    (*VAR_8->mem->alloc_small) ((j_common_ptr) VAR_8, VAR_1,
    FUNC_0(VAR_5));
  VAR_8->inputctl = (struct jpeg_input_controller *) VAR_9;

  VAR_9->pub.consume_input = VAR_3;
  VAR_9->pub.reset_input_controller = VAR_6;
  VAR_9->pub.start_input_pass = VAR_7;
  VAR_9->pub.finish_input_pass = VAR_4;



  VAR_9->pub.has_multiple_scans = VAR_0;
  VAR_9->pub.eoi_reached = VAR_0;
  VAR_9->inheaders = VAR_2;
}
