
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct hubdev_info {int dummy; } ;
struct TYPE_7__ {int release; int * bus; int * parent; } ;
struct TYPE_6__ {int part_num; int mfg_num; int nasid; } ;
struct cx_dev {int bt; TYPE_2__ dev; TYPE_1__ cx_id; struct hubdev_info* hubdev; } ;
typedef int nasid_t ;


 int FUNC_0 (char*,struct cx_dev*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,char*,int ) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 struct cx_dev* FUNC_5 (int,int ) ;
 int VAR_3 ;
 int VAR_4 ;

int
FUNC_6(nasid_t VAR_5, int VAR_6, int VAR_7,
     struct hubdev_info *VAR_8, int VAR_9)
{
 struct cx_dev *VAR_10;

 VAR_10 = FUNC_5(sizeof(struct cx_dev), VAR_1);
 FUNC_0("cx_dev= 0x%p\n", VAR_10);
 if (VAR_10 == ((void*)0))
  return -VAR_0;

 VAR_10->cx_id.part_num = VAR_6;
 VAR_10->cx_id.mfg_num = VAR_7;
 VAR_10->cx_id.nasid = VAR_5;
 VAR_10->hubdev = VAR_8;
 VAR_10->bt = VAR_9;

 VAR_10->dev.parent = ((void*)0);
 VAR_10->dev.bus = &VAR_4;
 VAR_10->dev.release = VAR_3;
 FUNC_1(&VAR_10->dev, "%d", VAR_10->cx_id.nasid);
 FUNC_3(&VAR_10->dev);
 FUNC_4(&VAR_10->dev);

 FUNC_2(&VAR_10->dev, &VAR_2);

 return 0;
}
