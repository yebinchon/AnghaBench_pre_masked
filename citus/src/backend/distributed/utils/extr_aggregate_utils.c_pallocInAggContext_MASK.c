
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int MemoryContext ;
typedef int FunctionCallInfo ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;
 void* FUNC_1 (int ,size_t) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static void *
FUNC_3(FunctionCallInfo VAR_1, size_t VAR_2)
{
 MemoryContext VAR_3;
 if (!FUNC_0(VAR_1, &VAR_3))
 {
  FUNC_2(VAR_0, "Aggregate function called without an aggregate context");
 }
 return FUNC_1(VAR_3, VAR_2);
}
