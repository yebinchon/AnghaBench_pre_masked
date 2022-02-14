
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct map_info {scalar_t__ virt; } ;
struct async_state {unsigned long win_size; } ;
typedef unsigned long ssize_t ;


 int FUNC_0 (int) ;
 struct async_state* FUNC_1 (struct map_info*) ;
 int FUNC_2 (struct async_state*,unsigned long) ;
 int FUNC_3 (scalar_t__,void const*,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct map_info *VAR_0, unsigned long VAR_1, const void *VAR_2, ssize_t VAR_3)
{
 struct async_state *VAR_4 = FUNC_1(VAR_0);

 FUNC_2(VAR_4, VAR_1);


 FUNC_0(!((VAR_1 + VAR_3) % VAR_4->win_size <= (VAR_1 + VAR_3)));


 FUNC_3(VAR_0->virt + (VAR_1 % VAR_4->win_size), VAR_2, VAR_3);
}
