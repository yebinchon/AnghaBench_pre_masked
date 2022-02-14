
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_3__ {int mc_private; int (* mc_slab_notify ) (int ,int ) ;} ;
typedef TYPE_1__ mcache_t ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void
FUNC_1(mcache_t *VAR_0, u_int32_t VAR_1)
{
 if (VAR_0->mc_slab_notify != ((void*)0))
  (*VAR_0->mc_slab_notify)(VAR_0->mc_private, VAR_1);
}
