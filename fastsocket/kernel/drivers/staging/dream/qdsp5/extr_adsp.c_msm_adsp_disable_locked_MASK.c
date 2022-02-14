
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_adsp_module {int state; int id; int name; } ;





 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,int ,struct msm_adsp_module*) ;

__attribute__((used)) static int FUNC_2(struct msm_adsp_module *VAR_1)
{
 int VAR_2 = 0;

 switch (VAR_1->state) {
 case 130:
  FUNC_0("adsp: module '%s' already disabled\n",
      VAR_1->name);
  break;
 case 128:
 case 129:
  VAR_2 = FUNC_1(VAR_0,
      VAR_1->id, VAR_1);
  VAR_1->state = 130;
 }
 return VAR_2;
}
