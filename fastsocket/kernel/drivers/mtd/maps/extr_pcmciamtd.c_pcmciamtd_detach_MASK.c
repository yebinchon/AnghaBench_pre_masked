
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pcmciamtd_dev {TYPE_1__* mtd_info; } ;
struct pcmcia_device {struct pcmciamtd_dev* priv; } ;
struct TYPE_3__ {int index; } ;


 int FUNC_0 (int,char*,struct pcmcia_device*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct pcmcia_device*) ;

__attribute__((used)) static void FUNC_5(struct pcmcia_device *VAR_0)
{
 struct pcmciamtd_dev *VAR_1 = VAR_0->priv;

 FUNC_0(3, "link=0x%p", VAR_0);

 if(VAR_1->mtd_info) {
  FUNC_1(VAR_1->mtd_info);
  FUNC_3(VAR_1->mtd_info);
  FUNC_2("mtd%d: Removed", VAR_1->mtd_info->index);
 }

 FUNC_4(VAR_0);
}
