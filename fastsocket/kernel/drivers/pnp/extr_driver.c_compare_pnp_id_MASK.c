
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnp_id {char const* id; struct pnp_id* next; } ;


 int FUNC_0 (char const*,char const*) ;
 scalar_t__ FUNC_1 (char const*,char const*,int) ;
 int FUNC_2 (char const*) ;

int FUNC_3(struct pnp_id *VAR_0, const char *VAR_1)
{
 if (!VAR_0 || !VAR_1 || (FUNC_2(VAR_1) != 7))
  return 0;
 if (FUNC_1(VAR_1, "ANYDEVS", 7) == 0)
  return 1;
 while (VAR_0) {
  if (FUNC_1(VAR_0->id, VAR_1, 3) == 0)
   if (FUNC_0(VAR_0->id, VAR_1) == 1)
    return 1;
  VAR_0 = VAR_0->next;
 }
 return 0;
}
