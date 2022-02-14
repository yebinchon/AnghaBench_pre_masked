
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int gate_desc ;
struct TYPE_2__ {int (* write_idt_entry ) (int *,int,int ,int ) ;} ;


 int FUNC_0 (int *,int,int ,int ) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void FUNC_1(gate_desc *VAR_1, int VAR_2, const gate_desc *VAR_3)
{
 u32 *VAR_4 = (u32 *)VAR_3;
 VAR_0.write_idt_entry(VAR_1, VAR_2, VAR_4[0], VAR_4[1]);
}
