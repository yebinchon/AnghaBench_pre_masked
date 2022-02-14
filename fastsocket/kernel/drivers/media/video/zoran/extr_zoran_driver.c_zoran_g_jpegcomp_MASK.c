
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int jpeg_markers; int COM_len; int COM_data; int APP_len; int APP_data; int APPn; int quality; } ;
struct TYPE_4__ {TYPE_1__ jpg_comp; } ;
struct zoran_fh {TYPE_2__ jpg_settings; struct zoran* zr; } ;
struct zoran {int resource_lock; } ;
struct v4l2_jpegcompression {int jpeg_markers; int COM_len; int COM_data; int APP_len; int APP_data; int APPn; int quality; } ;
struct file {int dummy; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct v4l2_jpegcompression*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_0, void *VAR_1,
     struct v4l2_jpegcompression *VAR_2)
{
 struct zoran_fh *VAR_3 = VAR_1;
 struct zoran *VAR_4 = VAR_3->zr;
 FUNC_1(VAR_2, 0, sizeof(*VAR_2));

 FUNC_2(&VAR_4->resource_lock);

 VAR_2->quality = VAR_3->jpg_settings.jpg_comp.quality;
 VAR_2->APPn = VAR_3->jpg_settings.jpg_comp.APPn;
 FUNC_0(VAR_2->APP_data,
        VAR_3->jpg_settings.jpg_comp.APP_data,
        VAR_3->jpg_settings.jpg_comp.APP_len);
 VAR_2->APP_len = VAR_3->jpg_settings.jpg_comp.APP_len;
 FUNC_0(VAR_2->COM_data,
        VAR_3->jpg_settings.jpg_comp.COM_data,
        VAR_3->jpg_settings.jpg_comp.COM_len);
 VAR_2->COM_len = VAR_3->jpg_settings.jpg_comp.COM_len;
 VAR_2->jpeg_markers =
     VAR_3->jpg_settings.jpg_comp.jpeg_markers;

 FUNC_3(&VAR_4->resource_lock);

 return 0;
}
