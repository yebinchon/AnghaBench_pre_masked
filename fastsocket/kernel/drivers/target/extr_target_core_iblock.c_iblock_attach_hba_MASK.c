
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct se_hba {int hba_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct se_hba *VAR_2, u32 VAR_3)
{
 FUNC_0("CORE_HBA[%d] - TCM iBlock HBA Driver %s on"
  " Generic Target Core Stack %s\n", VAR_2->hba_id,
  VAR_0, VAR_1);
 return 0;
}
