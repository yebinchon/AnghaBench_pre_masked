
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pm8001_work {int handler; int work; void* data; struct pm8001_hba_info* pm8001_ha; } ;
struct pm8001_hba_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 struct pm8001_work* FUNC_1 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int *) ;

int FUNC_3(struct pm8001_hba_info *VAR_4, void *VAR_5,
          int VAR_6)
{
 struct pm8001_work *VAR_7;
 int VAR_8 = 0;

 VAR_7 = FUNC_1(sizeof(struct pm8001_work), VAR_1);
 if (VAR_7) {
  VAR_7->pm8001_ha = VAR_4;
  VAR_7->data = VAR_5;
  VAR_7->handler = VAR_6;
  FUNC_0(&VAR_7->work, VAR_2);
  FUNC_2(VAR_3, &VAR_7->work);
 } else
  VAR_8 = -VAR_0;

 return VAR_8;
}
