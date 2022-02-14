
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smi_info {scalar_t__ token; int dev; int addr_info; int addr_source; } ;
struct ipmi_smi_info {int addr_info; int dev; int addr_src; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;

int FUNC_1(void *VAR_2, struct ipmi_smi_info *VAR_3)
{
 struct smi_info *VAR_4 = VAR_2;

 if (!VAR_4 || (VAR_4->token != VAR_1))
  return -VAR_0;

 VAR_3->addr_src = VAR_4->addr_source;
 VAR_3->dev = VAR_4->dev;
 VAR_3->addr_info = VAR_4->addr_info;
 FUNC_0(VAR_4->dev);

 return 0;
}
