
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct waitq_link {int dummy; } ;
struct lt_elem {int dummy; } ;


 int VAR_0 ;
 struct lt_elem* FUNC_0 (int *,int,int,int ) ;
 int FUNC_1 (struct lt_elem*) ;

__attribute__((used)) static struct waitq_link *FUNC_2(int VAR_1)
{
 struct lt_elem *VAR_2;

 VAR_2 = FUNC_0(&VAR_0, VAR_1, 1, 0);
 FUNC_1(VAR_2);
 return (struct waitq_link *)VAR_2;
}
