
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
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*,int,int,int,int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ,int,int,int*,int,int ,int ,int,int,int) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct pci_dn *VAR_3, u32 VAR_4, u32 VAR_5)
{
 u32 VAR_6, VAR_7, VAR_8[3];
 unsigned long VAR_9;
 int VAR_10;

 VAR_6 = FUNC_5(VAR_3->busno, VAR_3->devfn, 0);
 VAR_9 = VAR_3->phb->buid;

 VAR_7 = 1;
 do {
  if (VAR_4 == VAR_1 || VAR_4 == VAR_0)
   VAR_10 = FUNC_4(VAR_2, 6, 4, VAR_8, VAR_6,
     FUNC_0(VAR_9), FUNC_1(VAR_9),
     VAR_4, VAR_5, VAR_7);
  else
   VAR_10 = FUNC_4(VAR_2, 6, 3, VAR_8, VAR_6,
     FUNC_0(VAR_9), FUNC_1(VAR_9),
     VAR_4, VAR_5, VAR_7);

  VAR_7 = VAR_8[1];
 } while (FUNC_3(VAR_10));





 if (VAR_10 == 0)
  VAR_10 = VAR_8[0];
 else if (VAR_10 > 0)
  VAR_10 = -VAR_10;

 FUNC_2("rtas_msi: ibm,change_msi(func=%d,num=%d), got %d rc = %d\n",
   VAR_4, VAR_5, VAR_8[0], VAR_10);

 return VAR_10;
}
