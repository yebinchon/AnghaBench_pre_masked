
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v ;
typedef int u8 ;
typedef scalar_t__ u32 ;


 int * VAR_0 ;
 void* FUNC_0 (int *,char*) ;
 int FUNC_1 (void*,char*,scalar_t__*,int) ;

int FUNC_2(void)
{
 u32 VAR_1;
 void *VAR_2;

 VAR_2 = FUNC_0(((void*)0), "marvell,mv64360-i2c");
 if (VAR_2 == ((void*)0))
  goto err_out;
 if (FUNC_1(VAR_2, "virtual-reg", &VAR_1, sizeof(VAR_1)) != sizeof(VAR_1))
  goto err_out;

 VAR_0 = (u8 *)VAR_1;
 return 0;

err_out:
 return -1;
}
