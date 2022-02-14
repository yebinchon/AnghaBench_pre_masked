
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t word ;
typedef int dword ;
typedef int byte ;
struct TYPE_12__ {int Id; } ;
struct TYPE_9__ {scalar_t__ Ind; } ;
struct TYPE_11__ {TYPE_4__* appl; TYPE_2__* adapter; TYPE_1__ Sig; int State; } ;
struct TYPE_10__ {size_t* Info_Mask; } ;
typedef TYPE_3__ PLCI ;
typedef TYPE_4__ APPL ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_4__* VAR_3 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (char*,...) ;
 size_t VAR_4 ;
 int FUNC_2 (TYPE_4__*,int ,int,int ,char*,size_t,int*) ;
 scalar_t__ FUNC_3 (TYPE_3__*,size_t) ;

__attribute__((used)) static byte FUNC_4(PLCI *VAR_5, dword VAR_6, byte **VAR_7, byte VAR_8,
   dword VAR_9, byte VAR_10)
{
  word VAR_11;
  word VAR_12;
  byte * VAR_13;
  word VAR_14;
  byte * VAR_15;
  APPL *VAR_16;
  word VAR_17 = 0;
  byte VAR_18=0;

  if(
      !VAR_5->appl
      && !VAR_5->State
      && VAR_5->Sig.Ind!=VAR_1
      && !VAR_10
      )
  {
    FUNC_0(1,FUNC_1("NoM-IEParse "));
    return 0;
  }
  FUNC_0(1,FUNC_1("M-IEParse "));

  for(VAR_11=0; VAR_11<VAR_0; VAR_11++)
  {
    VAR_13 = VAR_7[VAR_11];
    VAR_14 = 0;
    VAR_15 = VAR_13;
    if(VAR_13[0])
    {
      FUNC_0(1,FUNC_1("[Ind0x%x]:IE=0x%x",VAR_5->Sig.Ind,VAR_8));
      VAR_14 = (word)VAR_8;
      VAR_17 = (word)VAR_9;
    }

    if(VAR_5->Sig.Ind==VAR_1)
    {
      for(VAR_12=0; VAR_12<VAR_4; VAR_12++)
      {
        VAR_16 = &VAR_3[VAR_12];
        if(VAR_14
        && VAR_16->Id
        && VAR_5->adapter->Info_Mask[VAR_16->Id-1] &VAR_17)
        {
          VAR_18 = 1;
          FUNC_0(1,FUNC_1("Mlt_NCR_Ind"));
          FUNC_2(&VAR_3[VAR_12],VAR_2,VAR_6&0x0f,0,"wS",VAR_14,VAR_15);
        }
      }
    }
    else if(!VAR_5->appl && VAR_14)
    {
      for(VAR_12=0; VAR_12<VAR_4; VAR_12++)
      {
        if(FUNC_3 (VAR_5, VAR_12))
        {
          VAR_18 = 1;
          FUNC_0(1,FUNC_1("Mlt_Ovl_Ind"));
          FUNC_2(&VAR_3[VAR_12],VAR_2,VAR_6,0,"wS",VAR_14,VAR_15);
        }
      }
    }
    else if(VAR_14
    && VAR_5->adapter->Info_Mask[VAR_5->appl->Id-1] &VAR_17)
    {
      VAR_18 = 1;
      FUNC_0(1,FUNC_1("Mlt_Std_Ind"));
      FUNC_2(VAR_5->appl,VAR_2,VAR_6,0,"wS",VAR_14,VAR_15);
    }
  }
  return VAR_18;
}
