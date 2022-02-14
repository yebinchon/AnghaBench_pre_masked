
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int devtype ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (void*,char*,char*,int) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static void *FUNC_3(void)
{
 void *VAR_2;
 char VAR_3[VAR_1];
 char VAR_4[VAR_0];

 VAR_2 = FUNC_0("/chosen");
 if (VAR_2 == ((void*)0))
  goto err_out;

 if (FUNC_1(VAR_2, "linux,stdout-path", VAR_4, VAR_0) > 0) {
  VAR_2 = FUNC_0(VAR_4);
  if (VAR_2 == ((void*)0))
   goto err_out;

  if ((FUNC_1(VAR_2, "device_type", VAR_3, sizeof(VAR_3)) > 0)
    && !FUNC_2(VAR_3, "serial"))
   return VAR_2;
 }
err_out:
 return ((void*)0);
}
