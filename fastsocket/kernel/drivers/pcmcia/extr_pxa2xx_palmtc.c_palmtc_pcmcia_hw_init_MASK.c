
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct soc_pcmcia_socket {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int FUNC_5(struct soc_pcmcia_socket *VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_4(VAR_0, "PCMCIA PWR1");
 if (VAR_7)
  goto err1;
 VAR_7 = FUNC_2(VAR_0, 0);
 if (VAR_7)
  goto err2;

 VAR_7 = FUNC_4(VAR_1, "PCMCIA PWR2");
 if (VAR_7)
  goto err2;
 VAR_7 = FUNC_2(VAR_1, 0);
 if (VAR_7)
  goto err3;

 VAR_7 = FUNC_4(VAR_2, "PCMCIA PWR3");
 if (VAR_7)
  goto err3;
 VAR_7 = FUNC_2(VAR_2, 0);
 if (VAR_7)
  goto err4;

 VAR_7 = FUNC_4(VAR_5, "PCMCIA RST");
 if (VAR_7)
  goto err4;
 VAR_7 = FUNC_2(VAR_5, 1);
 if (VAR_7)
  goto err5;

 VAR_7 = FUNC_4(VAR_4, "PCMCIA RDY");
 if (VAR_7)
  goto err5;
 VAR_7 = FUNC_1(VAR_4);
 if (VAR_7)
  goto err6;

 VAR_7 = FUNC_4(VAR_3, "PCMCIA PWRRDY");
 if (VAR_7)
  goto err6;
 VAR_7 = FUNC_1(VAR_3);
 if (VAR_7)
  goto err7;

 VAR_6->irq = FUNC_0(VAR_4);
 return 0;

err7:
 FUNC_3(VAR_3);
err6:
 FUNC_3(VAR_4);
err5:
 FUNC_3(VAR_5);
err4:
 FUNC_3(VAR_2);
err3:
 FUNC_3(VAR_1);
err2:
 FUNC_3(VAR_0);
err1:
 return VAR_7;
}
