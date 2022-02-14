
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ar9170 {int state_lock; } ;
typedef enum carl9170_device_state { ____Placeholder_carl9170_device_state } carl9170_device_state ;


 scalar_t__ FUNC_0 (struct ar9170*,int) ;
 int FUNC_1 (struct ar9170*,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static inline void FUNC_4(struct ar9170 *VAR_0,
 enum carl9170_device_state VAR_1, enum carl9170_device_state VAR_2)
{
 unsigned long VAR_3;

 FUNC_2(&VAR_0->state_lock, VAR_3);
 if (FUNC_0(VAR_0, VAR_1))
  FUNC_1(VAR_0, VAR_2);
 FUNC_3(&VAR_0->state_lock, VAR_3);
}
