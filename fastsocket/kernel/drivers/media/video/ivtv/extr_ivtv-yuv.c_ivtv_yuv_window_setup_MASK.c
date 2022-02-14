
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct yuv_frame_info {scalar_t__ src_x; scalar_t__ src_y; int src_w; int dst_w; int src_h; int dst_h; int interlaced_y; int pan_y; int dst_y; int vis_h; int pan_x; int dst_x; int vis_w; scalar_t__ lace_mode; scalar_t__ interlaced_uv; } ;
struct TYPE_2__ {int osd_x_offset; int osd_y_offset; scalar_t__ track_osd; struct yuv_frame_info old_frame_info; } ;
struct ivtv {TYPE_1__ yuv_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static u32 FUNC_0(struct ivtv *VAR_3, struct yuv_frame_info *VAR_4)
{
 struct yuv_frame_info *VAR_5 = &VAR_3->yuv_info.old_frame_info;
 int VAR_6;
 u32 VAR_7;
 u32 VAR_8 = 0;


 if (VAR_4->src_x < 0)
  VAR_4->src_x = 0;
 if (VAR_4->src_y < 0)
  VAR_4->src_y = 0;


 if ((VAR_6 = VAR_4->src_w - 4 * VAR_4->dst_w) > 0) {
  VAR_4->src_x += VAR_6 / 2;
  VAR_4->src_w = (VAR_4->src_w - VAR_6) & ~3;
  VAR_4->dst_w = VAR_4->src_w / 4;
  VAR_4->dst_w += VAR_4->dst_w & 1;
 }


 if (VAR_4->src_h / VAR_4->dst_h >= 2) {


  VAR_4->interlaced_y = 1;

  if ((VAR_6 = VAR_4->src_h - 4 * VAR_4->dst_h) > 0) {

   VAR_4->src_y += VAR_6 / 2;
   VAR_4->src_h = (VAR_4->src_h - VAR_6) & ~3;
   VAR_4->dst_h = VAR_4->src_h / 4;
   VAR_4->dst_h += VAR_4->dst_h & 1;
  }
 }


 if ((int)VAR_4->dst_w <= 2 || (int)VAR_4->dst_h <= 2 ||
     (int)VAR_4->src_w <= 2 || (int)VAR_4->src_h <= 2) {
  return VAR_1;
 }


 VAR_7 = (VAR_4->src_h << 16) / VAR_4->dst_h;

 if ((VAR_6 = VAR_4->pan_y - VAR_4->dst_y) > 0) {

  VAR_4->src_y += (VAR_7 * VAR_6) >> 16;
  VAR_4->src_h -= (VAR_7 * VAR_6) >> 16;
  VAR_4->dst_h -= VAR_6;
  VAR_4->dst_y = 0;
 } else {
  VAR_4->dst_y -= VAR_4->pan_y;
 }

 if ((VAR_6 = VAR_4->dst_h + VAR_4->dst_y - VAR_4->vis_h) > 0) {

  VAR_4->dst_h -= VAR_6;
  VAR_4->src_h -= (VAR_7 * VAR_6) >> 16;
 }

 VAR_7 = (VAR_4->src_w << 16) / VAR_4->dst_w;

 if ((VAR_6 = VAR_4->pan_x - VAR_4->dst_x) > 0) {

  VAR_4->src_x += (VAR_7 * VAR_6) >> 16;
  VAR_4->src_w -= (VAR_7 * VAR_6) >> 16;
  VAR_4->dst_w -= VAR_6;
  VAR_4->dst_x = 0;
 } else {
  VAR_4->dst_x -= VAR_4->pan_x;
 }

 if ((VAR_6 = VAR_4->dst_w + VAR_4->dst_x - VAR_4->vis_w) > 0) {

  VAR_4->dst_w -= VAR_6;
  VAR_4->src_w -= (VAR_7 * VAR_6) >> 16;
 }

 if (VAR_3->yuv_info.track_osd) {

  VAR_4->dst_x += VAR_3->yuv_info.osd_x_offset;
  VAR_4->dst_y += VAR_3->yuv_info.osd_y_offset;
 }



 VAR_4->dst_w &= ~1;
 VAR_4->dst_x &= ~1;

 VAR_4->src_w += VAR_4->src_x & 1;
 VAR_4->src_x &= ~1;

 VAR_4->src_w &= ~1;
 VAR_4->dst_w &= ~1;

 VAR_4->dst_h &= ~1;
 VAR_4->dst_y &= ~1;

 VAR_4->src_h += VAR_4->src_y & 1;
 VAR_4->src_y &= ~1;

 VAR_4->src_h &= ~1;
 VAR_4->dst_h &= ~1;




 if (VAR_4->dst_w < VAR_4->src_w / 4) {
  VAR_4->src_w &= ~3;
  VAR_4->dst_w = VAR_4->src_w / 4;
  VAR_4->dst_w += VAR_4->dst_w & 1;
 }
 if (VAR_4->dst_h < VAR_4->src_h / 4) {
  VAR_4->src_h &= ~3;
  VAR_4->dst_h = VAR_4->src_h / 4;
  VAR_4->dst_h += VAR_4->dst_h & 1;
 }


 if ((int)VAR_4->dst_w <= 2 || (int)VAR_4->dst_h <= 2 ||
     (int)VAR_4->src_w <= 2 || (int)VAR_4->src_h <= 2) {
  return VAR_1;
 }


 if ((VAR_5->dst_w != VAR_4->dst_w) || (VAR_5->src_w != VAR_4->src_w) ||
     (VAR_5->dst_x != VAR_4->dst_x) || (VAR_5->src_x != VAR_4->src_x) ||
     (VAR_5->pan_x != VAR_4->pan_x) || (VAR_5->vis_w != VAR_4->vis_w)) {
  VAR_8 |= VAR_0;
 }

 if ((VAR_5->src_h != VAR_4->src_h) || (VAR_5->dst_h != VAR_4->dst_h) ||
     (VAR_5->dst_y != VAR_4->dst_y) || (VAR_5->src_y != VAR_4->src_y) ||
     (VAR_5->pan_y != VAR_4->pan_y) || (VAR_5->vis_h != VAR_4->vis_h) ||
     (VAR_5->lace_mode != VAR_4->lace_mode) ||
     (VAR_5->interlaced_y != VAR_4->interlaced_y) ||
     (VAR_5->interlaced_uv != VAR_4->interlaced_uv)) {
  VAR_8 |= VAR_2;
 }

 return VAR_8;
}
