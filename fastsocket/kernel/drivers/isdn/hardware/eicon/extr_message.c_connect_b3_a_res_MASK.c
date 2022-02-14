
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t word ;
typedef int dword ;
typedef int byte ;
struct TYPE_8__ {scalar_t__* ncci_state; int * ncci_ch; } ;
struct TYPE_7__ {scalar_t__ State; } ;
typedef TYPE_1__ PLCI ;
typedef TYPE_2__ DIVA_CAPI_ADAPTER ;
typedef int APPL ;
typedef int API_PARSE ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (char*,size_t) ;

__attribute__((used)) static byte FUNC_4(dword VAR_6, word VAR_7, DIVA_CAPI_ADAPTER *VAR_8,
        PLCI *VAR_9, APPL *VAR_10, API_PARSE *VAR_11)
{
  word VAR_12;

  VAR_12 = (word)(VAR_6>>16);
  FUNC_2(1,FUNC_3("connect_b3_a_res(ncci=0x%x)",VAR_12));

  if (VAR_9 && VAR_12 && (VAR_9->State != VAR_1) && (VAR_9->State != VAR_4)
   && (VAR_9->State != VAR_5))
  {
    if(VAR_8->ncci_state[VAR_12]==VAR_2) {
      VAR_8->ncci_state[VAR_12] = VAR_0;
      if(VAR_9->State!=VAR_3) VAR_9->State = VAR_0;
      FUNC_0 (VAR_9, VAR_8->ncci_ch[VAR_12]);
      FUNC_1 (VAR_9);
    }
  }
  return 0;
}
