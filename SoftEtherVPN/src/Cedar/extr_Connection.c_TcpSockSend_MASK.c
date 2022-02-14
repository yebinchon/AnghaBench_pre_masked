
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_6__ {int UseEncrypt; } ;
struct TYPE_5__ {int Sock; } ;
typedef TYPE_1__ TCPSOCK ;
typedef TYPE_2__ SESSION ;


 int FUNC_0 (int ,void*,int ,int ) ;

UINT FUNC_1(SESSION *VAR_0, TCPSOCK *VAR_1, void *VAR_2, UINT VAR_3)
{

 return FUNC_0(VAR_1->Sock, VAR_2, VAR_3, VAR_0->UseEncrypt);
}
