
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int x; int y; } ;
struct pwc_device {scalar_t__ frame_trailer_size; scalar_t__ frame_header_size; scalar_t__ frame_size; scalar_t__ frame_total_size; TYPE_1__ view; int type; int pixfmt; } ;
struct TYPE_4__ {int y; int x; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (char*,int,int,int,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int,int,int ,int ) ;
 int FUNC_5 (char*,int ,int,int) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (struct pwc_device*,int,int) ;
 TYPE_2__* VAR_1 ;
 int FUNC_8 (struct pwc_device*) ;
 int FUNC_9 (struct pwc_device*,int,int,int,int) ;
 int FUNC_10 (struct pwc_device*,int,int) ;
 int FUNC_11 (struct pwc_device*,int,int,int,int) ;
 int * VAR_2 ;

int FUNC_12(struct pwc_device *VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7, int VAR_8)
{
 int VAR_9, VAR_10;

 FUNC_2("set_video_mode(%dx%d @ %d, pixfmt %08x).\n", VAR_4, VAR_5, VAR_6, VAR_3->pixfmt);
 VAR_10 = FUNC_7(VAR_3, VAR_4, VAR_5);
 if (VAR_10 < 0) {
  FUNC_3("Could not find suitable size.\n");
  return -VAR_0;
 }
 FUNC_6("decode_size = %d.\n", VAR_10);

 if (FUNC_0(VAR_3->type)) {
  VAR_9 = FUNC_10(VAR_3, VAR_10, VAR_6);

 } else if (FUNC_1(VAR_3->type)) {
  VAR_9 = FUNC_9(VAR_3, VAR_10, VAR_6, VAR_7, VAR_8);

 } else {
  VAR_9 = FUNC_11(VAR_3, VAR_10, VAR_6, VAR_7, VAR_8);
 }
 if (VAR_9 < 0) {
  FUNC_5("Failed to set video mode %s@%d fps; return code = %d\n", VAR_2[VAR_10], VAR_6, VAR_9);
  return VAR_9;
 }
 VAR_3->view.x = VAR_4;
 VAR_3->view.y = VAR_5;
 VAR_3->frame_total_size = VAR_3->frame_size + VAR_3->frame_header_size + VAR_3->frame_trailer_size;
 FUNC_8(VAR_3);
 FUNC_4("Set viewport to %dx%d, image size is %dx%d.\n", VAR_4, VAR_5, VAR_1[VAR_10].x, VAR_1[VAR_10].y);
 return 0;
}
