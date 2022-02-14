
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int img_width; int HorDcm; int img_height; int VerDcm; int TmpDcm; scalar_t__ odd_even; } ;
struct zoran_fh {TYPE_3__ jpg_settings; struct zoran* zr; } ;
struct zoran {int resource_lock; } ;
struct TYPE_4__ {int width; int height; int colorspace; scalar_t__ bytesperline; int field; int pixelformat; int sizeimage; } ;
struct TYPE_5__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_6, void *VAR_7,
     struct v4l2_format *VAR_8)
{
 struct zoran_fh *VAR_9 = VAR_7;
 struct zoran *VAR_10 = VAR_9->zr;

 FUNC_0(&VAR_10->resource_lock);

 VAR_8->fmt.pix.width = VAR_9->jpg_settings.img_width / VAR_9->jpg_settings.HorDcm;
 VAR_8->fmt.pix.height = VAR_9->jpg_settings.img_height * 2 /
  (VAR_9->jpg_settings.VerDcm * VAR_9->jpg_settings.TmpDcm);
 VAR_8->fmt.pix.sizeimage = FUNC_2(&VAR_9->jpg_settings);
 VAR_8->fmt.pix.pixelformat = VAR_5;
 if (VAR_9->jpg_settings.TmpDcm == 1)
  VAR_8->fmt.pix.field = (VAR_9->jpg_settings.odd_even ?
    VAR_3 : VAR_2);
 else
  VAR_8->fmt.pix.field = (VAR_9->jpg_settings.odd_even ?
    VAR_4 : VAR_1);
 VAR_8->fmt.pix.bytesperline = 0;
 VAR_8->fmt.pix.colorspace = VAR_0;

 FUNC_1(&VAR_10->resource_lock);
 return 0;
}
