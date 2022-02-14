
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct soc_pcmcia_socket {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct soc_pcmcia_socket *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_3(VAR_0, "PCMCIA PWR1");
 if (VAR_5)
  goto err1;
 VAR_5 = FUNC_1(VAR_0, 0);
 if (VAR_5)
  goto err2;

 VAR_5 = FUNC_3(VAR_1, "PCMCIA PWR2");
 if (VAR_5)
  goto err2;
 VAR_5 = FUNC_1(VAR_1, 0);
 if (VAR_5)
  goto err3;

 VAR_5 = FUNC_3(VAR_3, "PCMCIA RST");
 if (VAR_5)
  goto err3;
 VAR_5 = FUNC_1(VAR_3, 1);
 if (VAR_5)
  goto err4;

 VAR_5 = FUNC_3(VAR_2, "PCMCIA RDY");
 if (VAR_5)
  goto err4;
 VAR_5 = FUNC_0(VAR_2);
 if (VAR_5)
  goto err5;

 VAR_4->irq = FUNC_4(VAR_2);
 return 0;

err5:
 FUNC_2(VAR_2);
err4:
 FUNC_2(VAR_3);
err3:
 FUNC_2(VAR_1);
err2:
 FUNC_2(VAR_0);
err1:
 return VAR_5;
}
