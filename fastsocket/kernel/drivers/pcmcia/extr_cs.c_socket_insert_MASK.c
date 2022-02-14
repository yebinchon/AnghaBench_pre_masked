
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_socket {int state; int sock; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct pcmcia_socket*) ;
 int FUNC_1 (struct pcmcia_socket*,int,char*) ;
 int FUNC_2 (struct pcmcia_socket*) ;
 int FUNC_3 (int ,int *,char*,char*,int ) ;
 int FUNC_4 (struct pcmcia_socket*,int ,int ) ;
 int VAR_7 ;
 int FUNC_5 (struct pcmcia_socket*,int ) ;
 int FUNC_6 (struct pcmcia_socket*) ;

__attribute__((used)) static int FUNC_7(struct pcmcia_socket *VAR_8)
{
 int VAR_9;

 FUNC_1(VAR_8, 4, "insert\n");

 if (!FUNC_2(VAR_8))
  return -VAR_2;

 VAR_9 = FUNC_5(VAR_8, VAR_7);
 if (VAR_9 == 0) {
  VAR_8->state |= VAR_6;

  FUNC_3(VAR_3, &VAR_8->dev,
      "pccard: %s card inserted into slot %d\n",
      (VAR_8->state & VAR_4) ? "CardBus" : "PCMCIA",
      VAR_8->sock);







  FUNC_1(VAR_8, 4, "insert done\n");

  FUNC_4(VAR_8, VAR_0, VAR_1);
 } else {
  FUNC_6(VAR_8);
 }

 return VAR_9;
}
