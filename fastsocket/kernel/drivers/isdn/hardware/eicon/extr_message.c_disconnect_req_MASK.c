
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef size_t word ;
typedef int dword ;
typedef int byte ;
struct TYPE_18__ {int Id; } ;
struct TYPE_16__ {scalar_t__ Id; } ;
struct TYPE_15__ {int Id; } ;
struct TYPE_17__ {scalar_t__ State; int nl_remove_id; TYPE_2__ NL; TYPE_1__ Sig; TYPE_4__* appl; } ;
typedef TYPE_3__ PLCI ;
typedef int DIVA_CAPI_ADAPTER ;
typedef TYPE_4__ APPL ;
typedef int API_PARSE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 int FUNC_0 (TYPE_3__*,int *) ;
 TYPE_4__* VAR_10 ;
 int FUNC_1 (TYPE_3__*,size_t) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (char*) ;
 size_t VAR_11 ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,int ,int ) ;
 int FUNC_6 (TYPE_4__*,int,int ,size_t,char*,size_t) ;
 int FUNC_7 (TYPE_3__*,int ,int ) ;
 scalar_t__ FUNC_8 (TYPE_3__*,size_t) ;

__attribute__((used)) static byte FUNC_9(dword VAR_12, word VAR_13, DIVA_CAPI_ADAPTER *VAR_14,
      PLCI *VAR_15, APPL *VAR_16, API_PARSE *VAR_17)
{
  word VAR_18;
  word VAR_19;

  FUNC_2(1,FUNC_3("disconnect_req"));

  VAR_18 = VAR_9;

  if(VAR_15)
  {
    if(VAR_15->State==VAR_3 || VAR_15->State==VAR_2)
    {
      FUNC_1 (VAR_15, (word)(VAR_16->Id-1));
      VAR_15->appl = VAR_16;
      for(VAR_19=0; VAR_19<VAR_11; VAR_19++)
      {
        if(FUNC_8 (VAR_15, VAR_19))
          FUNC_6(&VAR_10[VAR_19], VAR_7, VAR_12, 0, "w", 0);
      }
      VAR_15->State = VAR_5;
    }
    if(VAR_15->Sig.Id && VAR_15->appl)
    {
      VAR_18 = 0;
        if(VAR_15->Sig.Id!=0xff)
        {
          if(VAR_15->State!=VAR_4)
          {
            FUNC_0(VAR_15, &VAR_17[0]);
            FUNC_7(VAR_15,VAR_1,0);
            VAR_15->State = VAR_5;
            return 1;
          }
        }
        else
        {
          if (VAR_15->NL.Id && !VAR_15->nl_remove_id)
          {
            FUNC_4 (VAR_15);
            FUNC_5(VAR_15,VAR_6,0);
          FUNC_6(VAR_16,VAR_8|VAR_0,VAR_12,VAR_13,"w",0);
          FUNC_6(VAR_16, VAR_7, VAR_12, 0, "w", 0);
          VAR_15->State = VAR_4;
          }
          return 1;
        }
      }
    }

  if(!VAR_16) return 0;
  FUNC_6(VAR_16, VAR_8|VAR_0, VAR_12, VAR_13, "w",VAR_18);
  return 0;
}
