
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int pack; int lfo_cnt; int eg_timer; int eg_cnt; } ;
struct TYPE_4__ {int lfo_cnt; int eg_timer; int eg_cnt; } ;
struct TYPE_5__ {TYPE_1__ OPN; } ;


 TYPE_3__ VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;

__attribute__((used)) static void FUNC_0(void)
{
 VAR_2 = VAR_0.eg_cnt;
 VAR_2 = VAR_0.eg_timer;
 VAR_1 = VAR_0.pack >> 16;
 VAR_2 = VAR_0.lfo_cnt;
}
