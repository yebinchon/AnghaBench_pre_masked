
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SceUID ;


 int VAR_0 ;
 int FUNC_0 (char const*,int ,int *) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char const*,int ) ;
 int FUNC_3 (int,int ,int *,int*,int ) ;

__attribute__((used)) static SceUID FUNC_4(const char *VAR_1)
{
 SceUID VAR_2, VAR_3;
 int VAR_4, VAR_5;

 VAR_2 = FUNC_2(VAR_1, VAR_0);
 if (VAR_2 < 0) {
  FUNC_1("failed to load %s (%08x), trying kuKernelLoadModule\n", VAR_1, VAR_2);
  VAR_3 = FUNC_0(VAR_1, 0, ((void*)0));
  if (VAR_3 < 0) FUNC_1("kuKernelLoadModule failed with %08x\n", VAR_3);
  else {
   VAR_5 = FUNC_3(VAR_3, 0, ((void*)0), &VAR_4, 0);
   if (VAR_5 < 0) FUNC_1("sceKernelStartModule failed with %08x\n", VAR_5);
   else VAR_2 = VAR_3;
  }
 }
 return VAR_2;
}
