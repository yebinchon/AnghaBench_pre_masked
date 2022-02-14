
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* operands; } ;
struct TYPE_8__ {int ir; TYPE_3__ extension; } ;
typedef TYPE_1__ m68k_info ;
struct TYPE_9__ {scalar_t__ reg; int type; int address_mode; } ;
typedef TYPE_2__ cs_m68k_op ;
typedef TYPE_3__ cs_m68k ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_4(m68k_info *VAR_7)
{
 cs_m68k* VAR_8;
 cs_m68k_op* VAR_9;

 FUNC_3(VAR_7, VAR_2);

 FUNC_1(VAR_7, VAR_0);

 FUNC_2(VAR_7, VAR_3, 0, 0);

 VAR_8 = &VAR_7->extension;
 VAR_9 = &VAR_8->operands[0];

 VAR_9->address_mode = VAR_1;
 VAR_9->type = VAR_4;

 if (FUNC_0(VAR_7->ir)) {
  VAR_9->reg = VAR_5 + (VAR_7->ir & 7);
 } else {
  VAR_9->reg = VAR_6 + (VAR_7->ir & 7);
 }
}
