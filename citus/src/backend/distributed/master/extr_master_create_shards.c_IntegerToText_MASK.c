
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int text ;
typedef int int32 ;
struct TYPE_4__ {int data; } ;
typedef TYPE_1__* StringInfo ;


 int FUNC_0 (TYPE_1__*,char*,int ) ;
 int * FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 () ;

text *
FUNC_3(int32 VAR_0)
{
 text *VAR_1 = ((void*)0);
 StringInfo VAR_2 = FUNC_2();
 FUNC_0(VAR_2, "%d", VAR_0);

 VAR_1 = FUNC_1(VAR_2->data);

 return VAR_1;
}
