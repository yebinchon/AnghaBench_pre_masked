
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r8180_priv {struct pci_dev* pdev; } ;
struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;
struct buffer {struct buffer* buf; int dma; struct buffer* next; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct buffer*) ;
 int FUNC_2 (struct pci_dev*,int,struct buffer*,int ) ;
 int FUNC_3 (struct pci_dev*,int ,int,int ) ;

void FUNC_4(struct net_device *VAR_1,struct buffer **VAR_2,int VAR_3,short
VAR_4)
{

 struct buffer *VAR_5,*VAR_6;
 struct r8180_priv *VAR_7 = (struct r8180_priv *)FUNC_0(VAR_1);
 struct pci_dev *VAR_8=VAR_7->pdev;

 if (!*VAR_2)
  return;

 VAR_5 = *VAR_2;

 do{
  VAR_6=VAR_5->next;
  if(VAR_4){
   FUNC_2(VAR_8,VAR_3,
        VAR_5->buf,VAR_5->dma);
  }else{
   FUNC_3(VAR_8, VAR_5->dma,
   VAR_3,VAR_0);
   FUNC_1(VAR_5->buf);
  }
  FUNC_1(VAR_5);
  VAR_5 = VAR_6;
 }
 while(VAR_6 != *VAR_2);

 *VAR_2=((void*)0);
}
