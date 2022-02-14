
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int devtype ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void*,char*) ;
 void* FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (void*,char*,char*,int) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (void*) ;

int FUNC_5(void)
{
 void *VAR_2;
 char VAR_3[VAR_1];
 char VAR_4[VAR_0];

 VAR_2 = FUNC_1("/chosen");
 if (VAR_2 == ((void*)0))
  return -1;

 if (FUNC_2(VAR_2, "linux,stdout-path", VAR_4, VAR_0) > 0) {
  VAR_2 = FUNC_1(VAR_4);
  if (VAR_2 == ((void*)0))
   return -1;

  if ((FUNC_2(VAR_2, "device_type", VAR_3, sizeof(VAR_3)) > 0)
    && !FUNC_3(VAR_3, "serial")
    && (FUNC_0(VAR_2, "ns16550")))
    FUNC_4(VAR_2);
 }
 return 0;
}
