
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_5__ ;
typedef struct TYPE_32__ TYPE_4__ ;
typedef struct TYPE_31__ TYPE_3__ ;
typedef struct TYPE_30__ TYPE_2__ ;
typedef struct TYPE_29__ TYPE_1__ ;


typedef int word ;
typedef int dword ;
typedef int byte ;
struct TYPE_33__ {int length; int* info; } ;
struct TYPE_32__ {int Id; } ;
struct TYPE_31__ {int Id; int* Info_Mask; size_t u_law; TYPE_2__* plci; scalar_t__ adapter_disabled; } ;
struct TYPE_29__ {int Id; } ;
struct TYPE_30__ {int call_dir; int b_channel; int command; int number; scalar_t__ spoofed_msg; scalar_t__ Id; TYPE_4__* appl; int internal_command; int saved_msg; int adv_nl; scalar_t__ tel; TYPE_1__ Sig; int State; } ;
typedef TYPE_2__ PLCI ;
typedef TYPE_3__ DIVA_CAPI_ADAPTER ;
typedef TYPE_4__ APPL ;
typedef TYPE_5__ API_PARSE ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__*,TYPE_2__*,TYPE_4__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 size_t FUNC_1 (int*) ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_2 (TYPE_2__*,TYPE_5__*) ;
 int FUNC_3 (TYPE_2__*,TYPE_5__*,int,int ) ;
 int FUNC_4 (TYPE_2__*,TYPE_5__*) ;
 int FUNC_5 (TYPE_2__*,int,...) ;
 int FUNC_6 (TYPE_2__*,int,TYPE_5__*) ;
 int FUNC_7 (int*,int,char*,TYPE_5__*) ;
 int FUNC_8 (TYPE_5__*,char*,int *) ;
 char*** VAR_30 ;
 char** VAR_31 ;
 int FUNC_9 (int,int ) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (TYPE_2__*,scalar_t__,int ) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (TYPE_4__*,int,int,int,char*,int) ;
 int FUNC_15 (TYPE_2__*,scalar_t__,int ) ;

__attribute__((used)) static byte FUNC_16(dword VAR_32, word VAR_33, DIVA_CAPI_ADAPTER *VAR_34,
   PLCI *VAR_35, APPL *VAR_36, API_PARSE *VAR_37)
{
  word VAR_38;
  word VAR_39;
  word VAR_40;
  word VAR_41;
  byte VAR_42;
  API_PARSE * VAR_43;
  API_PARSE * VAR_44;
    API_PARSE VAR_45[5];
  word VAR_46 = 0;
  dword VAR_47;
  byte VAR_48;
  static byte VAR_49[35] = {0x02,0x18,0x01};
  static byte VAR_50[2] = {0x01,0x00};
  byte VAR_51 = 0;
  word VAR_52 = 0;
  byte *VAR_53 = "";

  for(VAR_39=0;VAR_39<5;VAR_39++) VAR_45[VAR_39].length = 0;

  FUNC_9(1,FUNC_10("connect_req(%d)",VAR_37->length));
  VAR_40 = VAR_28;
  if(VAR_34)
  {
    if(VAR_34->adapter_disabled)
    {
      FUNC_9(1,FUNC_10("adapter disabled"));
      VAR_32 = ((word)1<<8)|VAR_34->Id;
      FUNC_14(VAR_36,VAR_24|VAR_8,VAR_32,VAR_33,"w",0);
      FUNC_14(VAR_36, VAR_25, VAR_32, 0, "w", VAR_26);
      return 0;
    }
    VAR_40 = VAR_27;
    if((VAR_39=FUNC_11(VAR_34)))
    {
      VAR_40 = 0;
      VAR_35 = &VAR_34->plci[VAR_39-1];
      VAR_35->appl = VAR_36;
      VAR_35->call_dir = VAR_5 | VAR_4;

      if(VAR_32 & VAR_13)
      {
        if(FUNC_0(VAR_34, VAR_35, VAR_36, 0) )
        {
          VAR_35->Id = 0;
          FUNC_14(VAR_36, VAR_24|VAR_8, VAR_32, VAR_33, "w", VAR_28);
          return 2;
        }
      }
      VAR_43 = &VAR_37[9];
      VAR_44 = &VAR_37[5];
      VAR_38 = 0;
      if(VAR_44->length)VAR_42 = VAR_44->info[3];
      else VAR_42 = 0;
      if(VAR_43->length)
      {
        VAR_38=0xffff;
        if(!FUNC_7(&VAR_43->info[1],(word)VAR_43->length,"ssss",VAR_45))
        {
          VAR_38 = 0;
          if(VAR_45[0].length)
          {
            VAR_38 = FUNC_1(VAR_45[0].info+1);
            if(VAR_38>4) VAR_38=0;
            if(VAR_38==4)
            {

              if((VAR_45[0].info)[3]>=1)
              {
                if((VAR_45[0].info)[4]==VAR_7)
                {
                  VAR_53 = &((VAR_45[0].info)[5]);
                }
                else
                {
                  VAR_53 = &((VAR_45[0].info)[3]);
                }
                if(VAR_53[0]>35)
                {
                  VAR_40 = VAR_29;
                }
              }
              else VAR_40 = VAR_29;
            }

            if(VAR_38==3 && VAR_45[0].length>=7 && VAR_45[0].length<=36)
            {
              VAR_52 = FUNC_1(VAR_45[0].info+3);
              VAR_47 = 0;
              VAR_48 = 0x3f;
              for(VAR_39=0; VAR_39+5<=VAR_45[0].length; VAR_39++)
              {
                if(VAR_45[0].info[VAR_39+5]!=0)
                {
                  if((VAR_45[0].info[VAR_39+5] | VAR_48) != 0xff)
                    VAR_40 = VAR_29;
                  else
                  {
                    if (VAR_47 == 0)
                      VAR_46 = VAR_39;
                    VAR_47 |= 1L << VAR_39;
                  }
                }
                VAR_48 = 0;
              }
              if (VAR_47 == 0)
                VAR_40 = VAR_29;
              if (!VAR_40)
              {
                if ((VAR_45[0].length == 36) || (VAR_47 != ((dword)(1L << VAR_46))))
                {
                  VAR_49[0] = (byte)(VAR_45[0].length - 2);
                  for(VAR_39=0; VAR_39+5<=VAR_45[0].length; VAR_39++)
                    VAR_49[VAR_39+3] = VAR_45[0].info[VAR_39+5];
                }
                else
                  VAR_49[0] = 2;
                VAR_49[2] = (byte)VAR_46;
                VAR_35->b_channel = (byte)VAR_46;
                FUNC_5(VAR_35,VAR_17,VAR_50);
                FUNC_5(VAR_35,VAR_12,VAR_49);
                VAR_35->State = VAR_18;
                if(!VAR_52) VAR_35->call_dir |= VAR_3;
              }
            }
          }
        }
        else VAR_40 = VAR_29;
      }

      FUNC_9(1,FUNC_10("ch=%x,dir=%x,p_ch=%d",VAR_38,VAR_52,VAR_46));
      VAR_35->command = VAR_24;
      VAR_35->number = VAR_33;

      if(VAR_38==1 && VAR_42!=3 && VAR_42!=12) VAR_51 = 1;
      if((VAR_38==0 || VAR_38==2 || VAR_51 || VAR_38==3 || VAR_38==4) && !VAR_40)
      {


        if(VAR_51) VAR_40 = FUNC_3(VAR_35,&VAR_37[5],2,0);
        else VAR_40 = FUNC_3(VAR_35,&VAR_37[5],VAR_38,0);
        FUNC_6(VAR_35,VAR_19,&VAR_37[2]);
        FUNC_6(VAR_35,VAR_20,&VAR_37[4]);
        FUNC_6(VAR_35,VAR_1,&VAR_37[6]);
        FUNC_6(VAR_35,VAR_16,&VAR_37[7]);
        FUNC_6(VAR_35,VAR_14,&VAR_37[8]);
        VAR_41 = FUNC_1(VAR_37[0].info);
        if (VAR_34->Info_Mask[VAR_36->Id-1] & 0x200)
        {

          FUNC_5(VAR_35,VAR_17,"\x01\x01");
        }
        if(FUNC_1(VAR_37[0].info)<29) {
          FUNC_5(VAR_35,VAR_1,VAR_30[FUNC_1(VAR_37[0].info)][VAR_34->u_law]);
          FUNC_5(VAR_35,VAR_14,VAR_31[FUNC_1(VAR_37[0].info)]);
        }
        FUNC_5(VAR_35,VAR_23,"\x06\x43\x61\x70\x69\x32\x30");
        FUNC_15(VAR_35,VAR_0,VAR_11);
      }
      else if(VAR_38==1) {


        VAR_35->Sig.Id = 0xff;
        VAR_40 = 0;
      }

      if(!VAR_40 && VAR_38!=2 && !VAR_51 ) {
        VAR_40 = FUNC_4(VAR_35,&VAR_37[5]);
        if(!VAR_40) {
          if(!(VAR_35->tel && !VAR_35->adv_nl))FUNC_12(VAR_35,VAR_0,0);
        }
      }

      if(!VAR_40)
      {
        if(VAR_38==0 || VAR_38==2 || VAR_38==3 || VAR_51 || VAR_38==4)
        {
          if(VAR_35->spoofed_msg==VAR_22)
          {
            FUNC_8(VAR_37, "wsssssssss", &VAR_35->saved_msg);
            VAR_35->spoofed_msg = VAR_6;
            VAR_35->internal_command = VAR_2;
            VAR_35->command = 0;
            FUNC_9(1,FUNC_10("Spoof"));
            FUNC_13(VAR_35);
            return 0;
          }
          if(VAR_38==4)FUNC_5(VAR_35,VAR_7,VAR_53);
          FUNC_6(VAR_35,VAR_9,&VAR_37[1]);
          FUNC_6(VAR_35,VAR_10,&VAR_37[3]);
          if(VAR_51) FUNC_5(VAR_35,VAR_12,"\x02\x18\xfd");
          FUNC_2(VAR_35,&VAR_37[9]);
          if(!VAR_52)FUNC_15(VAR_35,VAR_6,0);
          else
          {
            VAR_35->command = VAR_21;
            VAR_35->appl = VAR_36;
            FUNC_15(VAR_35,VAR_15,0);
            FUNC_13(VAR_35);
            return 0;
          }
        }
        FUNC_13(VAR_35);
        return 0;
      }
      VAR_35->Id = 0;
    }
  }
  FUNC_14(VAR_36,
        VAR_24|VAR_8,
        VAR_32,
        VAR_33,
        "w",VAR_40);
  return 2;
}
