
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_control {int id; int value; } ;
struct pvr2_hdw {int v4l2_dev; } ;
typedef int ctrl ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct v4l2_control*,int ,int) ;
 int FUNC_1 (int ,char*,char const*,int) ;
 int VAR_2 ;
 int FUNC_2 (int *,int ,int ,int ,struct v4l2_control*) ;

__attribute__((used)) static void FUNC_3(struct pvr2_hdw *VAR_3, int VAR_4,
        const char *VAR_5, int VAR_6)
{
 struct v4l2_control VAR_7;
 FUNC_1(VAR_0, "subdev v4l2 %s=%d", VAR_5, VAR_6);
 FUNC_0(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.id = VAR_4;
 VAR_7.value = VAR_6;
 FUNC_2(&VAR_3->v4l2_dev, 0, VAR_1, VAR_2, &VAR_7);
}
