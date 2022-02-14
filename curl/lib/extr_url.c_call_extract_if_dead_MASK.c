
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct prunedead {struct connectdata* extracted; int data; } ;
struct connectdata {int dummy; } ;


 scalar_t__ FUNC_0 (struct connectdata*,int ) ;

__attribute__((used)) static int FUNC_1(struct connectdata *VAR_0, void *VAR_1)
{
  struct prunedead *VAR_2 = (struct prunedead *)VAR_1;
  if(FUNC_0(VAR_0, VAR_2->data)) {

    VAR_2->extracted = VAR_0;
    return 1;
  }
  return 0;
}
