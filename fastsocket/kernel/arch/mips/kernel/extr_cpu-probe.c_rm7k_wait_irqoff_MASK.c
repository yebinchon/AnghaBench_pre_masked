
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(void)
{
 FUNC_0();
 if (!FUNC_2())
  __asm__(
  "	.set	push					\n"
  "	.set	mips3					\n"
  "	.set	noat					\n"
  "	mfc0	$1, $12					\n"
  "	sync						\n"
  "	mtc0	$1, $12		# stalls until W stage	\n"
  "	wait						\n"
  "	mtc0	$1, $12		# stalls until W stage	\n"
  "	.set	pop					\n");
 FUNC_1();
}
