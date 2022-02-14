
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int kobj; int groups; int * release; int * bus; int * parent; } ;
struct TYPE_4__ {int sch_no; int ssid; } ;
struct subchannel {TYPE_2__ dev; int driver; TYPE_1__ schid; } ;
struct TYPE_6__ {int device; } ;


 int FUNC_0 (int ,char*,int ,int ,int) ;
 int VAR_0 ;
 TYPE_3__** VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct subchannel*) ;
 int VAR_3 ;
 int FUNC_2 (struct subchannel*) ;
 int VAR_4 ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static int FUNC_5(struct subchannel *VAR_5)
{
 int VAR_6;


 VAR_5->dev.parent = &VAR_1[0]->device;
 VAR_5->dev.bus = &VAR_2;
 VAR_5->dev.release = &VAR_3;
 VAR_5->dev.groups = VAR_4;
 FUNC_3(&VAR_5->dev, 1);
 FUNC_2(VAR_5);

 VAR_6 = FUNC_1(VAR_5);
 if (VAR_6) {
  FUNC_0(0, "Could not register sch 0.%x.%04x: %d\n",
         VAR_5->schid.ssid, VAR_5->schid.sch_no, VAR_6);
  return VAR_6;
 }
 if (!VAR_5->driver) {





  FUNC_3(&VAR_5->dev, 0);
  FUNC_4(&VAR_5->dev.kobj, VAR_0);
 }
 return VAR_6;
}
