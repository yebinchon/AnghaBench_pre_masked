
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int stat_cmd; } ;


 TYPE_1__* VAR_0 ;
 unsigned int* VAR_1 ;
 unsigned int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (unsigned int,int) ;
 int FUNC_3 (char*,unsigned int) ;

int
FUNC_4(void)
{
 unsigned int VAR_2=0;
 unsigned int VAR_3;

again:
 VAR_3 = VAR_0->stat_cmd;
 FUNC_3("Iron stat_cmd %x\n", VAR_3);
 VAR_0->stat_cmd = VAR_3;
 FUNC_1();
 VAR_3 = VAR_0->stat_cmd;

 VAR_3 = *VAR_1;
 FUNC_3("Iron ECC %x\n", VAR_3);
 *VAR_1 = VAR_3;
 FUNC_1();
 VAR_3 = *VAR_1;


        VAR_2 = FUNC_0(0x61);
        VAR_2 |= 0x0c;
        FUNC_2(VAR_2, 0x61);
        VAR_2 &= ~0x0c;
        FUNC_2(VAR_2, 0x61);

 VAR_3 = *VAR_1;
 if (VAR_3 & 0x300) goto again;

 return 0;
}
