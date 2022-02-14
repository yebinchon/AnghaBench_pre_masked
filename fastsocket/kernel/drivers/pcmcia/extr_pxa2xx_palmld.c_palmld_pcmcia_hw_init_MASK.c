
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct soc_pcmcia_socket {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int FUNC_5(struct soc_pcmcia_socket *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_4(VAR_0, "PCMCIA PWR");
 if (VAR_4)
  goto err1;
 VAR_4 = FUNC_2(VAR_0, 0);
 if (VAR_4)
  goto err2;

 VAR_4 = FUNC_4(VAR_2, "PCMCIA RST");
 if (VAR_4)
  goto err2;
 VAR_4 = FUNC_2(VAR_2, 1);
 if (VAR_4)
  goto err3;

 VAR_4 = FUNC_4(VAR_1, "PCMCIA RDY");
 if (VAR_4)
  goto err3;
 VAR_4 = FUNC_1(VAR_1);
 if (VAR_4)
  goto err4;

 VAR_3->irq = FUNC_0(VAR_1);
 return 0;

err4:
 FUNC_3(VAR_1);
err3:
 FUNC_3(VAR_2);
err2:
 FUNC_3(VAR_0);
err1:
 return VAR_4;
}
