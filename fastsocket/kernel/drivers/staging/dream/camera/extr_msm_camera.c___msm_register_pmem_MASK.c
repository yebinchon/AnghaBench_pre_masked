
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_sync {int stats; int frame; } ;
struct msm_pmem_info {int type; } ;


 int VAR_0 ;







 int FUNC_0 (int *,struct msm_pmem_info*) ;

__attribute__((used)) static int FUNC_1(struct msm_sync *VAR_1,
  struct msm_pmem_info *VAR_2)
{
 int VAR_3 = 0;

 switch (VAR_2->type) {
 case 131:
 case 130:
 case 128:
 case 132:
 case 129:
  VAR_3 = FUNC_0(&VAR_1->frame, VAR_2);
  break;

 case 134:
 case 133:
  VAR_3 = FUNC_0(&VAR_1->stats, VAR_2);
  break;

 default:
  VAR_3 = -VAR_0;
  break;
 }

 return VAR_3;
}
