
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct map_info {scalar_t__ virt; scalar_t__ map_priv_1; } ;
struct async_state {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (void*,scalar_t__,int ) ;
 int FUNC_1 (struct async_state*) ;
 int FUNC_2 (struct async_state*) ;

__attribute__((used)) static void FUNC_3(struct map_info *VAR_0, void *VAR_1, unsigned long VAR_2, ssize_t VAR_3)
{
 struct async_state *VAR_4 = (struct async_state *)VAR_0->map_priv_1;

 FUNC_2(VAR_4);

 FUNC_0(VAR_1, VAR_0->virt + VAR_2, VAR_3);

 FUNC_1(VAR_4);
}
