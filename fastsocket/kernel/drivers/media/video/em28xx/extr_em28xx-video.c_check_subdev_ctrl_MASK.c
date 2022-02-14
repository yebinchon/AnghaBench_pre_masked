
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_queryctrl {int id; scalar_t__ type; } ;
struct em28xx {int v4l2_dev; } ;
typedef int qc ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct v4l2_queryctrl*,int ,int) ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,int ,int ,struct v4l2_queryctrl*) ;

__attribute__((used)) static int FUNC_2(struct em28xx *VAR_3, int VAR_4)
{
 struct v4l2_queryctrl VAR_5;

 FUNC_0(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.id = VAR_4;


 FUNC_1(&VAR_3->v4l2_dev, 0, VAR_1, VAR_2, &VAR_5);

 if (VAR_5.type)
  return 0;
 else
  return -VAR_0;
}
