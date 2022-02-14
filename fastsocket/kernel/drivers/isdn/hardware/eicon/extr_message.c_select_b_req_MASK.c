
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


typedef int word ;
typedef int dword ;
typedef int byte ;
struct TYPE_27__ {scalar_t__ length; int * info; } ;
struct TYPE_26__ {int Id; } ;
struct TYPE_25__ {TYPE_4__* AdvSignalAppl; scalar_t__ AdvSignalPLCI; } ;
struct TYPE_23__ {int Id; } ;
struct TYPE_24__ {int tel; scalar_t__ SuppState; scalar_t__ State; scalar_t__ spoofed_msg; int call_dir; scalar_t__ adv_nl; scalar_t__ command; int internal_command; int saved_msg; TYPE_4__* appl; scalar_t__ nl_remove_id; scalar_t__ channels; TYPE_1__ NL; int Id; } ;
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
 int VAR_6 ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ FUNC_2 (int *,int,char*,TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*,char*,int *) ;
 TYPE_4__* VAR_21 ;
 int FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (TYPE_2__*) ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_8 (TYPE_4__*,int,int,int,char*,int) ;
 int FUNC_9 (int,TYPE_2__*,int ) ;
 scalar_t__ FUNC_10 (TYPE_2__*,int) ;

__attribute__((used)) static byte FUNC_11(dword VAR_24, word VAR_25, DIVA_CAPI_ADAPTER *VAR_26,
    PLCI *VAR_27, APPL *VAR_28, API_PARSE *VAR_29)
{
  word VAR_30=0;
  word VAR_31;
  byte VAR_32;
    API_PARSE VAR_33[7];

  if(!VAR_27 || !VAR_29)
  {
    VAR_30 = VAR_18;
  }
  else
  {
    FUNC_5(1,FUNC_6("select_b_req[%d],PLCI=0x%x,Tel=0x%x,NL=0x%x,appl=0x%x,sstate=0x%x",
                   VAR_29->length,VAR_27->Id,VAR_27->tel,VAR_27->NL.Id,VAR_27->appl,VAR_27->SuppState));
    FUNC_5(1,FUNC_6("PlciState=0x%x",VAR_27->State));
    for(VAR_31=0;VAR_31<7;VAR_31++) VAR_33[VAR_31].length = 0;


    if((VAR_27->State == VAR_8) || (VAR_27->State == VAR_13) || (VAR_27->State == VAR_12)
     || (VAR_27->SuppState != VAR_8) || VAR_27->channels || VAR_27->nl_remove_id)
    {
      VAR_30 = VAR_20;
    }

    else if(VAR_29->length && FUNC_2(&VAR_29->info[1], (word)VAR_29->length, "wwwsss", VAR_33))
    {
      VAR_30 = VAR_19;
    }
    else
    {
      if((VAR_27->State==VAR_11) || (VAR_27->State==VAR_9))
      {
        if(VAR_24 & VAR_7)
        {
          FUNC_8(VAR_28, VAR_17|VAR_6, VAR_24, VAR_25, "w", 0x2002);
          return 0;
        }
        VAR_27->State=VAR_10;
        VAR_27->appl = VAR_28;
        FUNC_4 (VAR_27, (word)(VAR_28->Id-1));
        FUNC_7 (VAR_27);
        for(VAR_31=0; VAR_31<VAR_22; VAR_31++)
        {
          if(FUNC_10 (VAR_27, VAR_31))
            FUNC_8(&VAR_21[VAR_31], VAR_15, VAR_24, 0, "w", VAR_16);
        }
      }

      FUNC_3(VAR_29, "s", &VAR_27->saved_msg);
      VAR_32 = VAR_27->tel;
      if(VAR_24 & VAR_7)
      {
        if(VAR_32)
        {
          if(VAR_26->AdvSignalAppl && VAR_26->AdvSignalAppl!=VAR_28)
          {
            FUNC_5(1,FUNC_6("Ext_Ctrl in use 1"));
            VAR_30 = VAR_20;
          }
        }
        else
        {
          if(VAR_26->AdvSignalPLCI)
          {
            FUNC_5(1,FUNC_6("Ext_Ctrl in use 2"));
            VAR_30 = VAR_20;
          }
          else
          {
            FUNC_5(1,FUNC_6("Ext_Ctrl start"));
            if(FUNC_0(VAR_26, VAR_27, VAR_28, 0) )
            {
              FUNC_5(1,FUNC_6("Error in codec procedures"));
              VAR_30 = VAR_20;
            }
            else if(VAR_27->spoofed_msg==VAR_14)
            {
              VAR_27->spoofed_msg = VAR_0;
              VAR_27->internal_command = VAR_1;
              VAR_27->command = 0;
              FUNC_5(1,FUNC_6("continue if codec loaded"));
              return 0;
            }
          }
        }
      }
      else
      {
        if(VAR_32)
        {
          if(VAR_26->AdvSignalAppl==VAR_28)
          {
            FUNC_1(VAR_26, VAR_27);
            VAR_27->tel = 0;
            VAR_27->adv_nl = 0;
            FUNC_5(1,FUNC_6("Ext_Ctrl disable"));
          }
          else
          {
            FUNC_5(1,FUNC_6("Ext_Ctrl not requested"));
          }
        }
      }
      if (!VAR_30)
      {
        if (VAR_27->call_dir & VAR_5)
          VAR_27->call_dir = VAR_5 | VAR_4;
        else if (VAR_27->call_dir & VAR_3)
          VAR_27->call_dir = VAR_3 | VAR_2;
        FUNC_9 (VAR_24, VAR_27, VAR_23);
        return 0;
      }
    }
  }
  FUNC_8(VAR_28, VAR_17|VAR_6, VAR_24, VAR_25, "w", VAR_30);
  return 0;
}
