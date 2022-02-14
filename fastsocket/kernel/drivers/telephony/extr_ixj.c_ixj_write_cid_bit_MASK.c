
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fskcnt; int fskdcnt; int fsksize; size_t fskz; int * fskdata; } ;
typedef TYPE_1__ IXJ ;


 int *** VAR_0 ;

__attribute__((used)) static void FUNC_0(IXJ *VAR_1, int VAR_2)
{
 while (VAR_1->fskcnt < 20) {
  if(VAR_1->fskdcnt < (VAR_1->fsksize - 1))
   VAR_1->fskdata[VAR_1->fskdcnt++] = VAR_0[VAR_2][VAR_1->fskz][VAR_1->fskcnt];

  VAR_1->fskcnt += 3;
 }
 VAR_1->fskcnt %= 20;

 if (!VAR_2)
  VAR_1->fskz++;
 if (VAR_1->fskz >= 6)
  VAR_1->fskz = 0;

}
