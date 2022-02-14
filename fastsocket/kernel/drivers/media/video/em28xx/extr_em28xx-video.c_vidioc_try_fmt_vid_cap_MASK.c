
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned int width; unsigned int height; int bytesperline; unsigned int sizeimage; int field; int colorspace; int pixelformat; } ;
struct TYPE_6__ {TYPE_2__ pix; } ;
struct v4l2_format {TYPE_3__ fmt; } ;
struct file {int dummy; } ;
struct em28xx_fmt {int depth; int fourcc; } ;
struct em28xx_fh {struct em28xx* dev; } ;
struct TYPE_4__ {scalar_t__ is_em2800; } ;
struct em28xx {int width; scalar_t__ interlaced; scalar_t__ progressive; TYPE_1__ board; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int ) ;
 struct em28xx_fmt* FUNC_1 (int ) ;
 int FUNC_2 (struct em28xx*,unsigned int,unsigned int,unsigned int*,unsigned int*) ;
 unsigned int FUNC_3 (struct em28xx*) ;
 unsigned int FUNC_4 (struct em28xx*) ;
 int FUNC_5 (unsigned int*,int,unsigned int,int,unsigned int*,int,unsigned int,int,int ) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_5, void *VAR_6,
   struct v4l2_format *VAR_7)
{
 struct em28xx_fh *VAR_8 = VAR_6;
 struct em28xx *VAR_9 = VAR_8->dev;
 unsigned int VAR_10 = VAR_7->fmt.pix.width;
 unsigned int VAR_11 = VAR_7->fmt.pix.height;
 unsigned int VAR_12 = FUNC_4(VAR_9);
 unsigned int VAR_13 = FUNC_3(VAR_9);
 unsigned int VAR_14, VAR_15;
 struct em28xx_fmt *VAR_16;

 VAR_16 = FUNC_1(VAR_7->fmt.pix.pixelformat);
 if (!VAR_16) {
  FUNC_0("Fourcc format (%08x) invalid.\n",
    VAR_7->fmt.pix.pixelformat);
  return -VAR_0;
 }

 if (VAR_9->board.is_em2800) {

  VAR_11 = VAR_11 > (3 * VAR_13 / 4) ? VAR_13 : VAR_13 / 2;
  VAR_10 = VAR_10 > (3 * VAR_12 / 4) ? VAR_12 : VAR_12 / 2;
 } else {


  FUNC_5(&VAR_10, 48, VAR_12, 1, &VAR_11, 32, VAR_13,
          1, 0);
 }

 FUNC_2(VAR_9, VAR_10, VAR_11, &VAR_14, &VAR_15);

 VAR_10 = (((unsigned long)VAR_12) << 12) / (VAR_14 + 4096L);
 VAR_11 = (((unsigned long)VAR_13) << 12) / (VAR_15 + 4096L);

 VAR_7->fmt.pix.width = VAR_10;
 VAR_7->fmt.pix.height = VAR_11;
 VAR_7->fmt.pix.pixelformat = VAR_16->fourcc;
 VAR_7->fmt.pix.bytesperline = (VAR_9->width * VAR_16->depth + 7) >> 3;
 VAR_7->fmt.pix.sizeimage = VAR_7->fmt.pix.bytesperline * VAR_11;
 VAR_7->fmt.pix.colorspace = VAR_1;
 if (VAR_9->progressive)
  VAR_7->fmt.pix.field = VAR_3;
 else
  VAR_7->fmt.pix.field = VAR_9->interlaced ?
      VAR_2 : VAR_4;

 return 0;
}
