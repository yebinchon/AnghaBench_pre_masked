
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nfsa_flags; } ;
struct nfsmount {scalar_t__ nm_vers; int nm_state; int nm_lock; TYPE_1__ nm_fsattr; } ;
typedef int mount_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct nfsmount* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct nfsmount*) ;

int
FUNC_4(mount_t VAR_5)
{
 struct nfsmount *VAR_6 = FUNC_0(VAR_5);
 int VAR_7 = 0;
 int VAR_8 = 0;

 if (FUNC_3(VAR_6)) {
  return (0);
 }

 if (VAR_6->nm_vers == VAR_3) {

  return (0);
 }

 FUNC_1(&VAR_6->nm_lock);
 if (VAR_6->nm_vers == VAR_4) {
  if (!(VAR_6->nm_state & VAR_0)) {




   VAR_8 = 1;
  }
 } else if (!(VAR_6->nm_fsattr.nfsa_flags & VAR_2)) {

  VAR_8 = 1;
 }

 if (!VAR_8 && (VAR_6->nm_fsattr.nfsa_flags & VAR_1))
  VAR_7 = 1;

 FUNC_2(&VAR_6->nm_lock);

 return (VAR_7);
}
