
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_device {struct ipw_dev* priv; } ;
struct ipw_dev {int * hardware; int * network; int * tty; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ipw_dev*) ;
 int FUNC_4 (struct ipw_dev*) ;

__attribute__((used)) static void FUNC_5(struct pcmcia_device *VAR_0)
{
 struct ipw_dev *VAR_1 = VAR_0->priv;

 FUNC_4(VAR_1);

 if (VAR_1->tty != ((void*)0))
  FUNC_2(VAR_1->tty);
 if (VAR_1->network != ((void*)0))
  FUNC_1(VAR_1->network);
 if (VAR_1->hardware != ((void*)0))
  FUNC_0(VAR_1->hardware);
 FUNC_3(VAR_1);
}
