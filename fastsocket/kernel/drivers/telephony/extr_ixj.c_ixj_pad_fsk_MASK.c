
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fskdcnt; int fsksize; int* fskdata; } ;
typedef TYPE_1__ IXJ ;



__attribute__((used)) static void FUNC_0(IXJ *VAR_0, int VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  if(VAR_0->fskdcnt < (VAR_0->fsksize - 1))
   VAR_0->fskdata[VAR_0->fskdcnt++] = 0x0000;
 }
 for (VAR_2 = 0; VAR_2 < 720; VAR_2++) {
  if(VAR_0->fskdcnt < (VAR_0->fsksize - 1))
   VAR_0->fskdata[VAR_0->fskdcnt++] = 0x0000;
 }
}
