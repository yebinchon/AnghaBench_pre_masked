
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct saa7146_vv {scalar_t__ vflip; int last_field; TYPE_2__* standard; } ;
struct saa7146_video_dma {int pitch; int base_page; scalar_t__ prot_addr; scalar_t__ base_even; scalar_t__ base_odd; scalar_t__ num_line_byte; } ;
struct saa7146_format {int depth; int swap; } ;
struct saa7146_dev {struct saa7146_vv* vv_data; } ;
struct saa7146_buf {TYPE_3__* pt; TYPE_1__* fmt; } ;
typedef enum v4l2_field { ____Placeholder_v4l2_field } v4l2_field ;
struct TYPE_6__ {int dma; scalar_t__ offset; } ;
struct TYPE_5__ {int v_field; scalar_t__ h_pixels; } ;
struct TYPE_4__ {int width; int height; int bytesperline; int field; int pixelformat; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_3 ;
 struct saa7146_format* FUNC_2 (struct saa7146_dev*,int ) ;
 int FUNC_3 (struct saa7146_dev*,int,struct saa7146_video_dma*) ;
 int * VAR_4 ;

__attribute__((used)) static int FUNC_4(struct saa7146_dev* VAR_5, struct saa7146_buf *VAR_6)
{
 struct saa7146_vv *VAR_7 = VAR_5->vv_data;
 struct saa7146_video_dma VAR_8;

 struct saa7146_format *VAR_9 = FUNC_2(VAR_5,VAR_6->fmt->pixelformat);

 int VAR_10 = VAR_6->fmt->width;
 int VAR_11 = VAR_6->fmt->height;
 int VAR_12 = VAR_6->fmt->bytesperline;
 enum v4l2_field VAR_13 = VAR_6->fmt->field;

 int VAR_14 = VAR_9->depth;

 FUNC_0(("[size=%dx%d,fields=%s]\n",
  VAR_10,VAR_11,VAR_4[VAR_13]));

 if( VAR_12 != 0) {
  VAR_8 = VAR_12*2;
 } else {
  VAR_8 = (VAR_10*VAR_14*2)/8;
 }
 VAR_8 = ((VAR_7->standard->v_field<<16) + VAR_7->standard->h_pixels);
 VAR_8 = VAR_6->pt[0].dma | VAR_0 | VAR_9->swap;

 if( 0 != VAR_7->vflip ) {
  VAR_8 = VAR_6->pt[0].offset;
  VAR_8 = VAR_6->pt[0].offset+(VAR_8/2)*VAR_11;
  VAR_8 = VAR_8 - (VAR_8/2);
 } else {
  VAR_8 = VAR_6->pt[0].offset;
  VAR_8 = VAR_8 + (VAR_8/2);
  VAR_8 = VAR_6->pt[0].offset+(VAR_8/2)*VAR_11;
 }

 if (FUNC_1(VAR_13)) {
 } else if (VAR_13 == VAR_1) {

  if ( VAR_7->last_field == VAR_3 ) {
   VAR_8 = VAR_8;
   VAR_8 /= 2;
  } else if ( VAR_7->last_field == VAR_2 ) {
   VAR_8 = VAR_8;
   VAR_8 = VAR_8;
   VAR_8 /= 2;
  }
 } else if (VAR_13 == VAR_3) {
  VAR_8 = VAR_8;
  VAR_8 /= 2;
 } else if (VAR_13 == VAR_2) {
  VAR_8 = VAR_8;
  VAR_8 = VAR_8;
  VAR_8 /= 2;
 }

 if( 0 != VAR_7->vflip ) {
  VAR_8 *= -1;
 }

 FUNC_3(VAR_5, 1, &VAR_8);
 return 0;
}
