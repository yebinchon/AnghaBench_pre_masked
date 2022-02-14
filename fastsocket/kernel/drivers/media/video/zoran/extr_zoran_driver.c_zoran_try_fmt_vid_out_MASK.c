
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct zoran_jpg_settings {int TmpDcm; int img_height; int VerDcm; int img_width; int HorDcm; int field_per_buff; int img_x; scalar_t__ odd_even; scalar_t__ decimation; } ;
struct zoran_fh {struct zoran_jpg_settings jpg_settings; struct zoran* zr; } ;
struct zoran {int resource_lock; } ;
struct TYPE_3__ {scalar_t__ pixelformat; int height; int width; int colorspace; scalar_t__ bytesperline; int sizeimage; int field; } ;
struct TYPE_4__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct zoran*,struct zoran_jpg_settings*,int) ;
 int FUNC_3 (struct zoran_jpg_settings*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_9, void *VAR_10,
     struct v4l2_format *VAR_11)
{
 struct zoran_fh *VAR_12 = VAR_10;
 struct zoran *VAR_13 = VAR_12->zr;
 struct zoran_jpg_settings VAR_14;
 int VAR_15 = 0;

 if (VAR_11->fmt.pix.pixelformat != VAR_8)
  return -VAR_2;

 FUNC_0(&VAR_13->resource_lock);
 VAR_14 = VAR_12->jpg_settings;


 if ((VAR_11->fmt.pix.height * 2) > VAR_0)
  VAR_14.TmpDcm = 1;
 else
  VAR_14.TmpDcm = 2;
 VAR_14.decimation = 0;
 if (VAR_11->fmt.pix.height <= VAR_12->jpg_settings.img_height / 2)
  VAR_14.VerDcm = 2;
 else
  VAR_14.VerDcm = 1;
 if (VAR_11->fmt.pix.width <= VAR_12->jpg_settings.img_width / 4)
  VAR_14.HorDcm = 4;
 else if (VAR_11->fmt.pix.width <= VAR_12->jpg_settings.img_width / 2)
  VAR_14.HorDcm = 2;
 else
  VAR_14.HorDcm = 1;
 if (VAR_14.TmpDcm == 1)
  VAR_14.field_per_buff = 2;
 else
  VAR_14.field_per_buff = 1;

 if (VAR_14.HorDcm > 1) {
  VAR_14.img_x = (VAR_1 == 720) ? 8 : 0;
  VAR_14.img_width = (VAR_1 == 720) ? 704 : VAR_1;
 } else {
  VAR_14.img_x = 0;
  VAR_14.img_width = VAR_1;
 }


 VAR_15 = FUNC_2(VAR_13, &VAR_14, 1);
 if (VAR_15)
  goto tryfmt_unlock_and_return;


 VAR_11->fmt.pix.width = VAR_14.img_width / VAR_14.HorDcm;
 VAR_11->fmt.pix.height = VAR_14.img_height * 2 /
  (VAR_14.TmpDcm * VAR_14.VerDcm);
 if (VAR_14.TmpDcm == 1)
  VAR_11->fmt.pix.field = (VAR_12->jpg_settings.odd_even ?
    VAR_6 : VAR_5);
 else
  VAR_11->fmt.pix.field = (VAR_12->jpg_settings.odd_even ?
    VAR_7 : VAR_4);

 VAR_11->fmt.pix.sizeimage = FUNC_3(&VAR_14);
 VAR_11->fmt.pix.bytesperline = 0;
 VAR_11->fmt.pix.colorspace = VAR_3;
tryfmt_unlock_and_return:
 FUNC_1(&VAR_13->resource_lock);
 return VAR_15;
}
