
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct selector {int dummy; } ;
struct path_selector {struct selector* context; } ;


 int VAR_0 ;
 struct selector* FUNC_0 () ;

__attribute__((used)) static int FUNC_1(struct path_selector *VAR_1, unsigned VAR_2, char **VAR_3)
{
 struct selector *VAR_4 = FUNC_0();

 if (!VAR_4)
  return -VAR_0;

 VAR_1->context = VAR_4;
 return 0;
}
