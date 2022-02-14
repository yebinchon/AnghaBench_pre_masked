
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_8__ {int HashesList; } ;
struct TYPE_7__ {char* Name; scalar_t__ HashSize; scalar_t__ HashId; } ;
typedef TYPE_1__ IKE_HASH ;
typedef TYPE_2__ IKE_ENGINE ;


 int FUNC_0 (int ,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int) ;

IKE_HASH *FUNC_2(IKE_ENGINE *VAR_0, UINT VAR_1, char *VAR_2, UINT VAR_3)
{
 IKE_HASH *VAR_4;

 if (VAR_0 == ((void*)0) || VAR_2 == ((void*)0) || VAR_3 == 0)
 {
  return ((void*)0);
 }

 VAR_4 = FUNC_1(sizeof(IKE_HASH));

 VAR_4->HashId = VAR_1;
 VAR_4->Name = VAR_2;
 VAR_4->HashSize = VAR_3;

 FUNC_0(VAR_0->HashesList, VAR_4);

 return VAR_4;
}
