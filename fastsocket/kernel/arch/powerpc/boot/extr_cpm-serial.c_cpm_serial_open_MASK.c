
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct cpm_bd {int dummy; } ;
struct TYPE_6__ {int tbase; int rbase; int brkcr; int brkln; int brkec; int maxidl; int mrblr; int tfcr; int rfcr; } ;
struct TYPE_5__ {int sc; int len; int * addr; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 TYPE_3__* VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_5 () ;
 TYPE_1__* VAR_5 ;

__attribute__((used)) static int FUNC_6(void)
{
 FUNC_0();

 FUNC_3(&VAR_3->rfcr, 0x10);
 FUNC_3(&VAR_3->tfcr, 0x10);
 FUNC_4(&VAR_3->mrblr, 1);
 FUNC_4(&VAR_3->maxidl, 0);
 FUNC_4(&VAR_3->brkec, 0);
 FUNC_4(&VAR_3->brkln, 0);
 FUNC_4(&VAR_3->brkcr, 0);

 VAR_4 = VAR_1;
 VAR_4->addr = (u8 *)VAR_4 - 1;
 VAR_4->sc = 0xa000;
 VAR_4->len = 1;

 VAR_5 = VAR_4 + 1;
 VAR_5->addr = (u8 *)VAR_4 - 2;
 VAR_5->sc = 0x2000;
 VAR_5->len = 1;

 FUNC_5();
 FUNC_4(&VAR_3->rbase, VAR_2);
 FUNC_4(&VAR_3->tbase, VAR_2 + sizeof(struct cpm_bd));

 FUNC_1(VAR_0);

 FUNC_2();
 return 0;
}
