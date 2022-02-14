
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct map_info {scalar_t__ virt; } ;
struct async_state {unsigned long win_size; } ;
struct TYPE_3__ {int * x; } ;
typedef TYPE_1__ map_word ;


 struct async_state* FUNC_0 (struct map_info*) ;
 int FUNC_1 (struct async_state*,unsigned long) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static map_word FUNC_3(struct map_info *VAR_0, unsigned long VAR_1)
{
 struct async_state *VAR_2 = FUNC_0(VAR_0);
 uint16_t VAR_3;
 map_word VAR_4;

 FUNC_1(VAR_2, VAR_1);

 VAR_3 = FUNC_2(VAR_0->virt + (VAR_1 % VAR_2->win_size));
 VAR_4.x[0] = VAR_3;
 return VAR_4;
}
