
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pm8001_hba_info {int tags_num; } ;


 int FUNC_0 (struct pm8001_hba_info*,int) ;

void FUNC_1(struct pm8001_hba_info *VAR_0)
{
 int VAR_1;
 for (VAR_1 = 0; VAR_1 < VAR_0->tags_num; ++VAR_1)
  FUNC_0(VAR_0, VAR_1);
}
