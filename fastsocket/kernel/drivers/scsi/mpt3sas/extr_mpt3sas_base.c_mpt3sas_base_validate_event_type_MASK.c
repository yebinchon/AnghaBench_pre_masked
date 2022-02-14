
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int mutex; } ;
struct MPT3SAS_ADAPTER {int* event_masks; TYPE_1__ base_cmds; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct MPT3SAS_ADAPTER*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void
FUNC_3(struct MPT3SAS_ADAPTER *VAR_2, u32 *VAR_3)
{
 int VAR_4, VAR_5;
 u32 VAR_6, VAR_7;
 u8 VAR_8;

 for (VAR_4 = 0, VAR_8 = 0; VAR_4 <
     VAR_1; VAR_4++) {
  VAR_6 = ~VAR_3[VAR_4];
  VAR_7 = 1;
  for (VAR_5 = 0; VAR_5 < 32; VAR_5++) {
   if (!(VAR_6 & VAR_7) &&
       (VAR_2->event_masks[VAR_4] & VAR_7)) {
    VAR_2->event_masks[VAR_4] &= ~VAR_7;
    VAR_8 = 1;
   }
   VAR_7 = (VAR_7 << 1);
  }
 }

 if (!VAR_8)
  return;

 FUNC_1(&VAR_2->base_cmds.mutex);
 FUNC_0(VAR_2, VAR_0);
 FUNC_2(&VAR_2->base_cmds.mutex);
}
