
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmci_host {unsigned int oldstat; int timer; int mmc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_2)
{
 struct mmci_host *VAR_3 = (struct mmci_host *)VAR_2;
 unsigned int VAR_4 = FUNC_1(VAR_3->mmc);

 if (VAR_4 ^ VAR_3->oldstat)
  FUNC_0(VAR_3->mmc, 0);

 VAR_3->oldstat = VAR_4;
 FUNC_2(&VAR_3->timer, VAR_1 + VAR_0);
}
