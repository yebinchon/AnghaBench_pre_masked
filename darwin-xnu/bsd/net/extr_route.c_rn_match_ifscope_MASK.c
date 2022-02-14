
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct rtentry {int rt_flags; } ;
struct radix_node {int dummy; } ;
struct matchleaf_arg {scalar_t__ ifscope; } ;
struct TYPE_8__ {scalar_t__ sin6_scope_id; } ;
struct TYPE_7__ {scalar_t__ sin_scope_id; } ;
struct TYPE_6__ {int sa_family; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__* FUNC_0 (TYPE_1__*) ;
 TYPE_2__* FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (struct rtentry*) ;

__attribute__((used)) static int
FUNC_3(struct radix_node *VAR_3, void *VAR_4)
{
 struct rtentry *VAR_5 = (struct rtentry *)VAR_3;
 struct matchleaf_arg *VAR_6 = VAR_4;
 int VAR_7 = FUNC_2(VAR_5)->sa_family;

 if (!(VAR_5->rt_flags & VAR_2) || (VAR_7 != VAR_0 && VAR_7 != VAR_1))
  return (0);

 return (VAR_7 == VAR_0 ?
     (FUNC_1(FUNC_2(VAR_5))->sin_scope_id == VAR_6->ifscope) :
     (FUNC_0(FUNC_2(VAR_5))->sin6_scope_id == VAR_6->ifscope));
}
