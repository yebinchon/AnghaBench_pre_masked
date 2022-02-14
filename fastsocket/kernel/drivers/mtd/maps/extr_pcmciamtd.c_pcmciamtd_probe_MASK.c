
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcmciamtd_dev {struct pcmcia_device* p_dev; } ;
struct TYPE_2__ {int IntType; scalar_t__ Attributes; } ;
struct pcmcia_device {TYPE_1__ conf; struct pcmciamtd_dev* priv; } ;


 int FUNC_0 (int,char*,struct pcmciamtd_dev*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct pcmciamtd_dev* FUNC_1 (int,int ) ;
 int FUNC_2 (struct pcmcia_device*) ;

__attribute__((used)) static int FUNC_3(struct pcmcia_device *VAR_3)
{
 struct pcmciamtd_dev *VAR_4;


 VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_1);
 if (!VAR_4) return -VAR_0;
 FUNC_0(1, "dev=0x%p", VAR_4);

 VAR_4->p_dev = VAR_3;
 VAR_3->priv = VAR_4;

 VAR_3->conf.Attributes = 0;
 VAR_3->conf.IntType = VAR_2;

 return FUNC_2(VAR_3);
}
