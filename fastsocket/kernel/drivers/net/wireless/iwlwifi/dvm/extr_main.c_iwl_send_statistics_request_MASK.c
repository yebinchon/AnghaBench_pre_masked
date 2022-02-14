
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iwl_statistics_cmd {int configuration_flags; } ;
struct iwl_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct iwl_priv*,int ,int,int,struct iwl_statistics_cmd*) ;

int FUNC_1(struct iwl_priv *VAR_4, u8 VAR_5, bool VAR_6)
{
 struct iwl_statistics_cmd VAR_7 = {
  .configuration_flags =
   VAR_6 ? VAR_2 : 0,
 };

 if (VAR_5 & VAR_0)
  return FUNC_0(VAR_4, VAR_3,
     VAR_0,
     sizeof(struct iwl_statistics_cmd),
     &VAR_7);
 else
  return FUNC_0(VAR_4, VAR_3,
     VAR_1,
     sizeof(struct iwl_statistics_cmd),
     &VAR_7);
}
