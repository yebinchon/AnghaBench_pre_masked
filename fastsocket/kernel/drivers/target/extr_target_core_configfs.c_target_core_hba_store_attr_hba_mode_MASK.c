
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_subsystem_api {int (* pmode_enable_hba ) (struct se_hba*,unsigned long) ;} ;
struct se_hba {int hba_flags; scalar_t__ dev_count; struct se_subsystem_api* transport; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char const*,int ,unsigned long*) ;
 int FUNC_2 (struct se_hba*,unsigned long) ;

__attribute__((used)) static ssize_t FUNC_3(struct se_hba *VAR_2,
    const char *VAR_3, size_t VAR_4)
{
 struct se_subsystem_api *VAR_5 = VAR_2->transport;
 unsigned long VAR_6;
 int VAR_7;

 if (VAR_5->pmode_enable_hba == ((void*)0))
  return -VAR_0;

 VAR_7 = FUNC_1(VAR_3, 0, &VAR_6);
 if (VAR_7 < 0) {
  FUNC_0("Unable to extract hba mode flag: %d\n", VAR_7);
  return -VAR_0;
 }

 if (VAR_2->dev_count) {
  FUNC_0("Unable to set hba_mode with active devices\n");
  return -VAR_0;
 }

 VAR_7 = VAR_5->pmode_enable_hba(VAR_2, VAR_6);
 if (VAR_7 < 0)
  return -VAR_0;
 if (VAR_7 > 0)
  VAR_2->hba_flags |= VAR_1;
 else if (VAR_7 == 0)
  VAR_2->hba_flags &= ~VAR_1;

 return VAR_4;
}
