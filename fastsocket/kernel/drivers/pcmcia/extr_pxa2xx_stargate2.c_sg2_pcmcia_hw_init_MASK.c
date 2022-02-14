
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct soc_pcmcia_socket {int irq; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct soc_pcmcia_socket*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct soc_pcmcia_socket *VAR_2)
{
 VAR_2->irq = FUNC_1(VAR_0);
 return FUNC_2(VAR_2, VAR_1, FUNC_0(VAR_1));
}
