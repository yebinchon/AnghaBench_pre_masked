
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_3__ {scalar_t__ Type; int Connected; int SendTube; scalar_t__ Disconnecting; } ;
typedef TYPE_1__ SOCK ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,void*,int ,int *) ;

UINT FUNC_2(SOCK *VAR_1, void *VAR_2, UINT VAR_3)
{
 if (VAR_1 == ((void*)0) || VAR_1->Type != VAR_0 || VAR_1->Disconnecting || VAR_1->Connected == 0)
 {
  return 0;
 }

 if (FUNC_0(VAR_1->SendTube) == 0)
 {
  return 0;
 }

 if (FUNC_1(VAR_1->SendTube, VAR_2, VAR_3, ((void*)0)) == 0)
 {
  return 0;
 }

 return VAR_3;
}
