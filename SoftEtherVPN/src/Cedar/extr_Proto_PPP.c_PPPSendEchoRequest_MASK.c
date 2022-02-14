
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int echo_data ;
struct TYPE_11__ {int DataSize; int Data; } ;
struct TYPE_10__ {int IsControl; TYPE_7__* Lcp; int Protocol; } ;
struct TYPE_9__ {int NextId; } ;
typedef TYPE_1__ PPP_SESSION ;
typedef TYPE_2__ PPP_PACKET ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_7__* FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_4 (int) ;

void FUNC_5(PPP_SESSION *VAR_2)
{
 PPP_PACKET *VAR_3;
 char VAR_4[]= "\0\0\0\0Aho Baka Manuke";

 if (VAR_2 == ((void*)0))
 {
  return;
 }

 VAR_3 = FUNC_4(sizeof(PPP_PACKET));
 VAR_3->Protocol = VAR_1;
 VAR_3->IsControl = 1;
 VAR_3->Lcp = FUNC_2(VAR_0, VAR_2->NextId++);

 VAR_3->Lcp->Data = FUNC_0(VAR_4, sizeof(VAR_4));
 VAR_3->Lcp->DataSize = sizeof(VAR_4);

 FUNC_3(VAR_2, VAR_3);

 FUNC_1(VAR_3);
}
