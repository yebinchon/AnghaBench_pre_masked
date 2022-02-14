
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_priv {int sta_key_max_num; int ucode_key_table; } ;


 int VAR_0 ;
 int FUNC_0 (int,int *) ;

int FUNC_1(struct iwl_priv *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->sta_key_max_num; VAR_2++)
  if (!FUNC_0(VAR_2, &VAR_1->ucode_key_table))
   return VAR_2;

 return VAR_0;
}
