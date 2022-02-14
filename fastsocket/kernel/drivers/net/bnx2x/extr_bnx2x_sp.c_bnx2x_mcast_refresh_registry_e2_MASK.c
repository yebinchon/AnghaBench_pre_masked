
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {int* vec; } ;
struct TYPE_4__ {TYPE_1__ aprox_match; } ;
struct bnx2x_mcast_obj {int (* set_registry_size ) (struct bnx2x_mcast_obj*,int) ;TYPE_2__ registry; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bnx2x_mcast_obj*,int) ;

__attribute__((used)) static inline int FUNC_1(struct bnx2x *VAR_1,
        struct bnx2x_mcast_obj *VAR_2)
{
 int VAR_3, VAR_4 = 0;
 u64 VAR_5;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_5 = VAR_2->registry.aprox_match.vec[VAR_3];
  for (; VAR_5; VAR_4++)
   VAR_5 &= VAR_5 - 1;
 }

 VAR_2->set_registry_size(VAR_2, VAR_4);

 return 0;
}
