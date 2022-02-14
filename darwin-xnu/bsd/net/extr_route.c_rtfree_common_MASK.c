
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct rtentry_dbg {int dummy; } ;
struct rtentry {scalar_t__ rt_refcnt; int rt_flags; int rt_evhdlr_ctxt; TYPE_2__* rt_llinfo; int (* rt_llinfo_free ) (TYPE_2__*) ;struct ifaddr* rt_ifa; struct rtentry* rt_parent; TYPE_1__* rt_nodes; } ;
struct radix_node_head {int (* rnh_close ) (struct radix_node*,struct radix_node_head*) ;} ;
struct radix_node {int dummy; } ;
struct ifaddr {int dummy; } ;
typedef scalar_t__ boolean_t ;
struct TYPE_6__ {size_t sa_family; } ;
struct TYPE_5__ {int rn_flags; } ;


 int FUNC_0 (struct ifaddr*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct rtentry*) ;
 int FUNC_4 (struct rtentry*) ;
 int FUNC_5 (struct rtentry*) ;
 int FUNC_6 (struct rtentry*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int *,struct rtentry_dbg*,int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct rtentry*) ;
 int FUNC_14 (char*,struct rtentry*,...) ;
 int VAR_8 ;
 TYPE_2__* FUNC_15 (struct rtentry*) ;
 struct radix_node_head** VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_16 (struct rtentry*) ;
 int FUNC_17 (struct rtentry*) ;
 int FUNC_18 (struct rtentry*) ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_19 (struct rtentry*) ;
 int FUNC_20 (struct radix_node*,struct radix_node_head*) ;
 int FUNC_21 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_22(struct rtentry *VAR_14, boolean_t VAR_15)
{
 struct radix_node_head *VAR_16;

 FUNC_1(VAR_8, VAR_15 ?
     VAR_1 : VAR_0);





 FUNC_5(VAR_14);
 if (FUNC_19(VAR_14) > 0) {
  FUNC_6(VAR_14);
  return;
 }







 if (!VAR_15) {
  FUNC_3(VAR_14);
  FUNC_6(VAR_14);
  FUNC_11(VAR_8);
  FUNC_5(VAR_14);
  if (FUNC_19(VAR_14) > 0) {

   FUNC_6(VAR_14);
   goto done;
  }
 }





 FUNC_4(VAR_14);

 FUNC_1(VAR_8, VAR_1);


 if (VAR_14->rt_refcnt != 0) {
  FUNC_14("rt %p invalid refcnt %d", VAR_14, VAR_14->rt_refcnt);

 }

 FUNC_9(!(VAR_14->rt_flags & VAR_6));





 VAR_16 = VAR_9[FUNC_15(VAR_14)->sa_family];
 if (VAR_16 != ((void*)0) && VAR_16->rnh_close != ((void*)0))
  VAR_16->rnh_close((struct radix_node *)VAR_14, VAR_16);





 if (!(VAR_14->rt_flags & VAR_7)) {
  struct rtentry *VAR_17;
  struct ifaddr *VAR_18;

  VAR_14->rt_flags |= VAR_5;
  if (VAR_14->rt_nodes->rn_flags & (VAR_2 | VAR_3)) {
   FUNC_14("rt %p freed while in radix tree\n", VAR_14);

  }




  (void) FUNC_2(&VAR_12);
  if (VAR_11 & VAR_4) {
   FUNC_8(&VAR_13, (struct rtentry_dbg *)VAR_14,
       VAR_10);
  }





  if ((VAR_17 = VAR_14->rt_parent) != ((void*)0))
   VAR_14->rt_parent = ((void*)0);

  if ((VAR_18 = VAR_14->rt_ifa) != ((void*)0))
   VAR_14->rt_ifa = ((void*)0);




  if (VAR_14->rt_llinfo != ((void*)0)) {
   if (VAR_14->rt_llinfo_free != ((void*)0))
    (*VAR_14->rt_llinfo_free)(VAR_14->rt_llinfo);
   else
    FUNC_7(VAR_14->rt_llinfo);
   VAR_14->rt_llinfo = ((void*)0);
  }


  FUNC_10(&VAR_14->rt_evhdlr_ctxt);





  FUNC_6(VAR_14);
  FUNC_17(VAR_14);

  if (VAR_17 != ((void*)0))
   FUNC_18(VAR_17);

  if (VAR_18 != ((void*)0))
   FUNC_0(VAR_18);






  FUNC_7(FUNC_15(VAR_14));




  FUNC_13(VAR_14);




  FUNC_16(VAR_14);
 } else {





  FUNC_6(VAR_14);
 }
done:
 if (!VAR_15)
  FUNC_12(VAR_8);
}
