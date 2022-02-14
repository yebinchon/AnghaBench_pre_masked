
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfsmount {int nm_stategenid; scalar_t__ nm_stateinuse; int nm_state; int nm_lock; int nm_mountp; } ;
struct TYPE_2__ {char* f_mntfromname; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct nfsmount*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct nfsmount*,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,int,char*,int) ;
 int FUNC_7 (int*,scalar_t__,char*,int) ;
 TYPE_1__* FUNC_8 (int ) ;
 int FUNC_9 (scalar_t__*) ;

int
FUNC_10(struct nfsmount *VAR_5, int VAR_6)
{
 int VAR_7 = FUNC_3(VAR_6);

 if (FUNC_2(VAR_5))
  return (VAR_7);
 FUNC_0(&VAR_5->nm_lock);
 if (VAR_7 && (VAR_6 != VAR_1) && (VAR_6 != VAR_0)) {
  FUNC_6("nfs_mount_state_in_use_end: error %d, initiating recovery for %s, 0x%x\n",
   VAR_6, FUNC_8(VAR_5->nm_mountp)->f_mntfromname, VAR_5->nm_stategenid);
  FUNC_4(VAR_5, VAR_6);
 }
 if (VAR_5->nm_stateinuse > 0)
  VAR_5->nm_stateinuse--;
 else
  FUNC_5("NFS mount state in use count underrun");
 if (!VAR_5->nm_stateinuse && (VAR_5->nm_state & VAR_2))
  FUNC_9(&VAR_5->nm_stateinuse);
 FUNC_1(&VAR_5->nm_lock);
 if (VAR_6 == VAR_0)
  FUNC_7(&VAR_5->nm_state, (VAR_3-1), "nfsgrace", 2*VAR_4);

 return (VAR_7);
}
