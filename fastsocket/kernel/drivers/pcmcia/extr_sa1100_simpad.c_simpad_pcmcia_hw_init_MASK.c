
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct soc_pcmcia_socket {int irq; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int FUNC_2 (struct soc_pcmcia_socket*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct soc_pcmcia_socket *VAR_6)
{

 FUNC_1(VAR_3|VAR_4|VAR_0|VAR_1);

 VAR_6->irq = VAR_2;

 return FUNC_2(VAR_6, VAR_5, FUNC_0(VAR_5));
}
