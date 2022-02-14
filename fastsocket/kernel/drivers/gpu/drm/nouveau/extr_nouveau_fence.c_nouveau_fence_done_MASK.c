
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_fence {scalar_t__ channel; } ;


 int FUNC_0 (scalar_t__) ;

bool
FUNC_1(struct nouveau_fence *VAR_0)
{
 if (VAR_0->channel)
  FUNC_0(VAR_0->channel);
 return !VAR_0->channel;
}
