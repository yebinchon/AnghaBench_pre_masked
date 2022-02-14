
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct pcmcia_device {struct ata_pcmcia_info* priv; struct device dev; } ;
struct ata_pcmcia_info {scalar_t__ ndev; } ;
struct ata_host {int dummy; } ;


 int FUNC_0 (struct ata_host*) ;
 struct ata_host* FUNC_1 (struct device*) ;
 int FUNC_2 (struct ata_pcmcia_info*) ;
 int FUNC_3 (struct pcmcia_device*) ;

__attribute__((used)) static void FUNC_4(struct pcmcia_device *VAR_0)
{
 struct ata_pcmcia_info *VAR_1 = VAR_0->priv;
 struct device *VAR_2 = &VAR_0->dev;

 if (VAR_1 != ((void*)0)) {

  if (VAR_1->ndev) {
   struct ata_host *VAR_3 = FUNC_1(VAR_2);
   FUNC_0(VAR_3);
  }
  VAR_1->ndev = 0;
  VAR_0->priv = ((void*)0);
 }
 FUNC_3(VAR_0);
 FUNC_2(VAR_1);
}
