
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int word ;
typedef scalar_t__ byte ;
struct TYPE_10__ {int Global_Options; } ;
struct TYPE_12__ {int AdvCodecFLAG; int scom_appl_disable; TYPE_2__* plci; TYPE_1__ profile; TYPE_2__* AdvCodecPLCI; int * AdvSignalAppl; TYPE_2__* AdvSignalPLCI; } ;
struct TYPE_11__ {void* tel; int internal_command; int spoofed_msg; int State; } ;
typedef TYPE_2__ PLCI ;
typedef TYPE_3__ DIVA_CAPI_ADAPTER ;
typedef int APPL ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (TYPE_2__*,int ,char*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int ,int) ;

__attribute__((used)) static word FUNC_6(DIVA_CAPI_ADAPTER *VAR_15, PLCI *VAR_16, APPL *VAR_17,
       byte VAR_18)
{
  word VAR_19;
  PLCI *VAR_20;






  if(VAR_15->profile.Global_Options & VAR_9)
  {

    if(VAR_15->AdvCodecFLAG)
    {
      if(VAR_15->AdvSignalAppl!=VAR_17 || VAR_15->AdvSignalPLCI)
      {
        FUNC_1(1,FUNC_2("AdvSigPlci=0x%x",VAR_15->AdvSignalPLCI));
        return 0x2001;
      }
      if(VAR_16!=((void*)0))
      {
        VAR_15->AdvSignalPLCI = VAR_16;
        VAR_16->tel=VAR_2;
      }
      return 0;
    }
    if((VAR_19=FUNC_3(VAR_15)))
    {
      VAR_20 = &VAR_15->plci[VAR_19-1];
      VAR_20->tel = VAR_6;




      if(VAR_18) VAR_20->State = VAR_1;
      else
      {
        VAR_20->State = VAR_0;
        if(VAR_16)
        {
          VAR_16->spoofed_msg = VAR_13;
        }

      }
      if(VAR_16!=((void*)0))
      {
        VAR_15->AdvSignalPLCI = VAR_16;
        VAR_16->tel=VAR_2;
      }
      VAR_15->AdvSignalAppl = VAR_17;
      VAR_15->AdvCodecFLAG = 1;
      VAR_15->AdvCodecPLCI = VAR_20;
      FUNC_0(VAR_20,VAR_4,"\x01\x15");
      FUNC_0(VAR_20,VAR_10,"\x01\x00");
      FUNC_0(VAR_20,VAR_8,"\x02\x18\x00");
      FUNC_0(VAR_20,VAR_14,"\x06\x43\x61\x70\x69\x32\x30");
      VAR_20->internal_command = VAR_12;
      FUNC_1(1,FUNC_2("Codec Assign"));
      FUNC_5(VAR_20,VAR_3,VAR_7);
      FUNC_4(VAR_20);
    }
    else
    {
      return 0x2001;
    }
  }
  else if(VAR_15->profile.Global_Options & VAR_11)
  {
    if(VAR_18) return 0x300B;

    if(VAR_16!=((void*)0)) VAR_16->tel = VAR_5;
    FUNC_1(1,FUNC_2("S/SCOM codec"));



    if(!VAR_15->scom_appl_disable){
      if((VAR_19=FUNC_3(VAR_15))) {
        VAR_20 = &VAR_15->plci[VAR_19-1];
        FUNC_0(VAR_20,VAR_4,"\x01\x80");
        FUNC_0(VAR_20,VAR_14,"\x06\x43\x61\x70\x69\x32\x30");
        FUNC_5(VAR_20,VAR_3,0xC0);
        FUNC_4(VAR_20);
        VAR_15->scom_appl_disable = 1;
      }
      else{
        return 0x2001;
      }
    }
  }
  else return 0x300B;

  return 0;
}
