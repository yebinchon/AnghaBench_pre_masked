
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m2p_channel {int * client; int lock; int clk; int name; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct m2p_channel *VAR_0)
{
 VAR_0->clk = FUNC_2(((void*)0), VAR_0->name);
 if (FUNC_0(VAR_0->clk))
  return FUNC_1(VAR_0->clk);

 FUNC_3(&VAR_0->lock);
 VAR_0->client = ((void*)0);

 return 0;
}
