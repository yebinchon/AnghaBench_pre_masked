
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_char ;
struct rtfc_arg {struct radix_node_head* rnh; struct rtentry* rt0; } ;
struct rtentry {int rt_flags; struct rtentry* rt_parent; } ;
struct radix_node_head {TYPE_1__* rnh_treetop; } ;
struct radix_node {int dummy; } ;
struct TYPE_8__ {int sa_len; } ;
struct TYPE_7__ {int sa_len; } ;
struct TYPE_6__ {int rn_offset; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct rtentry*) ;
 int FUNC_2 (struct rtentry*) ;
 int FUNC_3 (int ,int ) ;
 int VAR_4 ;
 TYPE_2__* FUNC_4 (struct rtentry*) ;
 TYPE_3__* FUNC_5 (struct rtentry*) ;
 int FUNC_6 (int ,TYPE_2__*,int *,TYPE_3__*,int,int *) ;

__attribute__((used)) static int
FUNC_7(struct radix_node *VAR_5, void *VAR_6)
{
 struct rtentry *VAR_7 = (struct rtentry *)VAR_5;
 struct rtfc_arg *VAR_8 = VAR_6;
 struct rtentry *VAR_9 = VAR_8->rt0;
 struct radix_node_head *VAR_10 = VAR_8->rnh;
 u_char *VAR_11, *VAR_12, *VAR_13, *VAR_14;
 int VAR_15, VAR_16;

 FUNC_0(VAR_4, VAR_0);

 FUNC_1(VAR_7);

 if (!VAR_7->rt_parent ||
     (VAR_7->rt_flags & (VAR_1 | VAR_2))) {
  FUNC_2(VAR_7);
  return (0);
 }

 if (VAR_7->rt_parent == VAR_9)
  goto delete_rt;





 VAR_16 = FUNC_3(FUNC_4(VAR_9)->sa_len, FUNC_4(VAR_7)->sa_len);

 VAR_11 = (u_char *)FUNC_4(VAR_9);
 VAR_12 = (u_char *)FUNC_5(VAR_9);
 VAR_13 = (u_char *)FUNC_4(VAR_7);






 if ((VAR_14 = (u_char *)FUNC_5(VAR_7->rt_parent)) != ((void*)0)) {
  int VAR_17 = FUNC_5(VAR_7->rt_parent)->sa_len;
  if (VAR_17 > FUNC_5(VAR_9)->sa_len) {
   FUNC_2(VAR_7);
   return (0);
  }

  for (VAR_15 = VAR_10->rnh_treetop->rn_offset; VAR_15 < VAR_17; VAR_15++) {
   if ((VAR_14[VAR_15] & ~(VAR_14[VAR_15] ^ VAR_12[VAR_15])) != VAR_14[VAR_15]) {
    FUNC_2(VAR_7);
    return (0);
   }
  }
 }

 for (VAR_15 = VAR_10->rnh_treetop->rn_offset; VAR_15 < VAR_16; VAR_15++) {
  if ((VAR_13[VAR_15] & VAR_12[VAR_15]) != VAR_11[VAR_15]) {
   FUNC_2(VAR_7);
   return (0);
  }
 }





delete_rt:




 FUNC_2(VAR_7);
 return (FUNC_6(VAR_3, FUNC_4(VAR_7), ((void*)0),
     FUNC_5(VAR_7), VAR_7->rt_flags, ((void*)0)));
}
