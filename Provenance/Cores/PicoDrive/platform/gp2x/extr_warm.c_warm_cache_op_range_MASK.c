
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct warm_cache_op {int ops; unsigned long addr; unsigned long size; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ,struct warm_cache_op*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (void*,char*) ;
 scalar_t__ VAR_1 ;

int FUNC_3(int VAR_2, void *VAR_3, unsigned long VAR_4)
{
 struct warm_cache_op VAR_5;
 int VAR_6;

 if (VAR_1 < 0) {

  FUNC_2(VAR_3, (char *)VAR_3 + VAR_4);
  return -1;
 }

 VAR_5.ops = VAR_2;
 VAR_5.addr = (unsigned long)VAR_3;
 VAR_5.size = VAR_4;

 VAR_6 = FUNC_0(VAR_1, VAR_0, &VAR_5);
 if (VAR_6 != 0) {
  FUNC_1("WARMC_CACHE_OP failed");
  return -1;
 }

 return 0;
}
