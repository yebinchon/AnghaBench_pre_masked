
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {int name; int number; int min; int hour; int day; int month; } ;
struct TYPE_14__ {scalar_t__ cidplay; } ;
struct TYPE_13__ {int low; } ;
struct TYPE_16__ {int fskz; int fskphase; int fskcnt; int fskdcnt; TYPE_3__ cid_send; scalar_t__ cidcnt; scalar_t__ cidsize; TYPE_2__ flags; TYPE_1__ dsp; } ;
typedef TYPE_4__ IXJ ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*,int) ;
 int FUNC_3 (TYPE_4__*,char) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*,char*,int) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (char*,int ) ;
 char FUNC_9 (char*) ;

__attribute__((used)) static void FUNC_10(IXJ *VAR_0)
{
 char VAR_1[50];
 char VAR_2[50];
 char VAR_3[80];
 char VAR_4, VAR_5, VAR_6, VAR_7;
 int VAR_8;

 int VAR_9 = 0;

 if (VAR_0->dsp.low == 0x20 || VAR_0->flags.cidplay)
  return;

 VAR_0->fskz = VAR_0->fskphase = VAR_0->fskcnt = VAR_0->fskdcnt = 0;
 VAR_0->cidsize = VAR_0->cidcnt = 0;

 FUNC_0(VAR_0);

 FUNC_8(VAR_1, VAR_0->cid_send.month);
 FUNC_7(VAR_1, VAR_0->cid_send.day);
 FUNC_7(VAR_1, VAR_0->cid_send.hour);
 FUNC_7(VAR_1, VAR_0->cid_send.min);
 FUNC_8(VAR_2, VAR_0->cid_send.number);
 FUNC_8(VAR_3, VAR_0->cid_send.name);

 VAR_5 = FUNC_9(VAR_1);
 VAR_6 = FUNC_9(VAR_2);
 VAR_7 = FUNC_9(VAR_3);
 VAR_4 = VAR_5 + VAR_6 + VAR_7 + 6;

 while(1){
  FUNC_4(VAR_0);

  FUNC_3(VAR_0, 0x80);
  VAR_9 = 0x80;
  FUNC_3(VAR_0, VAR_4);
  VAR_9 = VAR_9 + VAR_4;

  FUNC_3(VAR_0, 0x01);
  VAR_9 = VAR_9 + 0x01;
  FUNC_3(VAR_0, VAR_5);
  VAR_9 = VAR_9 + VAR_5;
  VAR_9 = FUNC_5(VAR_0, VAR_1, VAR_9);
  if(FUNC_1(VAR_0) & 1)
   break;

  FUNC_3(VAR_0, 0x02);
  VAR_9 = VAR_9 + 0x02;
  FUNC_3(VAR_0, VAR_6);
  VAR_9 = VAR_9 + VAR_6;
  VAR_9 = FUNC_5(VAR_0, VAR_2, VAR_9);
  if(FUNC_1(VAR_0) & 1)
   break;

  FUNC_3(VAR_0, 0x07);
  VAR_9 = VAR_9 + 0x07;
  FUNC_3(VAR_0, VAR_7);
  VAR_9 = VAR_9 + VAR_7;
  VAR_9 = FUNC_5(VAR_0, VAR_3, VAR_9);
  if(FUNC_1(VAR_0) & 1)
   break;

  VAR_9 %= 256;
  VAR_9 ^= 0xFF;
  VAR_9 += 1;

  FUNC_3(VAR_0, (char) VAR_9);

  VAR_8 = VAR_0->fskdcnt % 240;
  if (VAR_8) {
   VAR_8 = 240 - VAR_8;
  }
  FUNC_2(VAR_0, VAR_8);
  break;
 }

 FUNC_6(VAR_0);
}
