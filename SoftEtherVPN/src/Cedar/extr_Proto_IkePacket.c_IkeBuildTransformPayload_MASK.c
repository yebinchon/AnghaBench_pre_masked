
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int h ;
struct TYPE_7__ {int ValueList; int TransformId; int Number; } ;
struct TYPE_6__ {int TransformId; int Number; } ;
typedef TYPE_1__ IKE_TRANSFORM_HEADER ;
typedef TYPE_2__ IKE_PACKET_TRANSFORM_PAYLOAD ;
typedef int BUF ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,TYPE_1__*,int) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (TYPE_1__*,int) ;

BUF *FUNC_6(IKE_PACKET_TRANSFORM_PAYLOAD *VAR_0)
{
 IKE_TRANSFORM_HEADER VAR_1;
 BUF *VAR_2, *VAR_3;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 FUNC_5(&VAR_1, sizeof(VAR_1));
 VAR_1.Number = VAR_0->Number;
 VAR_1.TransformId = VAR_0->TransformId;

 VAR_2 = FUNC_2();
 FUNC_3(VAR_2, &VAR_1, sizeof(VAR_1));

 VAR_3 = FUNC_1(VAR_0->ValueList);
 FUNC_4(VAR_2, VAR_3);

 FUNC_0(VAR_3);

 return VAR_2;
}
