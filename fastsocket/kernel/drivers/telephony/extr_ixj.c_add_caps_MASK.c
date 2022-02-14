
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ g729_loaded; scalar_t__ ts85_loaded; } ;
struct TYPE_8__ {int low; } ;
struct TYPE_7__ {int low; } ;
struct TYPE_11__ {size_t caps; int cardtype; TYPE_4__* caplist; TYPE_3__ flags; TYPE_2__ dsp; TYPE_1__ ver; } ;
struct TYPE_10__ {int cap; int handle; void* captype; int desc; } ;
typedef TYPE_5__ IXJ ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;





 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 int VAR_16 ;
 void* VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (int ,char*) ;
 void* VAR_21 ;

__attribute__((used)) static void FUNC_1(IXJ *VAR_22)
{
 VAR_22->caps = 0;
 VAR_22->caplist[VAR_22->caps].cap = VAR_8;
 FUNC_0(VAR_22->caplist[VAR_22->caps].desc, "Quicknet Technologies, Inc. (www.quicknet.net)");
 VAR_22->caplist[VAR_22->caps].captype = VAR_21;
 VAR_22->caplist[VAR_22->caps].handle = VAR_22->caps++;
 VAR_22->caplist[VAR_22->caps].captype = VAR_15;
 switch (VAR_22->cardtype) {
 case 130:
  FUNC_0(VAR_22->caplist[VAR_22->caps].desc, "Quicknet Internet PhoneJACK");
  break;
 case 132:
  FUNC_0(VAR_22->caplist[VAR_22->caps].desc, "Quicknet Internet LineJACK");
  break;
 case 129:
  FUNC_0(VAR_22->caplist[VAR_22->caps].desc, "Quicknet Internet PhoneJACK Lite");
  break;
 case 128:
  FUNC_0(VAR_22->caplist[VAR_22->caps].desc, "Quicknet Internet PhoneJACK PCI");
  break;
 case 131:
  FUNC_0(VAR_22->caplist[VAR_22->caps].desc, "Quicknet Internet PhoneCARD");
  break;
 }
 VAR_22->caplist[VAR_22->caps].cap = VAR_22->cardtype;
 VAR_22->caplist[VAR_22->caps].handle = VAR_22->caps++;
 FUNC_0(VAR_22->caplist[VAR_22->caps].desc, "POTS");
 VAR_22->caplist[VAR_22->caps].captype = VAR_17;
 VAR_22->caplist[VAR_22->caps].cap = VAR_18;
 VAR_22->caplist[VAR_22->caps].handle = VAR_22->caps++;


 switch (VAR_22->cardtype) {
 case 130:
 case 132:
 case 128:
 case 131:
  FUNC_0(VAR_22->caplist[VAR_22->caps].desc, "SPEAKER");
  VAR_22->caplist[VAR_22->caps].captype = VAR_17;
  VAR_22->caplist[VAR_22->caps].cap = VAR_20;
  VAR_22->caplist[VAR_22->caps].handle = VAR_22->caps++;
        default:
       break;
 }


 switch (VAR_22->cardtype) {
 case 130:
  FUNC_0(VAR_22->caplist[VAR_22->caps].desc, "HANDSET");
  VAR_22->caplist[VAR_22->caps].captype = VAR_17;
  VAR_22->caplist[VAR_22->caps].cap = VAR_16;
  VAR_22->caplist[VAR_22->caps].handle = VAR_22->caps++;
  break;
        default:
       break;
 }


 switch (VAR_22->cardtype) {
 case 132:
  FUNC_0(VAR_22->caplist[VAR_22->caps].desc, "PSTN");
  VAR_22->caplist[VAR_22->caps].captype = VAR_17;
  VAR_22->caplist[VAR_22->caps].cap = VAR_19;
  VAR_22->caplist[VAR_22->caps].handle = VAR_22->caps++;
  break;
        default:
       break;
 }


 FUNC_0(VAR_22->caplist[VAR_22->caps].desc, "ULAW");
 VAR_22->caplist[VAR_22->caps].captype = VAR_14;
 VAR_22->caplist[VAR_22->caps].cap = VAR_12;
 VAR_22->caplist[VAR_22->caps].handle = VAR_22->caps++;

 FUNC_0(VAR_22->caplist[VAR_22->caps].desc, "LINEAR 16 bit");
 VAR_22->caplist[VAR_22->caps].captype = VAR_14;
 VAR_22->caplist[VAR_22->caps].cap = VAR_6;
 VAR_22->caplist[VAR_22->caps].handle = VAR_22->caps++;

 FUNC_0(VAR_22->caplist[VAR_22->caps].desc, "LINEAR 8 bit");
 VAR_22->caplist[VAR_22->caps].captype = VAR_14;
 VAR_22->caplist[VAR_22->caps].cap = VAR_7;
 VAR_22->caplist[VAR_22->caps].handle = VAR_22->caps++;

 FUNC_0(VAR_22->caplist[VAR_22->caps].desc, "Windows Sound System");
 VAR_22->caplist[VAR_22->caps].captype = VAR_14;
 VAR_22->caplist[VAR_22->caps].cap = VAR_13;
 VAR_22->caplist[VAR_22->caps].handle = VAR_22->caps++;


 FUNC_0(VAR_22->caplist[VAR_22->caps].desc, "ALAW");
 VAR_22->caplist[VAR_22->caps].captype = VAR_14;
 VAR_22->caplist[VAR_22->caps].cap = VAR_0;
 VAR_22->caplist[VAR_22->caps].handle = VAR_22->caps++;


 if (VAR_22->dsp.low != 0x20 || VAR_22->ver.low != 0x12) {
  FUNC_0(VAR_22->caplist[VAR_22->caps].desc, "G.723.1 6.3kbps");
  VAR_22->caplist[VAR_22->caps].captype = VAR_14;
  VAR_22->caplist[VAR_22->caps].cap = VAR_2;
  VAR_22->caplist[VAR_22->caps].handle = VAR_22->caps++;

  FUNC_0(VAR_22->caplist[VAR_22->caps].desc, "G.723.1 5.3kbps");
  VAR_22->caplist[VAR_22->caps].captype = VAR_14;
  VAR_22->caplist[VAR_22->caps].cap = VAR_1;
  VAR_22->caplist[VAR_22->caps].handle = VAR_22->caps++;

  FUNC_0(VAR_22->caplist[VAR_22->caps].desc, "TrueSpeech 4.8kbps");
  VAR_22->caplist[VAR_22->caps].captype = VAR_14;
  VAR_22->caplist[VAR_22->caps].cap = VAR_10;
  VAR_22->caplist[VAR_22->caps].handle = VAR_22->caps++;

  FUNC_0(VAR_22->caplist[VAR_22->caps].desc, "TrueSpeech 4.1kbps");
  VAR_22->caplist[VAR_22->caps].captype = VAR_14;
  VAR_22->caplist[VAR_22->caps].cap = VAR_9;
  VAR_22->caplist[VAR_22->caps].handle = VAR_22->caps++;
 }


 if (VAR_22->dsp.low == 0x20 || VAR_22->flags.ts85_loaded) {
  FUNC_0(VAR_22->caplist[VAR_22->caps].desc, "TrueSpeech 8.5kbps");
  VAR_22->caplist[VAR_22->caps].captype = VAR_14;
  VAR_22->caplist[VAR_22->caps].cap = VAR_11;
  VAR_22->caplist[VAR_22->caps].handle = VAR_22->caps++;
 }


 if (VAR_22->dsp.low == 0x21) {
  FUNC_0(VAR_22->caplist[VAR_22->caps].desc, "G.728 16kbps");
  VAR_22->caplist[VAR_22->caps].captype = VAR_14;
  VAR_22->caplist[VAR_22->caps].cap = VAR_3;
  VAR_22->caplist[VAR_22->caps].handle = VAR_22->caps++;
 }


 if (VAR_22->dsp.low != 0x20 && VAR_22->flags.g729_loaded) {
  FUNC_0(VAR_22->caplist[VAR_22->caps].desc, "G.729A 8kbps");
  VAR_22->caplist[VAR_22->caps].captype = VAR_14;
  VAR_22->caplist[VAR_22->caps].cap = VAR_4;
  VAR_22->caplist[VAR_22->caps].handle = VAR_22->caps++;
 }
 if (VAR_22->dsp.low != 0x20 && VAR_22->flags.g729_loaded) {
  FUNC_0(VAR_22->caplist[VAR_22->caps].desc, "G.729B 8kbps");
  VAR_22->caplist[VAR_22->caps].captype = VAR_14;
  VAR_22->caplist[VAR_22->caps].cap = VAR_5;
  VAR_22->caplist[VAR_22->caps].handle = VAR_22->caps++;
 }
}
