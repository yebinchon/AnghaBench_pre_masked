
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct il_stats_cmd {int configuration_flags; } ;
struct il_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct il_priv*,int ,int,struct il_stats_cmd*) ;
 int FUNC_1 (struct il_priv*,int ,int,struct il_stats_cmd*,int *) ;

int
FUNC_2(struct il_priv *VAR_3, u8 VAR_4, bool VAR_5)
{
 struct il_stats_cmd VAR_6 = {
  .configuration_flags = VAR_5 ? VAR_2 : 0,
 };

 if (VAR_4 & VAR_0)
  return FUNC_1(VAR_3, VAR_1, sizeof(struct il_stats_cmd),
          &VAR_6, ((void*)0));
 else
  return FUNC_0(VAR_3, VAR_1, sizeof(struct il_stats_cmd),
           &VAR_6);
}
