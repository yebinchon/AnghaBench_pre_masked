
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct airq_t {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int ** VAR_2 ;
 int FUNC_0 (int *,int *,struct airq_t*) ;

__attribute__((used)) static int FUNC_1(struct airq_t *VAR_3, u8 VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
  if (!FUNC_0(&VAR_2[VAR_4][VAR_5], ((void*)0), VAR_3))
   return VAR_5;
 return -VAR_0;
}
