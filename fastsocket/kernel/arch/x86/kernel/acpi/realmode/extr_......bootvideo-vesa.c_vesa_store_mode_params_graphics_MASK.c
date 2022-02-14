
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int lfb_depth; int lfb_size; int red_size; int lfb_base; int pages; int lfb_height; int lfb_width; int lfb_linelength; int vesa_attributes; int orig_video_isVGA; } ;
struct TYPE_8__ {TYPE_1__ screen_info; } ;
struct TYPE_7__ {int total_memory; } ;
struct TYPE_6__ {int bpp; int rmask; int lfb_ptr; int image_planes; int v_res; int h_res; int logical_scan; int mode_attr; } ;


 int VAR_0 ;
 TYPE_4__ VAR_1 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 TYPE_3__ VAR_2 ;
 TYPE_2__ VAR_3 ;

__attribute__((used)) static void FUNC_3(void)
{

 VAR_1.screen_info.orig_video_isVGA = VAR_0;


 VAR_1.screen_info.vesa_attributes = VAR_3.mode_attr;
 VAR_1.screen_info.lfb_linelength = VAR_3.logical_scan;
 VAR_1.screen_info.lfb_width = VAR_3.h_res;
 VAR_1.screen_info.lfb_height = VAR_3.v_res;
 VAR_1.screen_info.lfb_depth = VAR_3.bpp;
 VAR_1.screen_info.pages = VAR_3.image_planes;
 VAR_1.screen_info.lfb_base = VAR_3.lfb_ptr;
 FUNC_0(&VAR_1.screen_info.red_size,
        &VAR_3.rmask, 8);


 VAR_1.screen_info.lfb_size = VAR_2.total_memory;

 if (VAR_3.bpp <= 8)
  FUNC_1();

 FUNC_2();
}
