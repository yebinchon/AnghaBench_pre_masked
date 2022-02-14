
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t word ;
typedef int dword ;
typedef int byte ;
struct TYPE_9__ {int * ncci_state; } ;
struct TYPE_8__ {int B3_prot; } ;
typedef TYPE_1__ PLCI ;
typedef TYPE_2__ DIVA_CAPI_ADAPTER ;
typedef int APPL ;
typedef int API_PARSE ;





 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int VAR_7 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,int,int,size_t,char*,size_t) ;
 int FUNC_5 (int,TYPE_1__*,int ) ;

__attribute__((used)) static byte FUNC_6(dword VAR_8, word VAR_9, DIVA_CAPI_ADAPTER *VAR_10,
    PLCI *VAR_11, APPL *VAR_12, API_PARSE *VAR_13)
{
  word VAR_14;
  word VAR_15;

  FUNC_0(1,FUNC_1("reset_b3_req"));

  VAR_14 = VAR_5;
  VAR_15 = (word)(VAR_8>>16);
  if(VAR_11 && VAR_15)
  {
    VAR_14 = VAR_6;
    switch (VAR_11->B3_prot)
    {
    case 130:
    case 128:
      if(VAR_10->ncci_state[VAR_15]==VAR_1)
      {
        FUNC_2(VAR_11,VAR_3,(byte)VAR_15);
        FUNC_3(VAR_11);
        VAR_14 = VAR_2;
      }
      break;
    case 129:
      if(VAR_10->ncci_state[VAR_15]==VAR_1)
      {
        FUNC_5 (VAR_8, VAR_11, VAR_7);
        VAR_14 = VAR_2;
      }
      break;
    }
  }

  FUNC_4(VAR_12,
        VAR_4|VAR_0,
        VAR_8,
        VAR_9,
        "w",VAR_14);
  return 0;
}
