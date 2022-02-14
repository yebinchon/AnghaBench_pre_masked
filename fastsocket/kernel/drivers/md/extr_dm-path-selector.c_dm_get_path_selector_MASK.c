
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path_selector_type {int dummy; } ;
struct ps_internal {struct path_selector_type pst; } ;


 struct ps_internal* FUNC_0 (char const*) ;
 int FUNC_1 (char*,char const*) ;

struct path_selector_type *FUNC_2(const char *VAR_0)
{
 struct ps_internal *VAR_1;

 if (!VAR_0)
  return ((void*)0);

 VAR_1 = FUNC_0(VAR_0);
 if (!VAR_1) {
  FUNC_1("dm-%s", VAR_0);
  VAR_1 = FUNC_0(VAR_0);
 }

 return VAR_1 ? &VAR_1->pst : ((void*)0);
}
