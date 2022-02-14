
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct threshold_block_cross_cpu {scalar_t__ retval; struct threshold_block* tb; } ;
struct threshold_block {scalar_t__ threshold_limit; int address; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int,int) ;

__attribute__((used)) static void FUNC_1(void *VAR_1)
{
 struct threshold_block_cross_cpu *VAR_2 = VAR_1;
 struct threshold_block *VAR_3 = VAR_2->tb;
 u32 VAR_4, VAR_5;

 FUNC_0(VAR_3->address, VAR_4, VAR_5);
 VAR_2->retval = (VAR_5 & 0xFFF) - (VAR_0 - VAR_3->threshold_limit);
}
