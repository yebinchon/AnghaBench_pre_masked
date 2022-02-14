
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connfind {int found; struct connectdata* tofind; } ;
struct connectdata {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct connectdata *VAR_1, void *VAR_2)
{
  struct connfind *VAR_3 = (struct connfind *)VAR_2;
  if(VAR_1 == VAR_3->tofind) {
    VAR_3->found = VAR_0;
    return 1;
  }
  return 0;
}
