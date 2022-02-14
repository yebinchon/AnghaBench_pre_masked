
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int in_val ;


 int FUNC_0 (char*,int ,...) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (char*,int *,int ,int*,int) ;

__attribute__((used)) static void
FUNC_3(int VAR_0)
{
 int VAR_1;
 uint64_t VAR_2;
 int VAR_3 = VAR_0;
 FUNC_1(((void*)0), &VAR_2);
 FUNC_0("sysctlbyname unlock called from thread %llu \n", VAR_2);
 VAR_1 = FUNC_2("kern.turnstiles_test_unlock", ((void*)0), 0, &VAR_3, sizeof(VAR_3));
 FUNC_0("sysctlbyname unlock returned from thread %llu with value %d \n", VAR_2, VAR_1);
}
