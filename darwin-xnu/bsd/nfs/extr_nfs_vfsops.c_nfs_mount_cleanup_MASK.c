
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nfsmount {scalar_t__ nm_vers; scalar_t__ nm_fh; int nm_lock; scalar_t__ nm_args; scalar_t__ nm_sprinc; scalar_t__ nm_principal; scalar_t__ nm_realm; int nm_locations; int nm_mcred; scalar_t__ nm_rqsaddr; scalar_t__ nm_saddr; scalar_t__ nm_state; scalar_t__ nm_ref; TYPE_2__* nm_mountp; scalar_t__ nm_sockflags; } ;
typedef int caddr_t ;
struct TYPE_5__ {scalar_t__ mnt_count; } ;
struct TYPE_4__ {int f_mntonname; int f_mntfromname; } ;


 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int ,int,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (char*,scalar_t__,...) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_4 ;
 int FUNC_9 (struct nfsmount*,int ) ;
 int FUNC_10 (char*,scalar_t__,scalar_t__) ;
 int FUNC_11 (TYPE_2__*,int *) ;
 TYPE_1__* FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (scalar_t__) ;

void
FUNC_14(struct nfsmount *VAR_5)
{
 if (!VAR_5)
  return;

 FUNC_9(VAR_5, 0);

 FUNC_3("Unmounting %s from %s\n",
      FUNC_12(VAR_5->nm_mountp)->f_mntfromname,
      FUNC_12(VAR_5->nm_mountp)->f_mntonname);
 FUNC_3("nfs state = 0x%8.8x\n", VAR_5->nm_state);
 FUNC_3("nfs socket flags = 0x%8.8x\n", VAR_5->nm_sockflags);
 FUNC_3("nfs mount ref count is %d\n", VAR_5->nm_ref);
 FUNC_3("mount ref count is %d\n", VAR_5->nm_mountp->mnt_count);

 if (VAR_5->nm_mountp)
  FUNC_11(VAR_5->nm_mountp, ((void*)0));

 FUNC_6(&VAR_5->nm_lock);
 if (VAR_5->nm_ref)
  FUNC_10("Some one has grabbed a ref %d state flags = 0x%8.8x\n", VAR_5->nm_ref, VAR_5->nm_state);

 if (VAR_5->nm_saddr)
  FUNC_0(VAR_5->nm_saddr, VAR_1);
 if ((VAR_5->nm_vers < VAR_3) && VAR_5->nm_rqsaddr)
  FUNC_0(VAR_5->nm_rqsaddr, VAR_1);

 if (FUNC_2(VAR_5->nm_mcred))
  FUNC_4(&VAR_5->nm_mcred);

 FUNC_8(&VAR_5->nm_locations);

 if (VAR_5->nm_realm)
  FUNC_0(VAR_5->nm_realm, VAR_2);
 if (VAR_5->nm_principal)
  FUNC_0(VAR_5->nm_principal, VAR_2);
 if (VAR_5->nm_sprinc)
  FUNC_0(VAR_5->nm_sprinc, VAR_2);

 if (VAR_5->nm_args)
  FUNC_13(VAR_5->nm_args);

 FUNC_7(&VAR_5->nm_lock);

 FUNC_5(&VAR_5->nm_lock, VAR_4);
 if (VAR_5->nm_fh)
  FUNC_0(VAR_5->nm_fh, VAR_2);
 FUNC_1((caddr_t)VAR_5, sizeof (struct nfsmount), VAR_0);
}
