
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcilst_struct {int dummy; } ;


 struct pcilst_struct* FUNC_0 (unsigned short,unsigned short) ;
 int FUNC_1 (unsigned short,unsigned short,unsigned short,unsigned short,struct pcilst_struct**) ;
 int FUNC_2 (struct pcilst_struct*) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static struct pcilst_struct *FUNC_4(unsigned short VAR_0,
             unsigned short VAR_1,
             unsigned short VAR_2,
             unsigned short VAR_3)
{
 struct pcilst_struct *VAR_4;
 int VAR_5;

 if ((VAR_2 < 1) & (VAR_3 < 1)) {

  VAR_4 = FUNC_0(VAR_0, VAR_1);
  if (VAR_4 == ((void*)0)) {
   FUNC_3(" - Unused card not found in system!\n");
   return ((void*)0);
  }
 } else {
  switch (FUNC_1(VAR_0, VAR_1,
             VAR_2, VAR_3,
             &VAR_4)) {
  case 1:
   FUNC_3
       (" - Card not found on requested position b:s %d:%d!\n",
        VAR_2, VAR_3);
   return ((void*)0);
  case 2:
   FUNC_3
       (" - Card on requested position is used b:s %d:%d!\n",
        VAR_2, VAR_3);
   return ((void*)0);
  }
 }

 VAR_5 = FUNC_2(VAR_4);
 if (VAR_5 != 0) {
  if (VAR_5 > 0)
   FUNC_3(" - Can't allocate card!\n");

  return ((void*)0);
 }

 return VAR_4;
}
