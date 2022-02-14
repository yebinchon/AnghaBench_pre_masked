
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_device {int socket; } ;
struct orinoco_private {struct orinoco_pccard* card; } ;
struct orinoco_pccard {int hard_reset_in_progress; struct pcmcia_device* p_dev; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static int
FUNC_4(struct orinoco_private *VAR_0)
{
 struct orinoco_pccard *VAR_1 = VAR_0->card;
 struct pcmcia_device *VAR_2 = VAR_1->p_dev;
 int VAR_3;


 FUNC_3(0, &VAR_1->hard_reset_in_progress);

 VAR_3 = FUNC_2(VAR_2->socket);
 if (VAR_3)
  return VAR_3;

 FUNC_1(100);
 FUNC_0(0, &VAR_1->hard_reset_in_progress);

 return 0;
}
