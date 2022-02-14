
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int release; int * bus; int * parent; } ;
struct bttv_sub_device {int list; TYPE_2__ dev; struct bttv_core* core; } ;
struct bttv_core {int subs; int nr; TYPE_1__* pci; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,char*,char*,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct bttv_sub_device*) ;
 struct bttv_sub_device* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (char*,int ,int ) ;
 int VAR_3 ;

int FUNC_7(struct bttv_core *VAR_4, char *VAR_5)
{
 struct bttv_sub_device *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_4(sizeof(*VAR_6),VAR_1);
 if (((void*)0) == VAR_6)
  return -VAR_0;

 VAR_6->core = VAR_4;
 VAR_6->dev.parent = &VAR_4->pci->dev;
 VAR_6->dev.bus = &VAR_2;
 VAR_6->dev.release = VAR_3;
 FUNC_1(&VAR_6->dev, "%s%d", VAR_5, VAR_4->nr);

 VAR_7 = FUNC_2(&VAR_6->dev);
 if (0 != VAR_7) {
  FUNC_3(VAR_6);
  return VAR_7;
 }
 FUNC_6("bttv%d: add subdevice \"%s\"\n", VAR_4->nr, FUNC_0(&VAR_6->dev));
 FUNC_5(&VAR_6->list,&VAR_4->subs);
 return 0;
}
