
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct at91mci_host {int present; int mmc; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct at91mci_host*,int ) ;
 int FUNC_1 (struct at91mci_host*,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (char*,...) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_3, void *VAR_4)
{
 struct at91mci_host *VAR_5 = VAR_4;
 int VAR_6 = !FUNC_2(FUNC_3(VAR_3));





 if (VAR_6 != VAR_5->present) {
  VAR_5->present = VAR_6;
  FUNC_7("%s: card %s\n", FUNC_5(VAR_5->mmc),
   VAR_6 ? "insert" : "remove");
  if (!VAR_6) {
   FUNC_7("****** Resetting SD-card bus width ******\n");
   FUNC_1(VAR_5, VAR_1, FUNC_0(VAR_5, VAR_1) & ~VAR_0);
  }
  FUNC_4(VAR_5->mmc, FUNC_6(100));
 }
 return VAR_2;
}
