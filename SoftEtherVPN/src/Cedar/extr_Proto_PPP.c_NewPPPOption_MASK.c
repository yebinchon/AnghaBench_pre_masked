
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT ;
typedef int UCHAR ;
struct TYPE_4__ {int DataSize; int Data; int Type; } ;
typedef TYPE_1__ PPP_OPTION ;


 int FUNC_0 (int ,void*,int ) ;
 TYPE_1__* FUNC_1 (int) ;

PPP_OPTION *FUNC_2(UCHAR VAR_0, void *VAR_1, UINT VAR_2)
{
 PPP_OPTION *VAR_3;

 if (VAR_2 != 0 && VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_3 = FUNC_1(sizeof(PPP_OPTION));

 VAR_3->Type = VAR_0;
 FUNC_0(VAR_3->Data, VAR_1, VAR_2);
 VAR_3->DataSize = VAR_2;

 return VAR_3;
}
