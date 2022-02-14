
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* Data; int Lcp; } ;
typedef TYPE_1__ PPP_PACKET ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;

void FUNC_2(PPP_PACKET *VAR_0, bool VAR_1)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_1(VAR_0->Lcp);

 FUNC_0(VAR_0->Data);

 if (VAR_1 == 0)
 {
  FUNC_0(VAR_0);
 }
}
