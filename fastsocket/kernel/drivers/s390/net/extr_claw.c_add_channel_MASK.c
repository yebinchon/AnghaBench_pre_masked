
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irb {int dummy; } ;
struct claw_privbk {struct chbk* channel; } ;
struct chbk {int flag; int * irb; int devno; int id; struct ccw_device* cdev; } ;
struct ccw_device {int dev; } ;
struct ccw_dev_id {int devno; } ;


 int FUNC_0 (int,int ,char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ccw_device*,struct ccw_dev_id*) ;
 char* FUNC_2 (int *) ;
 int * FUNC_3 (int,int ) ;
 int VAR_3 ;
 int FUNC_4 (int ,int ,char*,char*) ;

__attribute__((used)) static int
FUNC_5(struct ccw_device *VAR_4,int VAR_5,struct claw_privbk *VAR_6)
{
 struct chbk *VAR_7;
 struct ccw_dev_id VAR_8;

 FUNC_0(2, VAR_3, "%s", FUNC_2(&VAR_4->dev));
 VAR_6->channel[VAR_5].flag = VAR_5+1;
 VAR_7 = &VAR_6->channel[VAR_5];
 VAR_7->cdev = VAR_4;
 FUNC_4(VAR_7->id, VAR_0, "cl-%s", FUNC_2(&VAR_4->dev));
 FUNC_1(VAR_4, &VAR_8);
 VAR_7->devno = VAR_8.devno;
 if ((VAR_7->irb = FUNC_3(sizeof (struct irb),VAR_2)) == ((void*)0)) {
  return -VAR_1;
 }
 return 0;
}
