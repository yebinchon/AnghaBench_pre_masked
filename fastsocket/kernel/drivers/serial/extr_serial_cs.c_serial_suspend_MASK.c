
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serial_info {int ndev; int * line; } ;
struct pcmcia_device {struct serial_info* priv; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct pcmcia_device *VAR_0)
{
 struct serial_info *VAR_1 = VAR_0->priv;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->ndev; VAR_2++)
  FUNC_0(VAR_1->line[VAR_2]);

 return 0;
}
