
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int Tuplestorestate ;
typedef int TupleDesc ;
struct TYPE_5__ {int setDesc; int * setResult; int returnMode; TYPE_1__* econtext; } ;
struct TYPE_4__ {int ecxt_per_query_memory; } ;
typedef TYPE_2__ ReturnSetInfo ;
typedef int MemoryContext ;
typedef int FunctionCallInfo ;


 TYPE_2__* FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int * FUNC_2 (int,int,int ) ;
 int VAR_1 ;

Tuplestorestate *
FUNC_3(FunctionCallInfo VAR_2, TupleDesc *VAR_3)
{
 ReturnSetInfo *VAR_4 = FUNC_0(VAR_2, VAR_3);
 MemoryContext VAR_5 = VAR_4->econtext->ecxt_per_query_memory;

 MemoryContext VAR_6 = FUNC_1(VAR_5);
 Tuplestorestate *VAR_7 = FUNC_2(1, 0, VAR_1);
 VAR_4->returnMode = VAR_0;
 VAR_4->setResult = VAR_7;
 VAR_4->setDesc = *VAR_3;
 FUNC_1(VAR_6);

 return VAR_7;
}
