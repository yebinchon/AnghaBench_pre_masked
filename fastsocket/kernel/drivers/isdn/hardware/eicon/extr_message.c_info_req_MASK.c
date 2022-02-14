
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int word ;
typedef int dword ;
typedef int byte ;
struct TYPE_22__ {scalar_t__ length; int * info; } ;
struct TYPE_21__ {int NullCREnable; } ;
struct TYPE_20__ {TYPE_1__* plci; } ;
struct TYPE_19__ {TYPE_3__* appl; int internal_command; scalar_t__ State; } ;
typedef TYPE_1__ PLCI ;
typedef TYPE_2__ DIVA_CAPI_ADAPTER ;
typedef TYPE_3__ APPL ;
typedef TYPE_4__ API_PARSE ;


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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (TYPE_1__*,TYPE_4__*) ;
 int FUNC_1 (TYPE_1__*,int ,char*) ;
 int FUNC_2 (TYPE_1__*,int ,TYPE_4__*) ;
 scalar_t__ FUNC_3 (int *,int,char*,TYPE_4__*) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_3__*,int,int ,int,char*,int) ;
 int FUNC_9 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static byte FUNC_10(dword VAR_17, word VAR_18, DIVA_CAPI_ADAPTER *VAR_19,
       PLCI *VAR_20, APPL *VAR_21, API_PARSE *VAR_22)
{
  word VAR_23;
  API_PARSE * VAR_24;
  PLCI * VAR_25 = ((void*)0);
    API_PARSE VAR_26[5];
  word VAR_27 = 0;

  FUNC_4(1,FUNC_5("info_req"));
  for(VAR_23=0;VAR_23<5;VAR_23++) VAR_26[VAR_23].length = 0;

  VAR_24 = &VAR_22[1];

  if(VAR_24->length)
  {
    if(FUNC_3(&VAR_24->info[1],(word)VAR_24->length,"ssss",VAR_26))
    {
      FUNC_4(1,FUNC_5("AddInfo wrong"));
      VAR_27 = VAR_15;
    }
  }
  if(!VAR_19) VAR_27 = VAR_16;

  if(!VAR_27 && VAR_20)
  {
    VAR_25 = VAR_20;
    if(!VAR_26[3].length && VAR_20->State && (VAR_22[0].length || VAR_26[1].length) )
    {

      FUNC_4(1,FUNC_5("OvlSnd"));
      FUNC_2(VAR_20,VAR_3,&VAR_22[0]);
      FUNC_2(VAR_20,VAR_8,&VAR_26[1]);
      FUNC_9(VAR_20,VAR_7,0);
      FUNC_7(VAR_20);
      return 0;
    }

    if(VAR_20->State && VAR_26[2].length)
    {

      FUNC_4(1,FUNC_5("UUI"));
      FUNC_2(VAR_20,VAR_12,&VAR_26[2]);
      FUNC_9(VAR_20,VAR_11,0);
    }
    else if(VAR_20->State && VAR_26[3].length)
    {

      FUNC_4(1,FUNC_5("FAC"));
      FUNC_2(VAR_20,VAR_3,&VAR_22[0]);
      FUNC_0(VAR_20, &VAR_22[1]);
      FUNC_9(VAR_20,VAR_6,0);
    }
    else
    {
      VAR_27 = VAR_16;
    }
  }
  else if((VAR_26[1].length || VAR_26[2].length || VAR_26[3].length) && !VAR_27)
  {

    FUNC_4(1,FUNC_5("NCR_FAC"));
    if((VAR_23=FUNC_6(VAR_19)))
    {
      VAR_25 = &VAR_19->plci[VAR_23-1];
      VAR_21->NullCREnable = 1;
      VAR_25->internal_command = VAR_4;
      VAR_25->appl = VAR_21;
      FUNC_1(VAR_25,VAR_1,"\x01\x80");
      FUNC_1(VAR_25,VAR_10,"\x06\x43\x61\x70\x69\x32\x30");
      FUNC_9(VAR_25,VAR_0,VAR_5);
      FUNC_7(VAR_25);
    }
    else
    {
      VAR_27 = VAR_14;
    }

    if(!VAR_27)
    {
      FUNC_2(VAR_25,VAR_3,&VAR_22[0]);
      FUNC_0(VAR_25, &VAR_22[1]);
      FUNC_9(VAR_25,VAR_9,0);
      FUNC_7(VAR_25);
      return 0;

    }
  }

  if (!VAR_25)
  {
    VAR_27 = VAR_15;
  }

  if(!VAR_27)
  {
    FUNC_7(VAR_25);
  }
  else
  {
    FUNC_4(1,FUNC_5("localInfoCon"));
    FUNC_8(VAR_21,
          VAR_13|VAR_2,
          VAR_17,
          VAR_18,
          "w",VAR_27);
  }
  return 0;
}
