
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct waitq_link {int dummy; } ;
struct lt_elem {int dummy; } ;


 int VAR_0 ;
 struct lt_elem* FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,struct lt_elem*,int) ;

__attribute__((used)) static struct waitq_link *FUNC_2(uint64_t VAR_1, int VAR_2)
{
 struct lt_elem *VAR_3;

 VAR_3 = FUNC_0(&VAR_0, VAR_1);
 if (!VAR_3)
  return ((void*)0);
 FUNC_1(&VAR_0, VAR_3, VAR_2);
 return (struct waitq_link *)VAR_3;
}
