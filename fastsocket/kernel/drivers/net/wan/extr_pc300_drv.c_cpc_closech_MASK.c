
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ chan; } ;
typedef TYPE_2__ pc300dev_t ;
struct TYPE_10__ {int channel; int falc; scalar_t__ card; } ;
typedef TYPE_3__ pc300ch_t ;
struct TYPE_8__ {scalar_t__ type; scalar_t__ cpld_reg1; scalar_t__ falcbase; scalar_t__ cpld_reg2; scalar_t__ scabase; } ;
struct TYPE_11__ {TYPE_1__ hw; } ;
typedef TYPE_4__ pc300_t ;
typedef int falc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ,int) ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (TYPE_4__*,int) ;
 int FUNC_5 (TYPE_4__*,int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(pc300dev_t * VAR_7)
{
 pc300ch_t *VAR_8 = (pc300ch_t *) VAR_7->chan;
 pc300_t *VAR_9 = (pc300_t *) VAR_8->card;
 falc_t *VAR_10 = (falc_t *) & VAR_8->falc;
 int VAR_11 = VAR_8->channel;

 FUNC_2(VAR_9->hw.scabase + FUNC_0(VAR_0, VAR_11), VAR_1);
 FUNC_4(VAR_9, VAR_11);
 FUNC_5(VAR_9, VAR_11);

 if (VAR_9->hw.type == VAR_6) {
  FUNC_3(VAR_10, 0, sizeof(falc_t));
  FUNC_2(VAR_9->hw.falcbase + VAR_9->hw.cpld_reg2,
      FUNC_1(VAR_9->hw.falcbase + VAR_9->hw.cpld_reg2) &
      ~((VAR_5 | VAR_4 |
         VAR_3) << (2 * VAR_11)));

  FUNC_2(VAR_9->hw.falcbase + VAR_9->hw.cpld_reg1,
      FUNC_1(VAR_9->hw.falcbase + VAR_9->hw.cpld_reg1) |
      (VAR_2 << (2 * VAR_11)));
  FUNC_6(10000);
  FUNC_2(VAR_9->hw.falcbase + VAR_9->hw.cpld_reg1,
      FUNC_1(VAR_9->hw.falcbase + VAR_9->hw.cpld_reg1) &
      ~(VAR_2 << (2 * VAR_11)));
 }
}
