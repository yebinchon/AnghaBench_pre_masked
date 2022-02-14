
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int h ;
struct TYPE_6__ {int ValueList; int TransformId; int Number; } ;
struct TYPE_5__ {int TransformId; int Number; } ;
typedef TYPE_1__ IKE_TRANSFORM_HEADER ;
typedef TYPE_2__ IKE_PACKET_TRANSFORM_PAYLOAD ;
typedef int BUF ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_1__*,int) ;

bool FUNC_2(IKE_PACKET_TRANSFORM_PAYLOAD *VAR_0, BUF *VAR_1)
{
 IKE_TRANSFORM_HEADER VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }

 if (FUNC_1(VAR_1, &VAR_2, sizeof(VAR_2)) != sizeof(VAR_2))
 {
  return 0;
 }

 VAR_0->Number = VAR_2.Number;
 VAR_0->TransformId = VAR_2.TransformId;
 VAR_0->ValueList = FUNC_0(VAR_1);

 return 1;
}
