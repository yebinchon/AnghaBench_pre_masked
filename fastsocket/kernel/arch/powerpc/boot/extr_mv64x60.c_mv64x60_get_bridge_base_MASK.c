
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v ;
typedef int u8 ;
typedef scalar_t__ u32 ;


 void* FUNC_0 (int *,char*) ;
 int FUNC_1 (void*,char*,scalar_t__*,int) ;

u8 *FUNC_2(void)
{
 u32 VAR_0;
 void *VAR_1;

 VAR_1 = FUNC_0(((void*)0), "marvell,mv64360");
 if (VAR_1 == ((void*)0))
  goto err_out;
 if (FUNC_1(VAR_1, "virtual-reg", &VAR_0, sizeof(VAR_0)) != sizeof(VAR_0))
  goto err_out;

 return (u8 *)VAR_0;

err_out:
 return 0;
}
