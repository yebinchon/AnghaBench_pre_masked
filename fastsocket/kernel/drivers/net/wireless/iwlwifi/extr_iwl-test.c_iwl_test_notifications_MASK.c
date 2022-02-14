
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct iwl_test {int notify; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct nlattr*) ;

__attribute__((used)) static int FUNC_1(struct iwl_test *VAR_1,
      struct nlattr **VAR_2)
{
 VAR_1->notify = FUNC_0(VAR_2[VAR_0]);
 return 0;
}
