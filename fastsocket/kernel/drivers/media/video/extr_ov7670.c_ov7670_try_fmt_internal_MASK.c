
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_framefmt {scalar_t__ code; scalar_t__ width; scalar_t__ height; int colorspace; int field; } ;
struct ov7670_win_size {scalar_t__ width; scalar_t__ height; } ;
struct ov7670_format_struct {scalar_t__ mbus_code; int colorspace; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ov7670_format_struct* VAR_3 ;
 struct ov7670_win_size* VAR_4 ;

__attribute__((used)) static int FUNC_0(struct v4l2_subdev *VAR_5,
  struct v4l2_mbus_framefmt *VAR_6,
  struct ov7670_format_struct **VAR_7,
  struct ov7670_win_size **VAR_8)
{
 int VAR_9;
 struct ov7670_win_size *VAR_10;

 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++)
  if (VAR_3[VAR_9].mbus_code == VAR_6->code)
   break;
 if (VAR_9 >= VAR_0) {

  VAR_9 = 0;
  VAR_6->code = VAR_3[0].mbus_code;
 }
 if (VAR_7 != ((void*)0))
  *VAR_7 = VAR_3 + VAR_9;



 VAR_6->field = VAR_2;




 for (VAR_10 = VAR_4; VAR_10 < VAR_4 + VAR_1;
      VAR_10++)
  if (VAR_6->width >= VAR_10->width && VAR_6->height >= VAR_10->height)
   break;
 if (VAR_10 >= VAR_4 + VAR_1)
  VAR_10--;
 if (VAR_8 != ((void*)0))
  *VAR_8 = VAR_10;



 VAR_6->width = VAR_10->width;
 VAR_6->height = VAR_10->height;
 VAR_6->colorspace = VAR_3[VAR_9].colorspace;
 return 0;
}
