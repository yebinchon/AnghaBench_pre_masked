
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int kobj; } ;
struct memory_block {unsigned long state; int start_phys_index; int end_phys_index; int state_mutex; TYPE_1__ sysdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int,unsigned long) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct memory_block *VAR_4,
  unsigned long VAR_5, unsigned long VAR_6)
{
 int VAR_7, VAR_8 = 0;
 FUNC_2(&VAR_4->state_mutex);

 if (VAR_4->state != VAR_6) {
  VAR_8 = -VAR_0;
  goto out;
 }

 if (VAR_5 == 129)
  VAR_4->state = VAR_3;

 for (VAR_7 = VAR_4->start_phys_index; VAR_7 <= VAR_4->end_phys_index; VAR_7++) {
  VAR_8 = FUNC_1(VAR_7, VAR_5);
  if (VAR_8)
   break;
 }

 if (VAR_8) {
  for (VAR_7 = VAR_4->start_phys_index; VAR_7 <= VAR_4->end_phys_index; VAR_7++)
   FUNC_1(VAR_7, VAR_6);

  VAR_4->state = VAR_6;
  goto out;
 }

 VAR_4->state = VAR_5;
 switch (VAR_4->state) {
 case 129:
  FUNC_0(&VAR_4->sysdev.kobj, VAR_1);
  break;
 case 128:
  FUNC_0(&VAR_4->sysdev.kobj, VAR_2);
  break;
 default:
  break;
 }
out:
 FUNC_3(&VAR_4->state_mutex);
 return VAR_8;
}
