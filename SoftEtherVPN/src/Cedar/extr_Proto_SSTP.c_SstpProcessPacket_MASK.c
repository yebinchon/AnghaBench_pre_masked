
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ IsControl; } ;
struct TYPE_9__ {int Now; int LastRecvTick; } ;
typedef TYPE_1__ SSTP_SERVER ;
typedef TYPE_2__ SSTP_PACKET ;


 int FUNC_0 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*) ;

void FUNC_2(SSTP_SERVER *VAR_0, SSTP_PACKET *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 VAR_0->LastRecvTick = VAR_0->Now;

 if (VAR_1->IsControl)
 {

  FUNC_0(VAR_0, VAR_1);
 }
 else
 {

  FUNC_1(VAR_0, VAR_1);
 }
}
