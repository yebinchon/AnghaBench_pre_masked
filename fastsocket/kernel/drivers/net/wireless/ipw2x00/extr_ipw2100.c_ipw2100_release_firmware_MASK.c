
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipw2100_priv {int dummy; } ;
struct ipw2100_fw {int * fw_entry; scalar_t__ version; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct ipw2100_priv *VAR_0,
         struct ipw2100_fw *VAR_1)
{
 VAR_1->version = 0;
 FUNC_0(VAR_1->fw_entry);
 VAR_1->fw_entry = ((void*)0);
}
