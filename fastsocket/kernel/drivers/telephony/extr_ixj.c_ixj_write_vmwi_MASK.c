
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ cidplay; } ;
struct TYPE_10__ {int low; } ;
struct TYPE_12__ {int fskz; int fskphase; int fskcnt; int fskdcnt; scalar_t__ port; scalar_t__ cidcnt; scalar_t__ cidsize; TYPE_2__ flags; TYPE_1__ dsp; } ;
typedef TYPE_3__ IXJ ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (TYPE_3__*,char) ;
 int FUNC_4 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_5(IXJ *VAR_2, int VAR_3)
{
 char VAR_4;
 int VAR_5;

 int VAR_6 = 0;

 if (VAR_2->dsp.low == 0x20 || VAR_2->flags.cidplay)
  return;

 VAR_2->fskz = VAR_2->fskphase = VAR_2->fskcnt = VAR_2->fskdcnt = 0;
 VAR_2->cidsize = VAR_2->cidcnt = 0;

 FUNC_1(VAR_2);

 VAR_4 = 3;

 if (VAR_2->port == VAR_1)
  FUNC_0(VAR_0, VAR_2);

 FUNC_4(VAR_2);

 FUNC_3(VAR_2, 0x82);
 VAR_6 = 0x82;
 FUNC_3(VAR_2, VAR_4);
 VAR_6 = VAR_6 + VAR_4;

 FUNC_3(VAR_2, 0x0B);
 VAR_6 = VAR_6 + 0x0B;
 FUNC_3(VAR_2, 1);
 VAR_6 = VAR_6 + 1;

 if(VAR_3) {
  FUNC_3(VAR_2, 0xFF);
  VAR_6 = VAR_6 + 0xFF;
 }
 else {
  FUNC_3(VAR_2, 0x00);
  VAR_6 = VAR_6 + 0x00;
 }

 VAR_6 %= 256;
 VAR_6 ^= 0xFF;
 VAR_6 += 1;

 FUNC_3(VAR_2, (char) VAR_6);

 VAR_5 = VAR_2->fskdcnt % 240;
 if (VAR_5) {
  VAR_5 = 240 - VAR_5;
 }
 FUNC_2(VAR_2, VAR_5);
}
