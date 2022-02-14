
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int stopper; } ;
struct cx8802_dev {TYPE_1__ mpegq; TYPE_2__* pci; } ;
struct TYPE_6__ {int irq; } ;


 int FUNC_0 (TYPE_2__*,int *) ;
 int FUNC_1 (struct cx8802_dev*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int ,struct cx8802_dev*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int *) ;

__attribute__((used)) static void FUNC_6(struct cx8802_dev *VAR_0)
{
 FUNC_2( 2, "cx8802_fini_common\n" );
 FUNC_1(VAR_0);
 FUNC_4(VAR_0->pci);


 FUNC_3(VAR_0->pci->irq, VAR_0);
 FUNC_5(VAR_0->pci, ((void*)0));


 FUNC_0(VAR_0->pci,&VAR_0->mpegq.stopper);
}
