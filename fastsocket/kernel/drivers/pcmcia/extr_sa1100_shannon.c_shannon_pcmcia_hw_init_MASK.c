
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct soc_pcmcia_socket {scalar_t__ nr; int irq; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct soc_pcmcia_socket*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct soc_pcmcia_socket *VAR_9)
{

 VAR_1 &= ~(VAR_2 | VAR_3 |
    VAR_4 | VAR_5);
 VAR_0 &= ~(VAR_2 | VAR_3 |
    VAR_4 | VAR_5);

 VAR_9->irq = VAR_9->nr ? VAR_7 : VAR_6;

 return FUNC_1(VAR_9, VAR_8, FUNC_0(VAR_8));
}
