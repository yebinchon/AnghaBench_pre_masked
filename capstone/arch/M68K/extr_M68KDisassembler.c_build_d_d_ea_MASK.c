
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint ;
struct TYPE_10__ {int ir; } ;
typedef TYPE_1__ m68k_info ;
struct TYPE_11__ {void* reg; void* address_mode; } ;
typedef TYPE_2__ cs_m68k_op ;
struct TYPE_12__ {TYPE_2__* operands; } ;
typedef TYPE_3__ cs_m68k ;


 void* VAR_0 ;
 void* VAR_1 ;
 TYPE_3__* FUNC_0 (TYPE_1__*,int,int,int) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*,int ,int) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(m68k_info *VAR_2, int VAR_3, int VAR_4)
{
 cs_m68k_op* VAR_5;
 cs_m68k_op* VAR_6;
 cs_m68k_op* VAR_7;
 uint VAR_8 = FUNC_2(VAR_2);
 cs_m68k* VAR_9 = FUNC_0(VAR_2, VAR_3, 3, VAR_4);

 VAR_5 = &VAR_9->operands[0];
 VAR_6 = &VAR_9->operands[1];
 VAR_7 = &VAR_9->operands[2];

 VAR_5->address_mode = VAR_0;
 VAR_5->reg = VAR_1 + (VAR_8 & 7);

 VAR_6->address_mode = VAR_0;
 VAR_6->reg = VAR_1 + ((VAR_8 >> 6) & 7);

 FUNC_1(VAR_2, VAR_7, VAR_2->ir, VAR_4);
}
