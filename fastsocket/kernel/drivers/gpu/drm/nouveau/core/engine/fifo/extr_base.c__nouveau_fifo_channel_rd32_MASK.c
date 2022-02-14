
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct nouveau_object {int dummy; } ;
struct nouveau_fifo_chan {scalar_t__ user; } ;


 int FUNC_0 (scalar_t__) ;

u32
FUNC_1(struct nouveau_object *VAR_0, u64 VAR_1)
{
 struct nouveau_fifo_chan *VAR_2 = (void *)VAR_0;
 return FUNC_0(VAR_2->user + VAR_1);
}
