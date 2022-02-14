
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t word ;
typedef scalar_t__ byte ;
struct TYPE_9__ {size_t listen_active; size_t max_plci; TYPE_1__* plci; scalar_t__ max_listen; int adapter_disabled; } ;
struct TYPE_8__ {int internal_command; int State; scalar_t__ notifiedcall; } ;
typedef TYPE_1__ PLCI ;
typedef TYPE_2__ DIVA_CAPI_ADAPTER ;


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
 int FUNC_0 (TYPE_1__*,int,char*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (char*,size_t,...) ;
 size_t FUNC_3 (TYPE_2__*) ;
 int VAR_11 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static void FUNC_6(DIVA_CAPI_ADAPTER *VAR_12)
{
  word VAR_13,VAR_14;
  PLCI * VAR_15;
  byte VAR_16 = 0;

  FUNC_1(1,FUNC_2("listen_check(%d,%d)",VAR_12->listen_active,VAR_12->max_listen));
  if (!VAR_11 && !VAR_12->adapter_disabled)
  {
    for(VAR_13=0;VAR_13<VAR_12->max_plci;VAR_13++)
    {
      VAR_15 = &(VAR_12->plci[VAR_13]);
      if(VAR_15->notifiedcall) VAR_16++;
    }
    FUNC_1(1,FUNC_2("listen_check(%d)",VAR_16));

    for(VAR_13=VAR_12->listen_active; VAR_13 < ((word)(VAR_12->max_listen+VAR_16)); VAR_13++) {
      if((VAR_14=FUNC_3(VAR_12))) {
        VAR_12->listen_active++;
        VAR_15 = &VAR_12->plci[VAR_14-1];
        VAR_15->State = VAR_4;

        FUNC_0(VAR_15,VAR_7,"\x01\xfd");

        FUNC_0(VAR_15,VAR_3,"\x04\x43\x41\x32\x30");

        FUNC_0(VAR_15,VAR_1,"\x01\xc0");
        FUNC_0(VAR_15,VAR_10,"\x06\x43\x61\x70\x69\x32\x30");
        FUNC_0(VAR_15,VAR_6,"\x01\xc4");
        FUNC_0(VAR_15,VAR_8|6,((void*)0));
        FUNC_0(VAR_15,VAR_9,"\x02\x00\x00");
        VAR_15->internal_command = VAR_5;
        FUNC_5(VAR_15,VAR_0,VAR_2);
        FUNC_4(VAR_15);
      }
    }
  }
}
