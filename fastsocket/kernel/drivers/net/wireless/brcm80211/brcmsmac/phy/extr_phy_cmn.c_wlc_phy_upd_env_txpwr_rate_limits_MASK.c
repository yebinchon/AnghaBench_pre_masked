
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
struct brcms_phy {int * txpwr_env_limit; } ;
typedef int s8 ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct brcms_phy*) ;
 int FUNC_1 (struct brcms_phy*) ;

__attribute__((used)) static void FUNC_2(struct brcms_phy *VAR_2, u32 VAR_3)
{
 u8 VAR_4;
 s8 VAR_5, VAR_6;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  VAR_2->txpwr_env_limit[VAR_4] = VAR_0;

 VAR_6 = FUNC_1(VAR_2);
 VAR_5 = FUNC_0(VAR_2);

}
