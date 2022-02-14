
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * operands; } ;
struct TYPE_6__ {TYPE_2__ extension; } ;
typedef TYPE_1__ m68k_info ;
typedef int cs_m68k_op ;
typedef TYPE_2__ cs_m68k ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_2(m68k_info *VAR_2)
{
 cs_m68k* VAR_3 = &VAR_2->extension;
 cs_m68k_op VAR_4;

 FUNC_0(VAR_2, VAR_0);
 FUNC_1(VAR_2, VAR_1, 1);



 VAR_4 = VAR_3->operands[0];
 VAR_3->operands[0] = VAR_3->operands[1];
 VAR_3->operands[1] = VAR_4;
}
