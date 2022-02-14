
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxamci_host {int dummy; } ;
struct mmc_host {int dummy; } ;


 int VAR_0 ;
 struct pxamci_host* FUNC_0 (struct mmc_host*) ;
 int FUNC_1 (struct pxamci_host*,int ) ;
 int FUNC_2 (struct pxamci_host*,int ) ;

__attribute__((used)) static void FUNC_3(struct mmc_host *VAR_1, int VAR_2)
{
 struct pxamci_host *VAR_3 = FUNC_0(VAR_1);

 if (VAR_2)
  FUNC_2(VAR_3, VAR_0);
 else
  FUNC_1(VAR_3, VAR_0);
}
