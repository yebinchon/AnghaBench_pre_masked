
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbip_header_ret_submit {int error_count; int start_frame; int actual_length; int status; } ;
struct TYPE_2__ {struct usbip_header_ret_submit ret_submit; } ;
struct usbip_header {TYPE_1__ u; } ;
struct urb {int error_count; int start_frame; int actual_length; int status; } ;



__attribute__((used)) static void FUNC_0(struct usbip_header *VAR_0, struct urb *VAR_1,
        int VAR_2)
{
 struct usbip_header_ret_submit *VAR_3 = &VAR_0->u.ret_submit;

 if (VAR_2) {


  VAR_3->status = VAR_1->status;
  VAR_3->actual_length = VAR_1->actual_length;
  VAR_3->start_frame = VAR_1->start_frame;
  VAR_3->error_count = VAR_1->error_count;
 } else {


  VAR_1->status = VAR_3->status;
  VAR_1->actual_length = VAR_3->actual_length;
  VAR_1->start_frame = VAR_3->start_frame;
  VAR_1->error_count = VAR_3->error_count;
 }
}
