
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct soc_pcmcia_socket {scalar_t__ irq; scalar_t__ nr; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct soc_pcmcia_socket*,int ,int ) ;

int FUNC_2(struct soc_pcmcia_socket *VAR_4)
{
 if (VAR_4->irq == VAR_2)
  VAR_4->irq = VAR_4->nr ? VAR_1 : VAR_0;

 return FUNC_1(VAR_4, VAR_3, FUNC_0(VAR_3));
}
