
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AIDCallback ;



__attribute__((used)) static void FUNC_0(AIDCallback VAR_0)
{
 __asm__ __volatile__("mflr	%r0\n\t						  stw	%r0,4(%r1)\n\t						  stwu  %r1,-24(%r1)\n\t						  stw	%r31,20(%r1)\n\t						  mr	%r31,%r3\n\t						  lis	%r5,__OldStack@ha\n\t						  addi	%r5,%r5,__OldStack@l\n\t						  stw	%r1,0(%r5)\n\t						  lis	%r5,__CallbackStack@ha\n\t						  addi	%r5,%r5,__CallbackStack@l\n\t						  lwz	%r1,0(%r5)\n\t						  subi	%r1,%r1,8\n\t						  mtlr	%r31\n\t						  blrl\n\t						  lis	%r5,__OldStack@ha\n\t						  addi	%r5,%r5,__OldStack@l\n\t						  lwz	%r1,0(%r5)\n\t						  lwz	%r0,28(%r1)\n\t						  lwz	%r31,20(%r1)\n\t						  addi	%r1,%r1,24\n\t						  mtlr	%r0\n"
       );
}
