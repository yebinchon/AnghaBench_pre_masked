
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_6__ {int Weight; TYPE_1__* Cedar; } ;
struct TYPE_5__ {int CurrentSessions; } ;
typedef TYPE_2__ SERVER ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;

UINT FUNC_2(SERVER *VAR_0)
{
 UINT VAR_1;

 if (VAR_0 == ((void*)0))
 {
  return 0;
 }

 VAR_1 = FUNC_0(VAR_0->Cedar->CurrentSessions);

 return FUNC_1(VAR_0, VAR_1, VAR_0->Weight);
}
