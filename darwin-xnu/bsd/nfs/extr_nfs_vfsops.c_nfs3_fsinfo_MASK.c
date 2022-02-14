
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vfs_context_t ;
typedef int uint32_t ;
typedef int u_int64_t ;
struct TYPE_8__ {int nfsa_maxread; int nfsa_maxwrite; int nfsa_bitmap; int nfsa_flags; int nfsa_maxfilesize; } ;
struct nfsmount {int nm_rsize; int nm_wsize; int nm_readdirsize; int nm_lock; TYPE_1__ nm_fsattr; int nm_state; int nm_vers; } ;
struct nfsm_chain {int dummy; } ;
typedef TYPE_2__* nfsnode_t ;
struct TYPE_9__ {int n_fhsize; int n_fhp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 int FUNC_1 (int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,int *,struct nfsm_chain*,int ,int ,int *,struct nfsm_chain*,int *,int*) ;
 int FUNC_7 (int,struct nfsm_chain*,int ,int ,int ) ;
 int FUNC_8 (int,struct nfsm_chain*,int) ;
 int FUNC_9 (int,struct nfsm_chain*,int ) ;
 int FUNC_10 (int,struct nfsm_chain*) ;
 int FUNC_11 (struct nfsm_chain*) ;
 int FUNC_12 (int,struct nfsm_chain*,int) ;
 int FUNC_13 (int,struct nfsm_chain*,int ) ;
 int FUNC_14 (struct nfsm_chain*) ;
 int FUNC_15 (int,struct nfsm_chain*,TYPE_2__*,int *) ;
 int FUNC_16 (int) ;

int
FUNC_17(struct nfsmount *VAR_19, nfsnode_t VAR_20, vfs_context_t VAR_21)
{
 int VAR_22 = 0, VAR_23, VAR_24, VAR_25 = 0;
 u_int64_t VAR_26;
 uint32_t VAR_27, VAR_28, VAR_29;
 struct nfsm_chain VAR_30, VAR_31;

 FUNC_14(&VAR_30);
 FUNC_14(&VAR_31);

 FUNC_9(VAR_22, &VAR_30, FUNC_0(VAR_19->nm_vers));
 FUNC_7(VAR_22, &VAR_30, VAR_19->nm_vers, VAR_20->n_fhp, VAR_20->n_fhsize);
 FUNC_10(VAR_22, &VAR_30);
 FUNC_16(VAR_22);
 VAR_22 = FUNC_6(VAR_20, ((void*)0), &VAR_30, VAR_0, VAR_21, ((void*)0), &VAR_31, &VAR_26, &VAR_24);
 if ((VAR_23 = FUNC_4(VAR_20)))
  VAR_22 = VAR_23;
 FUNC_15(VAR_22, &VAR_31, VAR_20, &VAR_26);
 if (!VAR_23)
  FUNC_5(VAR_20);
 if (!VAR_22)
  VAR_22 = VAR_24;
 FUNC_16(VAR_22);

 FUNC_2(&VAR_19->nm_lock);
 VAR_25 = 1;

 FUNC_12(VAR_22, &VAR_31, VAR_29);
 FUNC_12(VAR_22, &VAR_31, VAR_28);
 FUNC_16(VAR_22);
 VAR_19->nm_fsattr.nfsa_maxread = VAR_29;
 if (VAR_28 < VAR_19->nm_rsize)
  VAR_19->nm_rsize = (VAR_28 + VAR_7 - 1) &
   ~(VAR_7 - 1);
 if ((VAR_29 > 0) && (VAR_29 < VAR_19->nm_rsize)) {
  VAR_19->nm_rsize = VAR_29 & ~(VAR_7 - 1);
  if (VAR_19->nm_rsize == 0)
   VAR_19->nm_rsize = VAR_29;
 }
 FUNC_8(VAR_22, &VAR_31, VAR_6);

 FUNC_12(VAR_22, &VAR_31, VAR_29);
 FUNC_12(VAR_22, &VAR_31, VAR_28);
 FUNC_16(VAR_22);
 VAR_19->nm_fsattr.nfsa_maxwrite = VAR_29;
 if (VAR_28 < VAR_19->nm_wsize)
  VAR_19->nm_wsize = (VAR_28 + VAR_7 - 1) &
   ~(VAR_7 - 1);
 if ((VAR_29 > 0) && (VAR_29 < VAR_19->nm_wsize)) {
  VAR_19->nm_wsize = VAR_29 & ~(VAR_7 - 1);
  if (VAR_19->nm_wsize == 0)
   VAR_19->nm_wsize = VAR_29;
 }
 FUNC_8(VAR_22, &VAR_31, VAR_6);

 FUNC_12(VAR_22, &VAR_31, VAR_28);
 FUNC_16(VAR_22);
 if ((VAR_28 > 0) && (VAR_28 < VAR_19->nm_readdirsize))
  VAR_19->nm_readdirsize = VAR_28;
 if ((VAR_19->nm_fsattr.nfsa_maxread > 0) &&
     (VAR_19->nm_fsattr.nfsa_maxread < VAR_19->nm_readdirsize))
  VAR_19->nm_readdirsize = VAR_19->nm_fsattr.nfsa_maxread;

 FUNC_13(VAR_22, &VAR_31, VAR_19->nm_fsattr.nfsa_maxfilesize);

 FUNC_8(VAR_22, &VAR_31, 2 * VAR_6);


 FUNC_12(VAR_22, &VAR_31, VAR_27);
 FUNC_16(VAR_22);
 if (VAR_27 & VAR_4)
  VAR_19->nm_fsattr.nfsa_flags |= VAR_16;
 if (VAR_27 & VAR_5)
  VAR_19->nm_fsattr.nfsa_flags |= VAR_18;
 if (VAR_27 & VAR_3)
  VAR_19->nm_fsattr.nfsa_flags |= VAR_15;
 if (VAR_27 & VAR_2)
  VAR_19->nm_fsattr.nfsa_flags |= VAR_17;
 VAR_19->nm_state |= VAR_1;
 FUNC_1(VAR_19->nm_fsattr.nfsa_bitmap, VAR_12);
 FUNC_1(VAR_19->nm_fsattr.nfsa_bitmap, VAR_13);
 FUNC_1(VAR_19->nm_fsattr.nfsa_bitmap, VAR_11);
 FUNC_1(VAR_19->nm_fsattr.nfsa_bitmap, VAR_10);
 FUNC_1(VAR_19->nm_fsattr.nfsa_bitmap, VAR_14);
 FUNC_1(VAR_19->nm_fsattr.nfsa_bitmap, VAR_9);
 FUNC_1(VAR_19->nm_fsattr.nfsa_bitmap, VAR_8);
nfsmout:
 if (VAR_25)
  FUNC_3(&VAR_19->nm_lock);
 FUNC_11(&VAR_30);
 FUNC_11(&VAR_31);
 return (VAR_22);
}
