
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct vnode_attr {int va_vaflags; } ;
struct TYPE_2__ {int nfsa_flags; int * nfsa_supp_attr; } ;
struct nfsmount {TYPE_1__ nm_fsattr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (struct nfsmount*,int ) ;
 scalar_t__ FUNC_3 (struct vnode_attr*,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;

void
FUNC_4(struct nfsmount *VAR_27, uint32_t *VAR_28, struct vnode_attr *VAR_29)
{
 int VAR_30;

 FUNC_1(VAR_28);
 if (FUNC_3(VAR_29, VAR_19))
  FUNC_0(VAR_28, VAR_8);
 if (FUNC_3(VAR_29, VAR_16) && (VAR_27->nm_fsattr.nfsa_flags & VAR_13))
  FUNC_0(VAR_28, VAR_2);
 if (FUNC_3(VAR_29, VAR_20)) {
  FUNC_0(VAR_28, VAR_3);
  FUNC_0(VAR_28, VAR_4);
 }

 if (FUNC_3(VAR_29, VAR_23) && !FUNC_2(VAR_27, VAR_0))
  FUNC_0(VAR_28, VAR_5);
 if (FUNC_3(VAR_29, VAR_25) || FUNC_3(VAR_29, VAR_26))
  FUNC_0(VAR_28, VAR_6);
 if (FUNC_3(VAR_29, VAR_21) || FUNC_3(VAR_29, VAR_22))
  FUNC_0(VAR_28, VAR_7);

 if (VAR_29->va_vaflags & VAR_14) {
  FUNC_0(VAR_28, VAR_9);
  FUNC_0(VAR_28, VAR_12);
 } else {
  if (FUNC_3(VAR_29, VAR_15))
   FUNC_0(VAR_28, VAR_9);
  if (FUNC_3(VAR_29, VAR_24))
   FUNC_0(VAR_28, VAR_12);
 }
 if (FUNC_3(VAR_29, VAR_17))
  FUNC_0(VAR_28, VAR_10);
 if (FUNC_3(VAR_29, VAR_18))
  FUNC_0(VAR_28, VAR_11);

 for (VAR_30=0; VAR_30 < VAR_1; VAR_30++)
  VAR_28[VAR_30] &= VAR_27->nm_fsattr.nfsa_supp_attr[VAR_30];
}
