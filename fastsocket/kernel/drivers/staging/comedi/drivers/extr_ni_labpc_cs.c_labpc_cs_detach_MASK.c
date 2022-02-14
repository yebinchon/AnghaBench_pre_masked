
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_device {scalar_t__ priv; scalar_t__ dev_node; } ;
struct local_info_t {int stop; } ;


 int FUNC_0 (int ,char*,struct pcmcia_device*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct pcmcia_device*) ;

__attribute__((used)) static void FUNC_3(struct pcmcia_device *VAR_0)
{
 FUNC_0(0, "labpc_cs_detach(0x%p)\n", VAR_0);







 if (VAR_0->dev_node) {
  ((struct local_info_t *)VAR_0->priv)->stop = 1;
  FUNC_2(VAR_0);
 }


 if (VAR_0->priv)
  FUNC_1(VAR_0->priv);

}
