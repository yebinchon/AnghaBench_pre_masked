
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int physical; } ;
struct intelfb_info {int cursor_on; TYPE_1__ cursor; scalar_t__ mobile; scalar_t__ cursor_blanked; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct intelfb_info*) ;
 int FUNC_3 (int ,int ) ;

void FUNC_4(struct intelfb_info *VAR_6)
{
 u32 VAR_7;





 VAR_6->cursor_on = 1;

 if (VAR_6->cursor_blanked)
  return;

 if (VAR_6->mobile || FUNC_2(VAR_6)) {
  if (!VAR_6->cursor.physical)
   return;
  VAR_7 = FUNC_1(VAR_1);
  VAR_7 &= ~VAR_5;
  VAR_7 |= VAR_4;
  FUNC_3(VAR_1, VAR_7);

  FUNC_3(VAR_0, VAR_6->cursor.physical);
 } else {
  VAR_7 = FUNC_1(VAR_2);
  VAR_7 |= VAR_3;
  FUNC_3(VAR_2, VAR_7);
 }
}
