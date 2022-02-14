
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef void* UCHAR ;
struct TYPE_4__ {int OptionList; void* Id; void* Code; } ;
typedef TYPE_1__ PPP_LCP ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int) ;

PPP_LCP *FUNC_2(UCHAR VAR_0, UCHAR VAR_1)
{
 PPP_LCP *VAR_2 = FUNC_1(sizeof(PPP_LCP));

 VAR_2->Code = VAR_0;
 VAR_2->Id = VAR_1;
 VAR_2->OptionList = FUNC_0(((void*)0));

 return VAR_2;
}
