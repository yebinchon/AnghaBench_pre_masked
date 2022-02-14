
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int qsort_arg_comparator ;
typedef int ShardInterval ;
typedef int FmgrInfo ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int **,int,int,int ,void*) ;

__attribute__((used)) static ShardInterval **
FUNC_1(ShardInterval **VAR_1, int VAR_2,
        FmgrInfo *VAR_3)
{

 if (VAR_2 == 0)
 {
  return VAR_1;
 }


 FUNC_0(VAR_1, VAR_2, sizeof(ShardInterval *),
     (qsort_arg_comparator) VAR_0,
     (void *) VAR_3);

 return VAR_1;
}
