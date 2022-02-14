
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint ;
struct TYPE_8__ {TYPE_1__* inst; } ;
typedef TYPE_2__ m68k_info ;
struct TYPE_7__ {int Opcode; } ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(m68k_info *VAR_2)
{
 uint VAR_3;
 FUNC_0(VAR_2, VAR_0);

 VAR_3 = FUNC_2(VAR_2);

 FUNC_1(VAR_2, VAR_1, 0, 0);


 VAR_2->inst->Opcode += (VAR_3 & 0x2f);
}
