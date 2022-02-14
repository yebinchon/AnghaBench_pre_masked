
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* vec; } ;
struct TYPE_4__ {TYPE_1__ aprox_match; } ;
struct bnx2x_mcast_obj {TYPE_2__ registry; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__*,int) ;
 int VAR_1 ;

__attribute__((used)) static inline int FUNC_1(struct bnx2x_mcast_obj *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5, VAR_6 = VAR_3 % VAR_0;

 for (VAR_4 = VAR_3 / VAR_0; VAR_4 < VAR_1; VAR_4++) {
  if (VAR_2->registry.aprox_match.vec[VAR_4])
   for (VAR_5 = VAR_6; VAR_5 < VAR_0; VAR_5++) {
    int VAR_7 = VAR_5 + VAR_0 * VAR_4;
    if (FUNC_0(VAR_2->registry.aprox_match.
             vec, VAR_7)) {
     return VAR_7;
    }
   }
  VAR_6 = 0;
 }


 return -1;
}
