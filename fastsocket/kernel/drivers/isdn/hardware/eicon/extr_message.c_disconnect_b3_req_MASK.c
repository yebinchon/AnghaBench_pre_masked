
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef size_t word ;
typedef int dword ;
typedef int byte ;
struct TYPE_16__ {int length; int * info; } ;
struct TYPE_15__ {scalar_t__* ncci_state; TYPE_1__* ncci; int * ncci_ch; } ;
struct TYPE_14__ {int B3_prot; int send_disc; scalar_t__ command; } ;
struct TYPE_13__ {scalar_t__ data_pending; } ;
typedef TYPE_2__ PLCI ;
typedef TYPE_3__ DIVA_CAPI_ADAPTER ;
typedef int APPL ;
typedef TYPE_4__ API_PARSE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 int FUNC_0 (TYPE_2__*,size_t,int*) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,size_t) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (TYPE_2__*,int ,int) ;
 int FUNC_7 (int *,int,int,size_t,char*,size_t) ;

__attribute__((used)) static byte FUNC_8(dword VAR_13, word VAR_14, DIVA_CAPI_ADAPTER *VAR_15,
         PLCI *VAR_16, APPL *VAR_17, API_PARSE *VAR_18)
{
  word VAR_19;
  word VAR_20;
  API_PARSE * VAR_21;

  FUNC_4(1,FUNC_5("disconnect_b3_req"));

  VAR_19 = VAR_11;
  VAR_20 = (word)(VAR_13>>16);
  if (VAR_16 && VAR_20)
  {
    VAR_19 = VAR_12;
    if ((VAR_15->ncci_state[VAR_20] == VAR_4)
     || (VAR_15->ncci_state[VAR_20] == VAR_8)
     || (VAR_15->ncci_state[VAR_20] == VAR_6)
     || (VAR_15->ncci_state[VAR_20] == VAR_5))
    {
      VAR_15->ncci_state[VAR_20] = VAR_9;
      FUNC_1 (VAR_16, VAR_15->ncci_ch[VAR_20]);
      FUNC_2 (VAR_16);

      if (VAR_15->ncci[VAR_20].data_pending
       && ((VAR_16->B3_prot == VAR_2)
        || (VAR_16->B3_prot == VAR_0)
        || (VAR_16->B3_prot == VAR_1)))
      {
        VAR_16->send_disc = (byte)VAR_20;
        VAR_16->command = 0;
        return 0;
      }
      else
      {
        FUNC_3 (VAR_16, VAR_20);

        if(VAR_16->B3_prot==2 || VAR_16->B3_prot==3)
        {
          VAR_21 = &VAR_18[0];
          if(VAR_21->length>3)
          {
            FUNC_0(VAR_16, (word)(VAR_21->length - 3) ,(byte *)&(VAR_21->info[4]));
          }
        }
        FUNC_6(VAR_16,VAR_7,(byte)VAR_20);
      }
      return 1;
    }
  }
  FUNC_7(VAR_17,
        VAR_10|VAR_3,
        VAR_13,
        VAR_14,
        "w",VAR_19);
  return 0;
}
