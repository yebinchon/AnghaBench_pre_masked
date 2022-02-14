
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_3__ {int DataSize; int IsSupported; scalar_t__ Data; } ;
typedef TYPE_1__ PPP_OPTION ;
typedef int PPP_LCP ;
typedef int IP ;


 TYPE_1__* FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;

bool FUNC_2(PPP_LCP *VAR_0, UINT VAR_1, IP *VAR_2)
{
 PPP_OPTION *VAR_3;
 UINT VAR_4;

 if (VAR_0 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return 0;
 }

 VAR_3 = FUNC_0(VAR_0, VAR_1);
 if (VAR_3 == ((void*)0))
 {
  return 0;
 }

 if (VAR_3->DataSize != 4)
 {
  return 0;
 }

 VAR_3->IsSupported = 1;

 VAR_4 = *((UINT *)VAR_3->Data);

 FUNC_1(VAR_2, VAR_4);

 return 1;
}
