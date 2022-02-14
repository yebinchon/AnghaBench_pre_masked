
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vmcb_seg {int attrib; int limit; scalar_t__ base; scalar_t__ selector; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct vmcb_seg *VAR_1, uint32_t VAR_2)
{
 VAR_1->selector = 0;
 VAR_1->attrib = VAR_0 | VAR_2;
 VAR_1->limit = 0xffff;
 VAR_1->base = 0;
}
