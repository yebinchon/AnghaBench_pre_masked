
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int physical; } ;
struct intelfb_info {TYPE_1__ cursor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int,int) ;
 scalar_t__ FUNC_1 (struct intelfb_info*) ;
 int FUNC_2 (int ,int) ;

void FUNC_3(struct intelfb_info *VAR_5, int VAR_6, int VAR_7)
{
 u32 VAR_8;
 VAR_8 = ((VAR_6 & VAR_2) << VAR_3) |
       ((VAR_7 & VAR_2) << VAR_4);
 FUNC_2(VAR_1, VAR_8);

 if (FUNC_1(VAR_5))
  FUNC_2(VAR_0, VAR_5->cursor.physical);
}
