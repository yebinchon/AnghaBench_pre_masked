
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int word ;
typedef int dword ;
typedef int byte ;
struct TYPE_11__ {int Id; } ;
struct TYPE_10__ {scalar_t__ State; int channels; } ;
typedef TYPE_1__ PLCI ;
typedef int DIVA_CAPI_ADAPTER ;
typedef TYPE_2__ APPL ;
typedef int API_PARSE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static byte FUNC_7(dword VAR_3, word VAR_4, DIVA_CAPI_ADAPTER *VAR_5,
      PLCI *VAR_6, APPL *VAR_7, API_PARSE *VAR_8)
{
  FUNC_2(1,FUNC_3("disconnect_res"));
  if(VAR_6)
  {


    FUNC_1 (VAR_6, (word)(VAR_7->Id-1));
    FUNC_4 (VAR_6, 0);
    if(FUNC_6(VAR_6))
    {
      return 0;
    }
    if(VAR_6->State==VAR_1
    || VAR_6->State==VAR_2) {
      if(FUNC_0 (VAR_6)) {
        if(VAR_6->State!=VAR_2)VAR_6->State = VAR_0;
        FUNC_2(1,FUNC_3("chs=%d",VAR_6->channels));
        if(!VAR_6->channels) {
          FUNC_5(VAR_6);
        }
      }
    }
  }
  return 0;
}
