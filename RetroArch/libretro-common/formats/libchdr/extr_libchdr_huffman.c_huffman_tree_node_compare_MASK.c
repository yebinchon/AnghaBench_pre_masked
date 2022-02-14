
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct node_t {scalar_t__ weight; scalar_t__ bits; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(const void *VAR_1, const void *VAR_2)
{
 const struct node_t *VAR_3 = *(const struct node_t **)VAR_1;
 const struct node_t *VAR_4 = *(const struct node_t **)VAR_2;
 if (VAR_4->weight != VAR_3->weight)
  return VAR_4->weight - VAR_3->weight;
 if (VAR_4->bits - VAR_3->bits == 0)
  FUNC_0(VAR_0, "identical node sort keys, should not happen!\n");
 return (int)VAR_3->bits - (int)VAR_4->bits;
}
