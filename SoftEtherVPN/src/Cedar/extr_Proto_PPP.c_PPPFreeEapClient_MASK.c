
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * EapClient; } ;
typedef TYPE_1__ PPP_SESSION ;


 int FUNC_0 (int *) ;

void FUNC_1(PPP_SESSION *VAR_0)
{
 if (VAR_0 == ((void*)0))
 {
  return;
 }

 if (VAR_0->EapClient != ((void*)0))
 {
  FUNC_0(VAR_0->EapClient);
  VAR_0->EapClient = ((void*)0);
 }
}
