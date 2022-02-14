
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_4__ {int Size; } ;
typedef int K ;
typedef TYPE_1__ BUF ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int *) ;

UINT FUNC_2(K *VAR_0)
{
 BUF *VAR_1;
 UINT VAR_2;

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1 == ((void*)0))
 {
  return 0;
 }

 VAR_2 = VAR_1->Size;

 FUNC_0(VAR_1);

 return VAR_2;
}
