
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;

int FUNC_4(void)
{
 u32 VAR_3 = 0;

 if (FUNC_0())
  VAR_3 = FUNC_2(VAR_0);
 else if (FUNC_1())
  VAR_3 = FUNC_2(VAR_2);
 else {
  FUNC_3("Cannot detect omap type!\n");
  goto out;
 }

 VAR_3 &= VAR_1;
 VAR_3 >>= 8;

out:
 return VAR_3;
}
