
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int v4l2_std_id ;
struct v4l2_queryctrl {int id; } ;
struct v4l2_control {int id; } ;
struct saa7134_go7007 {struct saa7134_dev* dev; } ;
struct saa7134_dev {TYPE_1__* tvnorm; } ;
struct go7007 {struct saa7134_go7007* hpi_context; } ;
struct TYPE_2__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;





 int FUNC_1 (struct saa7134_dev*,int *,struct v4l2_control*) ;
 int FUNC_2 (int *,int *,struct v4l2_queryctrl*) ;
 int FUNC_3 (struct saa7134_dev*,int *,struct v4l2_control*) ;
 int FUNC_4 (struct saa7134_dev*,int *,int *) ;

__attribute__((used)) static int FUNC_5(struct go7007 *VAR_2, unsigned int VAR_3,
     void *VAR_4)
{
 struct saa7134_go7007 *VAR_5 = VAR_2->hpi_context;
 struct saa7134_dev *VAR_6 = VAR_5->dev;

 switch (VAR_3) {
 case 128:
 {
  v4l2_std_id *VAR_7 = VAR_4;
  return FUNC_4(VAR_6, ((void*)0), VAR_7);
 }
 case 131:
 {
  v4l2_std_id *VAR_8 = VAR_4;
  *VAR_8 = VAR_6->tvnorm->id;
  return 0;
 }
 case 130:
 {
  struct v4l2_queryctrl *VAR_9 = VAR_4;
  if (FUNC_0(VAR_9->id) == VAR_1)
   return FUNC_2(((void*)0), ((void*)0), VAR_9);
 }
 case 132:
 {
  struct v4l2_control *VAR_10 = VAR_4;
  if (FUNC_0(VAR_10->id) == VAR_1)
   return FUNC_1(VAR_6, ((void*)0), VAR_10);
 }
 case 129:
 {
  struct v4l2_control *VAR_11 = VAR_4;
  if (FUNC_0(VAR_11->id) == VAR_1)
   return FUNC_3(VAR_6, ((void*)0), VAR_11);
 }
 }
 return -VAR_0;

}
