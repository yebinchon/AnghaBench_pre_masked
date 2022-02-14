
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct soc_pcmcia_socket {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (struct soc_pcmcia_socket*,int,char*,int) ;
 int FUNC_1 (struct soc_pcmcia_socket*) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_1, void *VAR_2)
{
 struct soc_pcmcia_socket *VAR_3 = VAR_2;

 FUNC_0(VAR_3, 3, "servicing IRQ %d\n", VAR_1);

 FUNC_1(VAR_3);

 return VAR_0;
}
