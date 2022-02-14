
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int FUNC_0 (void*,scalar_t__*,int,unsigned long*) ;
 void* FUNC_1 (int *,char*) ;
 int FUNC_2 (void*,char*,scalar_t__*,int ) ;
 int FUNC_3 (char*) ;
 scalar_t__* VAR_1 ;

u32 *FUNC_4(void)
{
 void *VAR_2;
 unsigned long VAR_3 = 0;

 VAR_2 = FUNC_1(((void*)0), "soc");
 if (VAR_2) {
  int VAR_4;
  u32 VAR_5;

  VAR_4 = FUNC_2(VAR_2, "#address-cells", VAR_1, VAR_0);
  if (VAR_4 == 4)
   VAR_5 = VAR_1[0];
  else
   VAR_5 = 2;

  if (VAR_5 != 1 && VAR_5 != 2)
   goto err;

  VAR_4 = FUNC_2(VAR_2, "ranges", VAR_1, VAR_0);

  if (VAR_4 < 12)
   goto err;
  if (VAR_1[0] != 0)
   goto err;
  if (VAR_5 == 2 && VAR_1[1] != 0)
   goto err;

  if (!FUNC_0(VAR_2, VAR_1 + VAR_5, 8, &VAR_3))
   VAR_3 = 0;
 }

err:
 if (!VAR_3)
  FUNC_3("fsl_get_immr: Failed to find immr base\r\n");

 return (u32 *)VAR_3;
}
