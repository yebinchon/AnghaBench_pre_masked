
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int physical; int offset; } ;
struct intelfb_info {TYPE_1__ cursor; scalar_t__ mobile; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct intelfb_info*) ;
 int FUNC_3 (int ,int) ;

void FUNC_4(struct intelfb_info *VAR_16)
{
 u32 VAR_17;





 if (VAR_16->mobile || FUNC_2(VAR_16)) {
  if (!VAR_16->cursor.physical)
   return;
  VAR_17 = FUNC_1(VAR_1);
  VAR_17 &= ~(VAR_10 | VAR_8 |
    VAR_7 |
    (1 << VAR_11));
  VAR_17 |= VAR_9;
  FUNC_3(VAR_1, VAR_17);
  FUNC_3(VAR_0, VAR_16->cursor.physical);
 } else {
  VAR_17 = FUNC_1(VAR_2);
  VAR_17 &= ~(VAR_5 | VAR_6 |
    VAR_3 | VAR_15);
  VAR_17 = VAR_4;
  FUNC_3(VAR_2, VAR_17);
  FUNC_3(VAR_0, VAR_16->cursor.offset << 12);
  VAR_17 = (64 << VAR_13) |
        (64 << VAR_14);
  FUNC_3(VAR_12, VAR_17);
 }
}
