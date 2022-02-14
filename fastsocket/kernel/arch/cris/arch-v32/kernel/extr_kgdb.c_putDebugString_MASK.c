
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,unsigned char*,int) ;
 char* VAR_0 ;
 int FUNC_1 (char*) ;

void
FUNC_2(const unsigned char *VAR_1, int VAR_2)
{

 asm("spchere:");
 asm("move $spc, $r10");
 asm("cmp.d spchere, $r10");
 asm("bne nosstep");
 asm("nop");
 asm("move.d spccont, $r10");
 asm("move $r10, $spc");
 asm("nosstep:");

        VAR_0[0] = 'O';
        FUNC_0(&VAR_0[1], (unsigned char *)VAR_1, VAR_2);
        FUNC_1(VAR_0);

 asm("spccont:");
}
