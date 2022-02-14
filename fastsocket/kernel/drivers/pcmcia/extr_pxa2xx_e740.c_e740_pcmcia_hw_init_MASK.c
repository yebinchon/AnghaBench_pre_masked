
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct soc_pcmcia_socket {size_t nr; int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int * VAR_2 ;
 int FUNC_1 (struct soc_pcmcia_socket*,int *,int) ;

__attribute__((used)) static int FUNC_2(struct soc_pcmcia_socket *VAR_3)
{
 VAR_3->irq = VAR_3->nr == 0 ? FUNC_0(VAR_0) :
    FUNC_0(VAR_1);

 return FUNC_1(VAR_3, &VAR_2[VAR_3->nr], 1);
}
