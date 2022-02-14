
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int* int_mask; int int_enable; int* cnt_ovf; } ;
struct TYPE_3__ {int ovf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_0 () ;
 TYPE_1__* VAR_4 ;
 int FUNC_1 (int) ;

__attribute__((used)) static void inline FUNC_2(void)
{
 int VAR_5;
 u32 VAR_6 = FUNC_0();
 FUNC_1(VAR_6 & ~VAR_2);

 for (VAR_5 = VAR_0; VAR_5 <= VAR_1; VAR_5++) {
  if (!(VAR_3->int_mask[VAR_5] & VAR_3->int_enable))
   continue;

  if (VAR_6 & VAR_3->cnt_ovf[VAR_5])
   VAR_4[VAR_5].ovf++;
 }
}
