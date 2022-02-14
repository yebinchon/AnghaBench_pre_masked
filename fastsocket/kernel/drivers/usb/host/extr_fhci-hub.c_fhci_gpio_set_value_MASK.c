
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fhci_hcd {int* gpios; int* alow_gpios; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct fhci_hcd *VAR_0, int VAR_1, bool VAR_2)
{
 int VAR_3 = VAR_0->gpios[VAR_1];
 bool VAR_4 = VAR_0->alow_gpios[VAR_1];

 if (!FUNC_0(VAR_3))
  return;

 FUNC_1(VAR_3, VAR_2 ^ VAR_4);
 FUNC_2(5);
}
