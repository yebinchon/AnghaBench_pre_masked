
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_device {scalar_t__ dev_node; struct local_info_t* priv; } ;
struct local_info_t {int stop; size_t table_index; } ;


 int FUNC_0 (int ,char*,struct pcmcia_device*) ;
 int FUNC_1 (struct pcmcia_device*) ;
 int ** VAR_0 ;
 int FUNC_2 (struct local_info_t*) ;

__attribute__((used)) static void FUNC_3(struct pcmcia_device *VAR_1)
{
 struct local_info_t *VAR_2 = VAR_1->priv;

 FUNC_0(0, "daqp_cs_detach(0x%p)\n", VAR_1);

 if (VAR_1->dev_node) {
  VAR_2->stop = 1;
  FUNC_1(VAR_1);
 }


 VAR_0[VAR_2->table_index] = ((void*)0);
 if (VAR_2)
  FUNC_2(VAR_2);

}
