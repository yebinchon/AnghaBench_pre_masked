
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_adsp_module {int state; int lock; int name; int state_wait; int id; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,int ,int,int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int ,int ,struct msm_adsp_module*) ;
 int FUNC_6 (int ,int,int) ;

int FUNC_7(struct msm_adsp_module *VAR_4)
{
 int VAR_5 = 0;

 FUNC_3("msm_adsp_enable() '%s'state[%d] id[%d]\n",
  VAR_4->name, VAR_4->state, VAR_4->id);

 FUNC_0(&VAR_4->lock);
 switch (VAR_4->state) {
 case 131:
  VAR_5 = FUNC_5(VAR_3,
      VAR_4->id, VAR_4);
  if (VAR_5)
   break;
  VAR_4->state = 128;
  FUNC_1(&VAR_4->lock);
  VAR_5 = FUNC_6(VAR_4->state_wait,
     VAR_4->state != 128,
     1 * VAR_2);
  FUNC_0(&VAR_4->lock);
  if (VAR_4->state == 129) {
   VAR_5 = 0;
  } else {
   FUNC_2("adsp: module '%s' enable timed out\n",
          VAR_4->name);
   VAR_5 = -VAR_1;
  }
  break;
 case 128:
  FUNC_4("adsp: module '%s' enable in progress\n",
      VAR_4->name);
  break;
 case 129:
  FUNC_4("adsp: module '%s' already enabled\n",
      VAR_4->name);
  break;
 case 130:
  FUNC_2("adsp: module '%s' disable in progress\n",
         VAR_4->name);
  VAR_5 = -VAR_0;
  break;
 }
 FUNC_1(&VAR_4->lock);
 return VAR_5;
}
