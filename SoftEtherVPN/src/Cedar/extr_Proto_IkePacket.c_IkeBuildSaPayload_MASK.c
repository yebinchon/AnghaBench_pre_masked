
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int h ;
struct TYPE_7__ {int PayloadList; } ;
struct TYPE_6__ {void* Situation; void* DoI; } ;
typedef TYPE_1__ IKE_SA_HEADER ;
typedef TYPE_2__ IKE_PACKET_SA_PAYLOAD ;
typedef int BUF ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_2 (int ) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,TYPE_1__*,int) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (TYPE_1__*,int) ;

BUF *FUNC_7(IKE_PACKET_SA_PAYLOAD *VAR_2)
{
 IKE_SA_HEADER VAR_3;
 BUF *VAR_4;
 BUF *VAR_5;

 if (VAR_2 == ((void*)0))
 {
  return ((void*)0);
 }

 FUNC_6(&VAR_3, sizeof(VAR_3));
 VAR_3.DoI = FUNC_0(VAR_0);
 VAR_3.Situation = FUNC_0(VAR_1);

 VAR_4 = FUNC_3();

 FUNC_4(VAR_4, &VAR_3, sizeof(VAR_3));

 VAR_5 = FUNC_2(VAR_2->PayloadList);
 FUNC_5(VAR_4, VAR_5);

 FUNC_1(VAR_5);

 return VAR_4;
}
