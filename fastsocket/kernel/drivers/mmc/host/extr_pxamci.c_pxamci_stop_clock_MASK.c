
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxamci_host {int mmc; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct pxamci_host *VAR_4)
{
 if (FUNC_2(VAR_4->base + VAR_0) & VAR_2) {
  unsigned long VAR_5 = 10000;
  unsigned int VAR_6;

  FUNC_4(VAR_3, VAR_4->base + VAR_1);

  do {
   VAR_6 = FUNC_2(VAR_4->base + VAR_0);
   if (!(VAR_6 & VAR_2))
    break;
   FUNC_3(1);
  } while (VAR_5--);

  if (VAR_6 & VAR_2)
   FUNC_0(FUNC_1(VAR_4->mmc), "unable to stop clock\n");
 }
}
