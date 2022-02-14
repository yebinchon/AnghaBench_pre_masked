
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int ,int ,int ) ;
 void* FUNC_1 (char*) ;
 int FUNC_2 (void*,char*,int *,int) ;

void FUNC_3(u32 VAR_0, u32 VAR_1, u32 VAR_2, u32 VAR_3)
{
 void *VAR_4;

 FUNC_0(VAR_1, VAR_2, VAR_0);

 VAR_4 = FUNC_1("/soc/cpm");
 if (VAR_4)
  FUNC_2(VAR_4, "clock-frequency", &VAR_0, 4);

 VAR_4 = FUNC_1("/soc/cpm/brg");
 if (VAR_4)
  FUNC_2(VAR_4, "clock-frequency", &VAR_3, 4);
}
