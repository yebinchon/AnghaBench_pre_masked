
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int Size; int Int64Value; } ;
typedef TYPE_1__ VALUE ;
typedef int UINT64 ;


 TYPE_1__* FUNC_0 (int) ;

VALUE *FUNC_1(UINT64 VAR_0)
{
 VALUE *VAR_1;

 VAR_1 = FUNC_0(sizeof(VALUE));
 VAR_1->Int64Value = VAR_0;
 VAR_1->Size = sizeof(UINT64);

 return VAR_1;
}
