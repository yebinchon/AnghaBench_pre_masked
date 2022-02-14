
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ daddr_t ;
typedef TYPE_1__* blist_t ;
struct TYPE_3__ {scalar_t__ bl_radix; int bl_free; int bl_skip; int bl_root; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ,scalar_t__,scalar_t__,int ) ;

daddr_t
FUNC_2(blist_t VAR_2, daddr_t VAR_3)
{
 daddr_t VAR_4 = VAR_1;

 if (VAR_2) {
  if (VAR_2->bl_radix == VAR_0)
   VAR_4 = FUNC_0(VAR_2->bl_root, 0, VAR_3);
  else
   VAR_4 = FUNC_1(VAR_2->bl_root, 0, VAR_3,
           VAR_2->bl_radix, VAR_2->bl_skip);
  if (VAR_4 != VAR_1)
   VAR_2->bl_free -= VAR_3;
 }
 return(VAR_4);
}
