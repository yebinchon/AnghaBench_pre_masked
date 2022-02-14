
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nouveau_fifo_chan {int refcnt; } ;
struct nouveau_channel {scalar_t__ object; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static u32
FUNC_1(struct nouveau_channel *VAR_0)
{
 struct nouveau_fifo_chan *VAR_1 = (void *)VAR_0->object;
 return FUNC_0(&VAR_1->refcnt);
}
