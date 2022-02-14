
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t word ;
typedef int dword ;
typedef int byte ;
struct TYPE_6__ {int* info; int length; } ;
struct TYPE_5__ {scalar_t__* ncci_state; } ;
typedef int PLCI ;
typedef TYPE_1__ DIVA_CAPI_ADAPTER ;
typedef int APPL ;
typedef TYPE_2__ API_PARSE ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,size_t,int*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int,int) ;

__attribute__((used)) static byte FUNC_4(dword VAR_5, word VAR_6, DIVA_CAPI_ADAPTER *VAR_7,
     PLCI *VAR_8, APPL *VAR_9, API_PARSE *VAR_10)
{
  word VAR_11;
  API_PARSE * VAR_12;
  byte VAR_13;

  FUNC_1(1,FUNC_2("connect_b3_t90_a_res"));

  VAR_11 = (word)(VAR_5>>16);
  if(VAR_8 && VAR_11) {
    if(VAR_7->ncci_state[VAR_11]==VAR_1) {
      VAR_7->ncci_state[VAR_11] = VAR_0;
    }
    else if(VAR_7->ncci_state[VAR_11]==VAR_2) {
      VAR_7->ncci_state[VAR_11] = VAR_0;

      VAR_13 = VAR_3;


      if(VAR_10[0].info) {
        VAR_12 = &VAR_10[1];
        if(VAR_12->length>2) {
          if(VAR_12->info[1] &1) VAR_13 = VAR_3 | VAR_4;
          FUNC_0(VAR_8,(word)(VAR_12->length-3),&VAR_12->info[4]);
        }
      }
      FUNC_3(VAR_8,VAR_13,(byte)VAR_11);
      return 1;
    }
  }
  return 0;
}
