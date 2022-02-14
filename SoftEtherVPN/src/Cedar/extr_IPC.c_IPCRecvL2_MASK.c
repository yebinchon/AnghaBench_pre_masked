
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* Sock; } ;
struct TYPE_8__ {struct TYPE_8__* Header; int DataSize; int Data; } ;
struct TYPE_7__ {int RecvTube; } ;
typedef TYPE_2__ TUBEDATA ;
typedef TYPE_3__ IPC ;
typedef int BLOCK ;


 int FUNC_0 (TYPE_2__*) ;
 int * FUNC_1 (int ,int ,int ) ;
 TYPE_2__* FUNC_2 (int ) ;

BLOCK *FUNC_3(IPC *VAR_0)
{
 TUBEDATA *VAR_1;
 BLOCK *VAR_2;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 if (VAR_0->Sock == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_1 = FUNC_2(VAR_0->Sock->RecvTube);

 if (VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_2 = FUNC_1(VAR_1->Data, VAR_1->DataSize, 0);

 FUNC_0(VAR_1->Header);
 FUNC_0(VAR_1);

 return VAR_2;
}
