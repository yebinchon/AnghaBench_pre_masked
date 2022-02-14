
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_sliced_vbi_format {int** service_lines; int service_set; } ;


 int FUNC_0 (struct v4l2_sliced_vbi_format*,int ,int) ;
 int FUNC_1 (struct v4l2_subdev*,int ,int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_1, struct v4l2_sliced_vbi_format *VAR_2)
{
 int VAR_3, VAR_4 = 0;

 FUNC_0(VAR_2, 0, sizeof(*VAR_2));

 for (VAR_3 = 0; VAR_3 <= 23; VAR_3++) {
  VAR_2->service_lines[0][VAR_3] =
   FUNC_1(VAR_1, VAR_0, VAR_3);
  VAR_4 |= VAR_2->service_lines[0][VAR_3];
 }
 VAR_2->service_set = VAR_4;
 return 0;
}
