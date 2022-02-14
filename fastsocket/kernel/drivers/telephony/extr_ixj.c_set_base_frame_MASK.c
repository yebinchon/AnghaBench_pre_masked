
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int high; int low; } ;
struct TYPE_11__ {int high; int low; } ;
struct TYPE_10__ {int low; } ;
struct TYPE_13__ {int cid_play_aec_level; TYPE_3__ baseframe; TYPE_2__ ssr; TYPE_1__ dsp; int aec_level; } ;
typedef TYPE_4__ IXJ ;


 int FUNC_0 (TYPE_4__*) ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 scalar_t__ FUNC_2 (unsigned short,TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,int ) ;

__attribute__((used)) static int FUNC_4(IXJ *VAR_0, int VAR_1)
{
 unsigned short VAR_2;
 int VAR_3;

 FUNC_1(VAR_0);
 VAR_0->cid_play_aec_level = VAR_0->aec_level;
 FUNC_0(VAR_0);
 for (VAR_3 = 0; VAR_3 < 10; VAR_3++) {
  if (FUNC_1(VAR_0))
   break;
 }
 if (VAR_0->ssr.high || VAR_0->ssr.low)
  return -1;
 if (VAR_0->dsp.low != 0x20) {
  switch (VAR_1) {
  case 30:
   VAR_2 = 0x07F0;

   break;
  case 20:
   VAR_2 = 0x07A0;

   break;
  case 10:
   VAR_2 = 0x0750;

   break;
  default:
   return -1;
  }
 } else {
  if (VAR_1 == 30)
   return VAR_1;
  else
   return -1;
 }
 if (FUNC_2(VAR_2, VAR_0)) {
  VAR_0->baseframe.high = VAR_0->baseframe.low = 0xFF;
  return -1;
 } else {
  VAR_0->baseframe.high = VAR_0->ssr.high;
  VAR_0->baseframe.low = VAR_0->ssr.low;

  if(VAR_0->baseframe.high == 0x00 && VAR_0->baseframe.low == 0x00) {
   return -1;
  }
 }
 FUNC_3(VAR_0, VAR_0->cid_play_aec_level);
 return VAR_1;
}
