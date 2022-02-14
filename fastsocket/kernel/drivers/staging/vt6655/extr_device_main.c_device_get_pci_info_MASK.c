
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct pci_dev {int dummy; } ;
typedef void* UINT ;
typedef int U8 ;
typedef int U16 ;
struct TYPE_3__ {int byRevId; struct pci_dev* pcid; void* ioaddr; void* memaddr; int SubVendorID; int SubSystemID; } ;
typedef TYPE_1__* PSDevice ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int*,int,int) ;
 int FUNC_1 (struct pci_dev*,int,int*) ;
 int FUNC_2 (struct pci_dev*,int,int *) ;
 void* FUNC_3 (struct pci_dev*,int) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*,int,int) ;
 int FUNC_6 (char*,...) ;

__attribute__((used)) static BOOL FUNC_7(PSDevice VAR_6, struct pci_dev* VAR_7) {

    U16 VAR_8;
    U8 VAR_9;
    UINT VAR_10;
    FUNC_1(VAR_7, VAR_2, &VAR_6->byRevId);
    FUNC_2(VAR_7, VAR_3,&VAR_6->SubSystemID);
    FUNC_2(VAR_7, VAR_4, &VAR_6->SubVendorID);
    FUNC_2(VAR_7, VAR_0, (u16 *) & (VAR_8));

    FUNC_4(VAR_7);

    VAR_6->memaddr = FUNC_3(VAR_7,0);
    VAR_6->ioaddr = FUNC_3(VAR_7,1);






    VAR_10 = FUNC_3(VAR_7,2);

    VAR_6->pcid = VAR_7;

    FUNC_1(VAR_7, VAR_0, &VAR_9);
    FUNC_5(VAR_7, VAR_0, (VAR_9|VAR_1));
    return VAR_5;
}
