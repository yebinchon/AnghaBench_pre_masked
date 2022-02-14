
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct iwl_mvm {int dummy; } ;


 int FUNC_0 (struct iwl_mvm*,char*,int,int,int) ;
 int FUNC_1 (struct iwl_mvm*,char*,int) ;
 int VAR_0 ;
 int FUNC_2 (struct iwl_mvm*,int,int,int,int *) ;

__attribute__((used)) static int FUNC_3(struct iwl_mvm *VAR_1, u16 VAR_2,
    u8 *VAR_3)
{
 u16 VAR_4, VAR_5 = 0;
 int VAR_6;


 VAR_4 = VAR_0;

 VAR_6 = VAR_4;


 while (VAR_6 == VAR_4) {
  VAR_6 = FUNC_2(VAR_1, VAR_2, VAR_5, VAR_4, VAR_3);
  if (VAR_6 < 0) {
   FUNC_0(VAR_1,
    "Cannot read NVM from section %d offset %d, length %d\n",
    VAR_2, VAR_5, VAR_4);
   return VAR_6;
  }
  VAR_5 += VAR_6;
 }

 FUNC_1(VAR_1, "NVM section %d read completed\n", VAR_2);
 return VAR_5;
}
