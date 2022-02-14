
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_socket {int sock; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,char*,int ) ;
 int FUNC_1 (struct pcmcia_socket*) ;

__attribute__((used)) static void FUNC_2(struct pcmcia_socket *VAR_1)
{
 FUNC_0(VAR_0, &VAR_1->dev,
     "pccard: card ejected from slot %d\n", VAR_1->sock);
 FUNC_1(VAR_1);
}
