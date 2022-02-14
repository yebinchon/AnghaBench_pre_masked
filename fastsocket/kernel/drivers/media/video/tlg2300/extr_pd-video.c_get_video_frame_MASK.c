
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_data {int dummy; } ;
struct front_face {int dummy; } ;


 int FUNC_0 (struct front_face*,int*) ;
 int FUNC_1 (struct video_data*,int ) ;

__attribute__((used)) static bool FUNC_2(struct front_face *VAR_0, struct video_data *VAR_1)
{
 int VAR_2 = 0;
 bool VAR_3 = 1;

 VAR_3 = FUNC_0(VAR_0, &VAR_2);
 if (VAR_3 && VAR_2)
  FUNC_1(VAR_1, 0);
 return VAR_3;
}
