
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int revision; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct pci_dev*) ;
 void* FUNC_2 (int ,int ,int ,int ,int *) ;
 int * VAR_6 ;

__attribute__((used)) static unsigned int FUNC_3(void)
{
 VAR_6 = FUNC_2(VAR_5,
         VAR_3,
         VAR_0, VAR_0,
         ((void*)0));
 if (VAR_6)
  return 4;

 VAR_6 = FUNC_2(VAR_5,
         VAR_2,
         VAR_0, VAR_0,
         ((void*)0));
 if (VAR_6)
  return 3;


 VAR_6 = FUNC_2(VAR_5,
         VAR_1,
         VAR_0, VAR_0,
         ((void*)0));
 if (VAR_6) {




  static struct pci_dev *VAR_7;

  VAR_7 = FUNC_2(VAR_5,
         VAR_4,
         VAR_0, VAR_0,
         ((void*)0));

  if (!VAR_7)
   return 2;

  if (VAR_7->revision < 5) {
   FUNC_0("hostbridge does not support speedstep\n");
   VAR_6 = ((void*)0);
   FUNC_1(VAR_7);
   return 0;
  }

  FUNC_1(VAR_7);
  return 2;
 }

 return 0;
}
