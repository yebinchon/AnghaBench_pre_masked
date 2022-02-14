
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcilst_struct {int dummy; } ;


 int FUNC_0 (unsigned short,unsigned short,unsigned short,unsigned short,struct pcilst_struct**) ;
 scalar_t__ FUNC_1 (struct pcilst_struct*,int) ;
 int FUNC_2 (char*,...) ;
 struct pcilst_struct* FUNC_3 (unsigned short,unsigned short) ;

struct pcilst_struct *FUNC_4(unsigned short VAR_0,
          unsigned short VAR_1,
          unsigned short VAR_2,
          unsigned short VAR_3,
          int VAR_4)
{
 struct pcilst_struct *VAR_5;

 if ((VAR_2 < 1) & (VAR_3 < 1)) {

  VAR_5 = FUNC_3(VAR_0, VAR_1);
  if (VAR_5 == ((void*)0)) {
   FUNC_2(" - Unused card not found in system!\n");
   return ((void*)0);
  }
 } else {
  switch (FUNC_0(VAR_0, VAR_1,
        VAR_2, VAR_3,
        &VAR_5)) {
  case 1:
   FUNC_2(" - Card not found on requested position b:s %d:%d!\n",
      VAR_2, VAR_3);
   return ((void*)0);
  case 2:
   FUNC_2(" - Card on requested position is used b:s %d:%d!\n",
      VAR_2, VAR_3);
   return ((void*)0);
  }
 }

 if (FUNC_1(VAR_5, VAR_4) != 0) {
  FUNC_2(" - Can't allocate card!\n");
  return ((void*)0);

 }

 return VAR_5;
}
