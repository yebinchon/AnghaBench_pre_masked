
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmciamtd_dev {int * win_base; } ;
struct pcmcia_device {scalar_t__ win; struct pcmciamtd_dev* priv; } ;


 int FUNC_0 (int,char*,struct pcmcia_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct pcmcia_device*) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct pcmcia_device *VAR_0)
{
 struct pcmciamtd_dev *VAR_1 = VAR_0->priv;

 FUNC_0(3, "link = 0x%p", VAR_0);

 if (VAR_0->win) {
  if(VAR_1->win_base) {
   FUNC_1(VAR_1->win_base);
   VAR_1->win_base = ((void*)0);
  }
  FUNC_3(VAR_0->win);
 }
 FUNC_2(VAR_0);
}
