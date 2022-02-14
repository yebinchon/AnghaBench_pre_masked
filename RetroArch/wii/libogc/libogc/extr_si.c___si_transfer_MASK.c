
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int tcint; int tcintmsk; int outlen; int inlen; int channel; int tstart; } ;
struct TYPE_5__ {int val; TYPE_1__ csrmap; } ;
typedef TYPE_2__ sicomcsr ;
typedef int s32 ;
struct TYPE_6__ {int chan; int in_bytes; void* in; scalar_t__ callback; } ;
typedef scalar_t__ SICallback ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int* VAR_0 ;
 TYPE_3__ VAR_1 ;

__attribute__((used)) static u32 FUNC_3(s32 VAR_2,void *VAR_3,u32 VAR_4,void *VAR_5,u32 VAR_6,SICallback VAR_7)
{
 u32 VAR_8,VAR_9,VAR_10;
 sicomcsr VAR_11;
 FUNC_1(VAR_8);
 if(VAR_1.chan!=-1) {
  FUNC_2(VAR_8);
  return 0;
 }
 VAR_0[14] &= FUNC_0(VAR_2);

 VAR_1.chan = VAR_2;
 VAR_1.callback = VAR_7;
 VAR_1.in_bytes = VAR_6;
 VAR_1.in = VAR_5;
 VAR_9 = ((VAR_4+3)/4);
 for(VAR_10=0;VAR_10<VAR_9;VAR_10++) VAR_0[32+VAR_10] = ((u32*)VAR_3)[VAR_10];

 VAR_11.val = VAR_0[13];
 VAR_11.csrmap.tcint = 1;
 VAR_11.csrmap.tcintmsk = 0;
 if(VAR_7) VAR_11.csrmap.tcintmsk = 1;

 if(VAR_4==128) VAR_4 = 0;
 VAR_11.csrmap.outlen = VAR_4&0x7f;

 if(VAR_6==128) VAR_6 = 0;
 VAR_11.csrmap.inlen = VAR_6&0x7f;

 VAR_11.csrmap.channel = VAR_2&0x03;
 VAR_11.csrmap.tstart = 1;
 VAR_0[13] = VAR_11.val;
 FUNC_2(VAR_8);

 return 1;
}
