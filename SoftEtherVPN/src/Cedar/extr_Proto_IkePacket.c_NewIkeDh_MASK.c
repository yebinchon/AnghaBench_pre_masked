
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_8__ {char* Name; scalar_t__ KeySize; scalar_t__ DhId; } ;
struct TYPE_7__ {int DhsList; } ;
typedef TYPE_1__ IKE_ENGINE ;
typedef TYPE_2__ IKE_DH ;


 int FUNC_0 (int ,TYPE_2__*) ;
 TYPE_2__* FUNC_1 (int) ;

IKE_DH *FUNC_2(IKE_ENGINE *VAR_0, UINT VAR_1, char *VAR_2, UINT VAR_3)
{
 IKE_DH *VAR_4;

 if (VAR_0 == ((void*)0) || VAR_2 == ((void*)0) || VAR_3 == 0)
 {
  return ((void*)0);
 }

 VAR_4 = FUNC_1(sizeof(IKE_DH));

 VAR_4->DhId = VAR_1;
 VAR_4->Name = VAR_2;
 VAR_4->KeySize = VAR_3;

 FUNC_0(VAR_0->DhsList, VAR_4);

 return VAR_4;
}
