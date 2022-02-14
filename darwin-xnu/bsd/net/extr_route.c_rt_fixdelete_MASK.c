
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtentry {int rt_flags; struct rtentry* rt_parent; } ;
struct radix_node {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct rtentry*) ;
 int FUNC_2 (struct rtentry*) ;
 int VAR_4 ;
 int FUNC_3 (struct rtentry*) ;
 int FUNC_4 (struct rtentry*) ;
 int FUNC_5 (int ,int ,int *,int ,int,int *) ;

__attribute__((used)) static int
FUNC_6(struct radix_node *VAR_5, void *VAR_6)
{
 struct rtentry *VAR_7 = (struct rtentry *)VAR_5;
 struct rtentry *VAR_8 = VAR_6;

 FUNC_0(VAR_4, VAR_0);

 FUNC_1(VAR_7);
 if (VAR_7->rt_parent == VAR_8 &&
     !(VAR_7->rt_flags & (VAR_1 | VAR_2))) {





  FUNC_2(VAR_7);
  return (FUNC_5(VAR_3, FUNC_3(VAR_7), ((void*)0),
      FUNC_4(VAR_7), VAR_7->rt_flags, ((void*)0)));
 }
 FUNC_2(VAR_7);
 return (0);
}
