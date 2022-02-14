
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int Size; int Buf; } ;
struct TYPE_6__ {int TubeSend; int FlushList; } ;
typedef TYPE_1__ PPP_SESSION ;
typedef int PPP_PACKET ;
typedef TYPE_2__ BUF ;


 int FUNC_0 (int ,int ) ;
 TYPE_2__* FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,int ,int ,int *,int) ;

bool FUNC_4(PPP_SESSION *VAR_0, PPP_PACKET *VAR_1, bool VAR_2)
{
 bool VAR_3 = 0;
 BUF *VAR_4;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }

 VAR_4 = FUNC_1(VAR_1);
 if (VAR_4 == ((void*)0))
 {
  return 0;
 }

 VAR_3 = FUNC_3(VAR_0->TubeSend, VAR_4->Buf, VAR_4->Size, ((void*)0), VAR_2);

 if (VAR_2)
 {
  FUNC_0(VAR_0->FlushList, VAR_0->TubeSend);
 }

 FUNC_2(VAR_4);

 return VAR_3;
}
