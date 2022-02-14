
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_device {int * priv; } ;
typedef int btuart_info_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct pcmcia_device*) ;

__attribute__((used)) static void FUNC_2(struct pcmcia_device *VAR_0)
{
 btuart_info_t *VAR_1 = VAR_0->priv;

 FUNC_0(VAR_1);

 FUNC_1(VAR_0);
}
