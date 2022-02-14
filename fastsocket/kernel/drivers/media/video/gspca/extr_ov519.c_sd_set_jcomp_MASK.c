
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_jpegcompression {scalar_t__ quality; } ;
struct sd {scalar_t__ bridge; scalar_t__ quality; } ;
struct gspca_dev {scalar_t__ streaming; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct gspca_dev*,struct v4l2_jpegcompression*) ;

__attribute__((used)) static int FUNC_1(struct gspca_dev *VAR_5,
   struct v4l2_jpegcompression *VAR_6)
{
 struct sd *VAR_7 = (struct sd *) VAR_5;

 if (VAR_7->bridge != VAR_0)
  return -VAR_2;

 if (VAR_5->streaming)
  return -VAR_1;

 if (VAR_6->quality < VAR_4)
  VAR_7->quality = VAR_4;
 else if (VAR_6->quality > VAR_3)
  VAR_7->quality = VAR_3;
 else
  VAR_7->quality = VAR_6->quality;


 FUNC_0(VAR_5, VAR_6);

 return 0;
}
