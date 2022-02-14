
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuidle_state_kobj {int kobj; int kobj_unregister; int * state; } ;
struct cpuidle_device {int state_count; struct cpuidle_state_kobj** kobjs; int kobj; int * states; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cpuidle_device*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct cpuidle_state_kobj*) ;
 int FUNC_3 (int *,int *,int *,char*,int) ;
 int FUNC_4 (int *,int ) ;
 int VAR_3 ;
 struct cpuidle_state_kobj* FUNC_5 (int,int ) ;

int FUNC_6(struct cpuidle_device *VAR_4)
{
 int VAR_5, VAR_6 = -VAR_0;
 struct cpuidle_state_kobj *VAR_7;


 for (VAR_5 = 0; VAR_5 < VAR_4->state_count; VAR_5++) {
  VAR_7 = FUNC_5(sizeof(struct cpuidle_state_kobj), VAR_1);
  if (!VAR_7)
   goto error_state;
  VAR_7->state = &VAR_4->states[VAR_5];
  FUNC_1(&VAR_7->kobj_unregister);

  VAR_6 = FUNC_3(&VAR_7->kobj, &VAR_3, &VAR_4->kobj,
        "state%d", VAR_5);
  if (VAR_6) {
   FUNC_2(VAR_7);
   goto error_state;
  }
  FUNC_4(&VAR_7->kobj, VAR_2);
  VAR_4->kobjs[VAR_5] = VAR_7;
 }

 return 0;

error_state:
 for (VAR_5 = VAR_5 - 1; VAR_5 >= 0; VAR_5--)
  FUNC_0(VAR_4, VAR_5);
 return VAR_6;
}
