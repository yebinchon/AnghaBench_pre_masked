
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct valkyrie_regvals {int* pitch; int vres; } ;


 struct valkyrie_regvals** VAR_0 ;

__attribute__((used)) static inline int FUNC_0(int VAR_1, int VAR_2)
{
 int VAR_3;
 struct valkyrie_regvals *VAR_4 = VAR_0[VAR_1-1];

 if ((VAR_3 = VAR_4->pitch[VAR_2]) == 0)
  VAR_3 = 2 * VAR_4->pitch[0];
 return VAR_4->vres * VAR_3;
}
