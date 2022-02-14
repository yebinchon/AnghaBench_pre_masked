
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_mbus_framefmt {int dummy; } ;
struct cafe_camera {int mbus_code; int pix_format; } ;


 scalar_t__ FUNC_0 (struct cafe_camera*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct cafe_camera*,int ,int ,struct v4l2_mbus_framefmt*) ;
 int FUNC_2 (struct v4l2_mbus_framefmt*,int *,int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(struct cafe_camera *VAR_4)
{
 struct v4l2_mbus_framefmt VAR_5;
 int VAR_6;

 FUNC_2(&VAR_5, &VAR_4->pix_format, VAR_4->mbus_code);
 VAR_6 = FUNC_1(VAR_4, VAR_0, VAR_1, 0);
 if (VAR_6 == 0)
  VAR_6 = FUNC_1(VAR_4, VAR_3, VAR_2, &VAR_5);



 VAR_6 += FUNC_0(VAR_4);
 return VAR_6;
}
