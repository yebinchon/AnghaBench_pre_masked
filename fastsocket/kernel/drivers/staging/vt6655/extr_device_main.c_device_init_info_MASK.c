
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct TYPE_8__ {int nTxQueue; int io_size; int chip_id; } ;
struct TYPE_7__ {int multicast_limit; int lock; int nTxQueues; int io_size; int chip_id; struct pci_dev* pcid; struct TYPE_7__* prev; struct TYPE_7__* next; } ;
typedef TYPE_1__* PSDevice ;
typedef TYPE_2__* PCHIP_INFO ;
typedef int DEVICE_INFO ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static BOOL FUNC_2(struct pci_dev* VAR_2, PSDevice* VAR_3,
    PCHIP_INFO VAR_4) {

    PSDevice VAR_5;

    FUNC_0(*VAR_3,0,sizeof(DEVICE_INFO));

    if (VAR_1 == ((void*)0)) {
        VAR_1 =*VAR_3;
    }
    else {
        for (VAR_5=VAR_1;VAR_5->next!=((void*)0);VAR_5=VAR_5->next)
            do {} while (0);
        VAR_5->next = *VAR_3;
        (*VAR_3)->prev = VAR_5;
    }

    (*VAR_3)->pcid = VAR_2;
    (*VAR_3)->chip_id = VAR_4->chip_id;
    (*VAR_3)->io_size = VAR_4->io_size;
    (*VAR_3)->nTxQueues = VAR_4->nTxQueue;
    (*VAR_3)->multicast_limit =32;

    FUNC_1(&((*VAR_3)->lock));

    return VAR_0;
}
