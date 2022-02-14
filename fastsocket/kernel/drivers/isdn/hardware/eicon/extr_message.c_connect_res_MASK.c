
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_4__ ;
typedef struct TYPE_33__ TYPE_3__ ;
typedef struct TYPE_32__ TYPE_2__ ;
typedef struct TYPE_31__ TYPE_1__ ;


typedef int word ;
typedef int dword ;
typedef int byte ;
struct TYPE_34__ {int * info; scalar_t__ length; } ;
struct TYPE_33__ {int Id; } ;
struct TYPE_32__ {int* Info_Mask; scalar_t__ AdvCodecPLCI; } ;
struct TYPE_31__ {scalar_t__ State; scalar_t__ tel; scalar_t__ spoofed_msg; int B1_facilities; scalar_t__ command; int internal_command; int saved_msg; scalar_t__ adv_nl; TYPE_3__* appl; } ;
typedef TYPE_1__ PLCI ;
typedef TYPE_2__ DIVA_CAPI_ADAPTER ;
typedef TYPE_3__ APPL ;
typedef TYPE_4__ API_PARSE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*,TYPE_1__*,TYPE_3__*,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_7 ;
 void* VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_2 (TYPE_1__*,TYPE_4__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_4__*,int,int ) ;
 int FUNC_4 (TYPE_1__*,TYPE_4__*) ;
 int FUNC_5 (TYPE_1__*,int ,...) ;
 int FUNC_6 (TYPE_1__*,int ,TYPE_4__*) ;
 int FUNC_7 (int *,int,char*,TYPE_4__*) ;
 int FUNC_8 (TYPE_4__*,char*,int *) ;
 TYPE_3__* VAR_18 ;
 scalar_t__ FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,int) ;
 int FUNC_11 (int,int ) ;
 int FUNC_12 (char*,...) ;
 int FUNC_13 (TYPE_1__*) ;
 int VAR_19 ;
 int FUNC_14 (TYPE_1__*,int ,int ) ;
 int FUNC_15 (TYPE_3__*,int ,int,int ,char*,int ) ;
 int FUNC_16 (TYPE_1__*,scalar_t__,int ) ;
 scalar_t__ FUNC_17 (TYPE_1__*,int) ;

__attribute__((used)) static byte FUNC_18(dword VAR_20, word VAR_21, DIVA_CAPI_ADAPTER *VAR_22,
   PLCI *VAR_23, APPL *VAR_24, API_PARSE *VAR_25)
{
  word VAR_26, VAR_27;
  word VAR_28;
  static byte VAR_29[] = {0,0,0x90,0x91,0xac,0x9d,0x86,0xd8,0x9b};
  static byte VAR_30[] = {0x03,0x08,0x00,0x00};
  API_PARSE * VAR_31;
    API_PARSE VAR_32[5];
  word VAR_33=0;

  if(!VAR_23) {
    FUNC_11(1,FUNC_12("connect_res(no plci)"));
    return 0;
  }

  FUNC_11(1,FUNC_12("connect_res(State=0x%x)",VAR_23->State));
  for(VAR_26=0;VAR_26<5;VAR_26++) VAR_32[VAR_26].length = 0;
  VAR_31 = &VAR_25[5];
  FUNC_11(1,FUNC_12("ai->length=%d",VAR_31->length));

  if(VAR_31->length)
  {
    if(!FUNC_7(&VAR_31->info[1],(word)VAR_31->length,"ssss",VAR_32))
    {
      FUNC_11(1,FUNC_12("ai_parms[0].length=%d/0x%x",VAR_32[0].length,FUNC_1(VAR_32[0].info+1)));
      VAR_33 = 0;
      if(VAR_32[0].length)
      {
        VAR_33 = FUNC_1(VAR_32[0].info+1);
        FUNC_11(1,FUNC_12("BCH-I=0x%x",VAR_33));
      }
    }
  }

  if(VAR_23->State==VAR_10)
  {
    FUNC_11(1,FUNC_12("Connected Alert Call_Res"));
    if (VAR_22->Info_Mask[VAR_24->Id-1] & 0x200)
    {

      FUNC_5(VAR_23,VAR_13,"\x01\x01");
    }
    FUNC_6(VAR_23, VAR_4, &VAR_25[2]);
    FUNC_6(VAR_23, VAR_12, &VAR_25[4]);
    FUNC_2(VAR_23, &VAR_25[5]);
    VAR_23->State = VAR_8;
    FUNC_16(VAR_23, VAR_3,0);
    return 1;
  }
  else if(VAR_23->State==VAR_11 || VAR_23->State==VAR_9) {
    FUNC_10 (VAR_23, (word)(VAR_24->Id-1));
    FUNC_13 (VAR_23);
    VAR_28 = FUNC_1(VAR_25[0].info);
    FUNC_11(1,FUNC_12("Reject=0x%x",VAR_28));
    if(VAR_28)
    {
      if(FUNC_9 (VAR_23))
      {
        if((VAR_28&0xff00)==0x3400)
        {
          VAR_30[2] = ((byte)(VAR_28&0x00ff)) | 0x80;
          FUNC_5(VAR_23,VAR_5,VAR_30);
          FUNC_2(VAR_23, &VAR_25[5]);
          FUNC_16(VAR_23,VAR_14,0);
        }
        else if(VAR_28==1 || VAR_28>9)
        {
          FUNC_2(VAR_23, &VAR_25[5]);
          FUNC_16(VAR_23,VAR_7,0);
        }
        else
        {
          VAR_30[2] = VAR_29[(VAR_28&0x000f)];
          FUNC_5(VAR_23,VAR_5,VAR_30);
          FUNC_2(VAR_23, &VAR_25[5]);
          FUNC_16(VAR_23,VAR_14,0);
        }
        VAR_23->appl = VAR_24;
      }
      else
      {
        FUNC_15(VAR_24, VAR_16, VAR_20, 0, "w", VAR_17);
      }
    }
    else {
      VAR_23->appl = VAR_24;
      if(VAR_20 & VAR_6){
        if(FUNC_0(VAR_22, VAR_23, VAR_24, 0)){
          FUNC_11(1,FUNC_12("connect_res(error from AdvCodecSupport)"));
          FUNC_16(VAR_23,VAR_7,0);
          return 1;
        }
        if(VAR_23->tel == VAR_0 && VAR_22->AdvCodecPLCI)
        {
          VAR_27 = FUNC_4(VAR_23, &VAR_25[1]);
          if (VAR_27)
          {
            FUNC_11(1,FUNC_12("connect_res(error from add_b23)"));
            FUNC_16(VAR_23,VAR_7,0);
            return 1;
          }
          if(VAR_23->adv_nl)
          {
            FUNC_14(VAR_23, VAR_1, 0);
          }
        }
      }
      else
      {
        VAR_23->tel = 0;
        if(VAR_33!=2)
        {
          VAR_27 = FUNC_4(VAR_23, &VAR_25[1]);
          if (VAR_27)
          {
            FUNC_11(1,FUNC_12("connect_res(error from add_b23 2)"));
            FUNC_16(VAR_23,VAR_7,0);
            return 1;
          }
        }
        FUNC_14(VAR_23, VAR_1, 0);
      }

      if(VAR_23->spoofed_msg==VAR_15)
      {
        FUNC_8(VAR_25, "wsssss", &VAR_23->saved_msg);
        VAR_23->spoofed_msg = VAR_3;
        VAR_23->internal_command = VAR_2;
        VAR_23->command = 0;
        FUNC_11(1,FUNC_12("Spoof"));
      }
      else
      {
        FUNC_3 (VAR_23, &VAR_25[1], VAR_33, VAR_23->B1_facilities);
        if (VAR_22->Info_Mask[VAR_24->Id-1] & 0x200)
        {

          FUNC_5(VAR_23,VAR_13,"\x01\x01");
        }
        FUNC_6(VAR_23, VAR_4, &VAR_25[2]);
        FUNC_6(VAR_23, VAR_12, &VAR_25[4]);
        FUNC_2(VAR_23, &VAR_25[5]);
        VAR_23->State = VAR_8;
        FUNC_16(VAR_23, VAR_3,0);
      }

      for(VAR_26=0; VAR_26<VAR_19; VAR_26++) {
        if(FUNC_17 (VAR_23, VAR_26)) {
          FUNC_15(&VAR_18[VAR_26], VAR_16, VAR_20, 0, "w", VAR_17);
        }
      }
    }
  }
  return 1;
}
