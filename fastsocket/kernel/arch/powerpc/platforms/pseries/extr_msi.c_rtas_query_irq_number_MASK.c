
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pci_dn {TYPE_1__* phb; int devfn; int busno; } ;
struct TYPE_2__ {unsigned long buid; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (char*,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ,int,int,int*,int,int ,int ,int) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct pci_dn *VAR_1, int VAR_2)
{
 u32 VAR_3, VAR_4[2];
 unsigned long VAR_5;
 int VAR_6;

 VAR_3 = FUNC_5(VAR_1->busno, VAR_1->devfn, 0);
 VAR_5 = VAR_1->phb->buid;

 do {
  VAR_6 = FUNC_4(VAR_0, 4, 3, VAR_4, VAR_3,
          FUNC_0(VAR_5), FUNC_1(VAR_5), VAR_2);
 } while (FUNC_3(VAR_6));

 if (VAR_6) {
  FUNC_2("rtas_msi: error (%d) querying source number\n", VAR_6);
  return VAR_6;
 }

 return VAR_4[0];
}
