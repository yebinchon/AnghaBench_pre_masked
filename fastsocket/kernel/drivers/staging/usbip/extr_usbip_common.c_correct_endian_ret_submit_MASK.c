
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbip_header_ret_submit {int error_count; int start_frame; int actual_length; int status; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct usbip_header_ret_submit *VAR_0,
        int VAR_1)
{
 if (VAR_1) {
  FUNC_1(&VAR_0->status);
  FUNC_1(&VAR_0->actual_length);
  FUNC_1(&VAR_0->start_frame);
  FUNC_1(&VAR_0->error_count);
 } else {
  FUNC_0(&VAR_0->status);
  FUNC_0(&VAR_0->actual_length);
  FUNC_0(&VAR_0->start_frame);
  FUNC_0(&VAR_0->error_count);
 }
}
