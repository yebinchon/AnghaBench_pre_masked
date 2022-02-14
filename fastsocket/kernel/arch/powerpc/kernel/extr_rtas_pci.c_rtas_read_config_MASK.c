
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pci_dn {int node; TYPE_1__* phb; int devfn; int busno; } ;
struct TYPE_2__ {unsigned long buid; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct pci_dn*,int) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int ,int,int,int*,unsigned long,int,...) ;
 unsigned long FUNC_6 (int ,int ,int) ;

int FUNC_7(struct pci_dn *VAR_5, int VAR_6, int VAR_7, u32 *VAR_8)
{
 int VAR_9 = -1;
 unsigned long VAR_10, VAR_11;
 int VAR_12;

 if (!VAR_5)
  return VAR_1;
 if (!FUNC_3(VAR_5, VAR_6))
  return VAR_0;

 VAR_11 = FUNC_6(VAR_5->busno, VAR_5->devfn, VAR_6);
 VAR_10 = VAR_5->phb->buid;
 if (VAR_10) {
  VAR_12 = FUNC_5(VAR_3, 4, 2, &VAR_9,
    VAR_11, FUNC_0(VAR_10), FUNC_1(VAR_10), VAR_7);
 } else {
  VAR_12 = FUNC_5(VAR_4, 2, 2, &VAR_9, VAR_11, VAR_7);
 }
 *VAR_8 = VAR_9;

 if (VAR_12)
  return VAR_1;

 if (VAR_9 == FUNC_2(VAR_7) &&
     FUNC_4 (VAR_5->node, ((void*)0)))
  return VAR_1;

 return VAR_2;
}
