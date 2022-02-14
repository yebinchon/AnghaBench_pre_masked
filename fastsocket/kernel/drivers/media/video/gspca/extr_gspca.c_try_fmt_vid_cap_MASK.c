
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int width; int height; int pixelformat; } ;
struct TYPE_5__ {TYPE_3__ pix; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct TYPE_6__ {TYPE_4__* cam_mode; } ;
struct gspca_dev {TYPE_2__ cam; } ;
struct TYPE_8__ {int pixelformat; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int,int) ;
 int VAR_1 ;
 int FUNC_1 (struct gspca_dev*,int,int ) ;
 int FUNC_2 (TYPE_3__*,TYPE_4__*,int) ;
 int FUNC_3 (struct gspca_dev*,int,int) ;

__attribute__((used)) static int FUNC_4(struct gspca_dev *VAR_2,
   struct v4l2_format *VAR_3)
{
 int VAR_4, VAR_5, VAR_6, VAR_7;

 VAR_4 = VAR_3->fmt.pix.width;
 VAR_5 = VAR_3->fmt.pix.height;






 VAR_6 = FUNC_3(VAR_2, VAR_4, VAR_5);


 if (VAR_2->cam.cam_mode[VAR_6].pixelformat
      != VAR_3->fmt.pix.pixelformat) {


  VAR_7 = FUNC_1(VAR_2, VAR_6,
     VAR_3->fmt.pix.pixelformat);
  if (VAR_7 >= 0)
   VAR_6 = VAR_7;


 }
 FUNC_2(&VAR_3->fmt.pix, &VAR_2->cam.cam_mode[VAR_6],
  sizeof VAR_3->fmt.pix);
 return VAR_6;
}
