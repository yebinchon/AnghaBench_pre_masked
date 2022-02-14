
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct rtentry {int rt_flags; } ;
struct radix_node_head {int (* rnh_walktree_from ) (struct radix_node_head*,TYPE_1__*,scalar_t__,int ,struct rtentry*) ;} ;
typedef scalar_t__ boolean_t ;
struct TYPE_3__ {size_t sa_family; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rtentry*) ;
 int FUNC_1 (struct rtentry*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_4 (struct rtentry*) ;
 scalar_t__ FUNC_5 (struct rtentry*) ;
 struct radix_node_head** VAR_5 ;
 int FUNC_6 (struct radix_node_head*,TYPE_1__*,scalar_t__,int ,struct rtentry*) ;

void
FUNC_7(struct rtentry *VAR_6, boolean_t VAR_7)
{
 FUNC_2(VAR_3);
 FUNC_0(VAR_6);




 if (VAR_6->rt_flags & (VAR_0 | VAR_1)) {
  struct radix_node_head *VAR_8 = VAR_5[FUNC_4(VAR_6)->sa_family];

  if (VAR_7)
   VAR_6->rt_flags |= VAR_2;
  else
   VAR_6->rt_flags &= ~VAR_2;

  FUNC_1(VAR_6);
  if (VAR_8 != ((void*)0) && FUNC_5(VAR_6)) {
   VAR_8->rnh_walktree_from(VAR_8, FUNC_4(VAR_6), FUNC_5(VAR_6),
       VAR_4, VAR_6);
  }
 } else {
  FUNC_1(VAR_6);
 }
 FUNC_3(VAR_3);
}
