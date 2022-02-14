
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ word ;
typedef int dword ;
typedef int byte ;
struct TYPE_5__ {scalar_t__ State; } ;
typedef TYPE_1__ PLCI ;
typedef int DIVA_CAPI_ADAPTER ;
typedef int APPL ;
typedef int API_PARSE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int,int ,scalar_t__,char*,scalar_t__) ;
 int FUNC_4 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static byte FUNC_5(dword VAR_8, word VAR_9, DIVA_CAPI_ADAPTER *VAR_10,
        PLCI *VAR_11, APPL *VAR_12, API_PARSE *VAR_13)
{
  word VAR_14;
  byte VAR_15;

  FUNC_1(1,FUNC_2("alert_req"));

  VAR_14 = VAR_6;
  VAR_15 = 0;
  if(VAR_11) {
    VAR_14 = VAR_4;
    if(VAR_11->State!=VAR_2) {
      VAR_14 = VAR_7;
      if(VAR_11->State==VAR_3) {
        VAR_14 = 0;
        VAR_11->State=VAR_2;
        FUNC_0(VAR_11, &VAR_13[0]);
        FUNC_4(VAR_11,VAR_0,0);
        VAR_15 = 1;
      }
    }
  }
  FUNC_3(VAR_12,
        VAR_5|VAR_1,
        VAR_8,
        VAR_9,
        "w",VAR_14);
  return VAR_15;
}
