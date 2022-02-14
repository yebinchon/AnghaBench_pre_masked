
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pcmcia_socket {unsigned int functions; int dev; int resource_setup_done; } ;
struct TYPE_3__ {unsigned int nfn; } ;
typedef TYPE_1__ cistpl_longlink_mfc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int *,char*) ;
 int FUNC_1 (struct pcmcia_socket*,int ,int ,TYPE_1__*) ;
 int FUNC_2 (struct pcmcia_socket*,unsigned int*) ;
 int FUNC_3 (struct pcmcia_socket*,unsigned int) ;
 scalar_t__ FUNC_4 (struct pcmcia_socket*) ;

__attribute__((used)) static int FUNC_5(struct pcmcia_socket *VAR_4)
{
 cistpl_longlink_mfc_t VAR_5;
 unsigned int VAR_6, VAR_7, VAR_8;
 int VAR_9 = 0;

 if (!(VAR_4->resource_setup_done)) {
  FUNC_0(3, &VAR_4->dev,
      "no resources available, delaying card_add\n");
  return -VAR_2;
 }

 if (FUNC_4(VAR_4)) {
  FUNC_0(3, &VAR_4->dev, "validating mem resources failed, "
         "delaying card_add\n");
  return -VAR_2;
 }

 VAR_9 = FUNC_2(VAR_4, &VAR_8);
 if (VAR_9 || !VAR_8) {
  FUNC_0(0, &VAR_4->dev, "invalid CIS or invalid resources\n");
  return -VAR_3;
 }

 if (!FUNC_1(VAR_4, VAR_0, VAR_1, &VAR_5))
  VAR_6 = VAR_5.nfn;
 else
  VAR_6 = 1;
 VAR_4->functions = VAR_6;

 for (VAR_7=0; VAR_7 < VAR_6; VAR_7++)
  FUNC_3(VAR_4, VAR_7);

 return (VAR_9);
}
