
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int falc; } ;
typedef TYPE_2__ pc300ch_t ;
struct TYPE_8__ {scalar_t__ cpld_reg1; scalar_t__ falcbase; } ;
struct TYPE_10__ {TYPE_1__ hw; int * chan; } ;
typedef TYPE_3__ pc300_t ;
struct TYPE_11__ {scalar_t__ full_bandwidth; } ;
typedef TYPE_4__ falc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (TYPE_3__*,int) ;

__attribute__((used)) static void FUNC_4(pc300_t * VAR_2, int VAR_3)
{
 pc300ch_t *VAR_4 = (pc300ch_t *) & VAR_2->chan[VAR_3];
 falc_t *VAR_5 = (falc_t *) & VAR_4->falc;

 if (VAR_5->full_bandwidth) {
  FUNC_3(VAR_2, VAR_3);
 } else {
  FUNC_2(VAR_2, VAR_3);
 }

 FUNC_1(VAR_2->hw.falcbase + VAR_2->hw.cpld_reg1,
     FUNC_0(VAR_2->hw.falcbase + VAR_2->hw.cpld_reg1) &
     ~((VAR_1 | VAR_0) << (2 * VAR_3)));
}
