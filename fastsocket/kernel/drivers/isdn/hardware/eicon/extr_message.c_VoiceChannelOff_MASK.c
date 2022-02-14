
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* adapter; } ;
struct TYPE_7__ {scalar_t__ AdvSignalPLCI; } ;
typedef TYPE_2__ PLCI ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ,char*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static void FUNC_6(PLCI *VAR_2)
{
  FUNC_2(1,FUNC_3("ExtDevOFF"));
  FUNC_0(VAR_2,VAR_0,"\x02\x01\x08");
  FUNC_5(VAR_2,VAR_1,0);
  FUNC_4(VAR_2);
  if(VAR_2->adapter->AdvSignalPLCI)
  {
    FUNC_1 (VAR_2->adapter->AdvSignalPLCI);
  }
}
