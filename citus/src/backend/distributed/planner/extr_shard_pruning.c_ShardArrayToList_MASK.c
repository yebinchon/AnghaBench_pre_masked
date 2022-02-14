
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ShardInterval ;
typedef int List ;


 int * VAR_0 ;
 int * FUNC_0 (int *,int *) ;

__attribute__((used)) static List *
FUNC_1(ShardInterval **VAR_1, int VAR_2)
{
 List *VAR_3 = VAR_0;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
 {
  ShardInterval *VAR_5 =
   VAR_1[VAR_4];
  VAR_3 = FUNC_0(VAR_3, VAR_5);
 }

 return VAR_3;
}
