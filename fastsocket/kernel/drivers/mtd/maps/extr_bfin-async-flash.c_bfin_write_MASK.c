
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct map_info {scalar_t__ virt; scalar_t__ map_priv_1; } ;
struct async_state {int dummy; } ;
struct TYPE_3__ {int * x; } ;
typedef TYPE_1__ map_word ;


 int FUNC_0 () ;
 int FUNC_1 (struct async_state*) ;
 int FUNC_2 (struct async_state*) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct map_info *VAR_0, map_word VAR_1, unsigned long VAR_2)
{
 struct async_state *VAR_3 = (struct async_state *)VAR_0->map_priv_1;
 uint16_t VAR_4;

 VAR_4 = VAR_1[0];

 FUNC_2(VAR_3);

 FUNC_3(VAR_4, VAR_0->virt + VAR_2);
 FUNC_0();

 FUNC_1(VAR_3);
}
