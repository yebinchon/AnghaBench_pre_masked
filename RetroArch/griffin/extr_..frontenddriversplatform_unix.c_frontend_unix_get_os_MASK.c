
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utsname {int release; } ;


 int FUNC_0 (int*,int*,int*) ;
 int FUNC_1 (int ,char*,int*,int*,unsigned int*) ;
 int FUNC_2 (char*,char*,size_t) ;
 scalar_t__ FUNC_3 (struct utsname*) ;

__attribute__((used)) static void FUNC_4(char *VAR_0,
      size_t VAR_1, int *VAR_2, int *VAR_3)
{






   unsigned VAR_4;
   struct utsname VAR_5;

   if (FUNC_3(&VAR_5) != 0)
      return;

   FUNC_1(VAR_5.release, "%d.%d.%u", VAR_2, VAR_3, &VAR_4);
   FUNC_2(VAR_0, "Linux", VAR_1);


}
