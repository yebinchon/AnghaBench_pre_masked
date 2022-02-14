
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct soc_pcmcia_socket {int irq; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int VAR_2 ;
 int FUNC_4 (struct soc_pcmcia_socket*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct soc_pcmcia_socket *VAR_3)
{
 int VAR_4 = FUNC_3(VAR_0, "PCCard reset");
 if (VAR_4)
  return VAR_4;
 FUNC_1(VAR_0, 0);

 VAR_3->irq = VAR_1;
 VAR_4 = FUNC_4(VAR_3, VAR_2, FUNC_0(VAR_2));
 if (!VAR_4)
  FUNC_2(VAR_0);

 return VAR_4;
}
