
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppp_channel {struct channel* ppp; } ;
struct channel {int dummy; } ;


 int FUNC_0 (struct channel*) ;

void
FUNC_1(struct ppp_channel *VAR_0)
{
 struct channel *VAR_1 = VAR_0->ppp;

 if (!VAR_1)
  return;
 FUNC_0(VAR_1);
}
