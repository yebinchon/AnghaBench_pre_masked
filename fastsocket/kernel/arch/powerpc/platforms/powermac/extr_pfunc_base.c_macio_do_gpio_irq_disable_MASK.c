
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmf_function {int node; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (unsigned int,struct pmf_function*) ;
 unsigned int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct pmf_function *VAR_2)
{
 unsigned int VAR_3 = FUNC_1(VAR_2->node, 0);
 if (VAR_3 == VAR_1)
  return -VAR_0;
 FUNC_0(VAR_3, VAR_2);
 return 0;
}
