
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ulong ;
typedef scalar_t__ u32 ;
struct pci_dn {TYPE_1__* phb; int devfn; int busno; } ;
struct TYPE_2__ {unsigned long buid; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct pci_dn*,int) ;
 int VAR_3 ;
 int FUNC_3 (int ,int,int,int *,unsigned long,int,int ,...) ;
 unsigned long FUNC_4 (int ,int ,int) ;
 int VAR_4 ;

int FUNC_5(struct pci_dn *VAR_5, int VAR_6, int VAR_7, u32 VAR_8)
{
 unsigned long VAR_9, VAR_10;
 int VAR_11;

 if (!VAR_5)
  return VAR_1;
 if (!FUNC_2(VAR_5, VAR_6))
  return VAR_0;

 VAR_10 = FUNC_4(VAR_5->busno, VAR_5->devfn, VAR_6);
 VAR_9 = VAR_5->phb->buid;
 if (VAR_9) {
  VAR_11 = FUNC_3(VAR_3, 5, 1, ((void*)0), VAR_10,
   FUNC_0(VAR_9), FUNC_1(VAR_9), VAR_7, (ulong) VAR_8);
 } else {
  VAR_11 = FUNC_3(VAR_4, 3, 1, ((void*)0), VAR_10, VAR_7, (ulong)VAR_8);
 }

 if (VAR_11)
  return VAR_1;

 return VAR_2;
}
