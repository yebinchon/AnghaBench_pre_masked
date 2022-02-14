
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int LastRecvTime; int TubeRecv; } ;
struct TYPE_7__ {int DataSize; int Data; } ;
typedef TYPE_1__ TUBEDATA ;
typedef TYPE_2__ PPP_SESSION ;
typedef int PPP_PACKET ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int * FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 TYPE_1__* FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (int ,int ) ;

PPP_PACKET *FUNC_5(PPP_SESSION *VAR_1, bool VAR_2)
{
 TUBEDATA *VAR_3;
 PPP_PACKET *VAR_4;

 if (VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }

LABEL_LOOP:

 if (VAR_2 == 0)
 {
  VAR_3 = FUNC_4(VAR_1->TubeRecv, VAR_0);
 }
 else
 {
  VAR_3 = FUNC_3(VAR_1->TubeRecv);
 }

 if (VAR_3 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_4 = FUNC_1(VAR_3->Data, VAR_3->DataSize);
 FUNC_0(VAR_3);

 if (VAR_4 == ((void*)0))
 {

  goto LABEL_LOOP;
 }

 VAR_1->LastRecvTime = FUNC_2();

 return VAR_4;
}
