
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_3__ {int SendFifo; } ;
typedef TYPE_1__ TCPSOCK ;
typedef int SESSION ;


 int FUNC_0 (int ,void*,int ) ;

void FUNC_1(SESSION *VAR_0, TCPSOCK *VAR_1, void *VAR_2, UINT VAR_3)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 FUNC_0(VAR_1->SendFifo, VAR_2, VAR_3);
}
