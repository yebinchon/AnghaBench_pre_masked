
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int word ;
struct TYPE_10__ {int automatic_law; TYPE_1__* automatic_lawPLCI; TYPE_1__* plci; } ;
struct TYPE_9__ {scalar_t__ number; scalar_t__ command; int internal_command; } ;
typedef TYPE_1__ PLCI ;
typedef TYPE_2__ DIVA_CAPI_ADAPTER ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,int ,char*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ,int ) ;

void FUNC_5(DIVA_CAPI_ADAPTER *VAR_5)
{
  word VAR_6;
  PLCI *VAR_7;

  if(VAR_5->automatic_law) {
    return;
  }
  if((VAR_6=FUNC_2(VAR_5))) {
    FUNC_1 (VAR_5);
    VAR_7 = &VAR_5->plci[VAR_6-1];
    VAR_5->automatic_lawPLCI = VAR_7;
    VAR_5->automatic_law = 1;
    FUNC_0(VAR_7,VAR_1,"\x01\x80");
    FUNC_0(VAR_7,VAR_3,"\x06\x43\x61\x70\x69\x32\x30");
    VAR_7->internal_command = VAR_4;
    VAR_7->command = 0;
    VAR_7->number = 0;
    FUNC_4(VAR_7,VAR_0,VAR_2);
    FUNC_3(VAR_7);
  }
}
