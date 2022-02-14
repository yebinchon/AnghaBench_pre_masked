
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t word ;
typedef int dword ;
typedef int byte ;
struct TYPE_7__ {int * ncci_state; } ;
struct TYPE_6__ {int B3_prot; } ;
typedef TYPE_1__ PLCI ;
typedef TYPE_2__ DIVA_CAPI_ADAPTER ;
typedef int APPL ;
typedef int API_PARSE ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

__attribute__((used)) static byte FUNC_3(dword VAR_3, word VAR_4, DIVA_CAPI_ADAPTER *VAR_5,
    PLCI *VAR_6, APPL *VAR_7, API_PARSE *VAR_8)
{
  word VAR_9;

  FUNC_0(1,FUNC_1("reset_b3_res"));

  VAR_9 = (word)(VAR_3>>16);
  if(VAR_6 && VAR_9) {
    switch (VAR_6->B3_prot)
    {
    case 129:
    case 128:
      if(VAR_5->ncci_state[VAR_9]==VAR_1)
      {
        VAR_5->ncci_state[VAR_9] = VAR_0;
        FUNC_2(VAR_6,VAR_2,(byte)VAR_9);
        return 1;
      }
    break;
    }
  }
  return 0;
}
