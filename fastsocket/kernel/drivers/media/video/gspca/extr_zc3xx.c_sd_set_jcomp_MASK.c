
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_jpegcompression {scalar_t__ quality; } ;
struct sd {scalar_t__ quality; int jpeg_hdr; } ;
struct gspca_dev {int usb_err; scalar_t__ streaming; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct gspca_dev *VAR_2,
   struct v4l2_jpegcompression *VAR_3)
{
 struct sd *VAR_4 = (struct sd *) VAR_2;

 if (VAR_3->quality < VAR_1)
  VAR_4->quality = VAR_1;
 else if (VAR_3->quality > VAR_0)
  VAR_4->quality = VAR_0;
 else
  VAR_4->quality = VAR_3->quality;
 if (VAR_2->streaming)
  FUNC_0(VAR_4->jpeg_hdr, VAR_4->quality);
 return VAR_2->usb_err;
}
