
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct nouveau_object {int dummy; } ;
struct nouveau_fifo_chan {scalar_t__ user; } ;


 int FUNC_0 (int ,scalar_t__) ;

void
FUNC_1(struct nouveau_object *VAR_0, u64 VAR_1, u32 VAR_2)
{
 struct nouveau_fifo_chan *VAR_3 = (void *)VAR_0;
 FUNC_0(VAR_2, VAR_3->user + VAR_1);
}
