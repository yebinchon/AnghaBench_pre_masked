
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct devfs_vnode_event {int dummy; } ;
struct devfs_event_log {int dummy; } ;
struct TYPE_6__ {int dn_links; TYPE_5__* dn_linklist; struct TYPE_6__* dn_nextsibling; struct TYPE_6__** dn_prevsiblingp; } ;
typedef TYPE_1__ devnode_t ;
struct TYPE_7__ {TYPE_1__* de_dnp; } ;
typedef TYPE_2__ devdirent_t ;
typedef int boolean_t ;
struct TYPE_8__ {TYPE_1__* de_parent; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (struct devfs_event_log*) ;
 scalar_t__ FUNC_4 (struct devfs_event_log*,int,struct devfs_vnode_event*) ;
 int VAR_3 ;
 int FUNC_5 (struct devfs_event_log*,TYPE_1__*,int ) ;
 int FUNC_6 (struct devfs_event_log*,int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (TYPE_1__*) ;

void
FUNC_9(void *VAR_4)
{
 devnode_t * VAR_5 = ((devdirent_t *)VAR_4)->de_dnp;
 devnode_t * VAR_6;
 boolean_t VAR_7;
 struct devfs_event_log VAR_8;
 uint32_t VAR_9 = 0;
 int VAR_10 = 0;
 int VAR_11 = 0;
 struct devfs_vnode_event VAR_12[VAR_0];

 FUNC_0();

 if (!VAR_3) {
  FUNC_7("devfs_remove: not ready for devices!\n");
  goto out;
 }

 VAR_9 = FUNC_8(VAR_5);

 if (VAR_9 > VAR_0) {
  uint32_t VAR_13;
wrongsize:
  FUNC_1();
  if (FUNC_4(&VAR_8, VAR_9, ((void*)0)) == 0) {
   VAR_10 = 1;
   VAR_11 = 1;
  }
  FUNC_0();

  VAR_13 = FUNC_8(VAR_5);
  if (VAR_11 && (VAR_13 > VAR_9)) {
   FUNC_6(&VAR_8, 1);
   VAR_11 = 0;
   VAR_10 = 0;
   VAR_9 = VAR_9 * 2;
   goto wrongsize;
  }
 } else {
  if (FUNC_4(&VAR_8, VAR_0, &VAR_12[0]) == 0) {
   VAR_10 = 1;
  }
 }


 if (VAR_10 != 0) {
  FUNC_5(&VAR_8, VAR_5, VAR_1);
 }


 while ((VAR_6 = VAR_5->dn_nextsibling) != VAR_5) {




  VAR_5->dn_nextsibling = VAR_6->dn_nextsibling;
  VAR_5->dn_nextsibling->dn_prevsiblingp = &(VAR_5->dn_nextsibling);
  VAR_6->dn_nextsibling = VAR_6;
  VAR_6->dn_prevsiblingp = &(VAR_6->dn_nextsibling);


  if (VAR_10 != 0) {
   FUNC_5(&VAR_8, VAR_6, VAR_1);
  }

  if (VAR_6->dn_linklist) {
   do {
    VAR_7 = (1 == VAR_6->dn_links);

    if (VAR_10 != 0) {
     FUNC_5(&VAR_8, VAR_6->dn_linklist->de_parent, VAR_2);
    }
    FUNC_2(VAR_6->dn_linklist);
   } while (!VAR_7);
  }
 }






 if (VAR_5->dn_linklist) {
  do {
   VAR_7 = (1 == VAR_5->dn_links);

   if (VAR_10 != 0) {
    FUNC_5(&VAR_8, VAR_5->dn_linklist->de_parent, VAR_2);
   }
   FUNC_2(VAR_5->dn_linklist);
  } while (!VAR_7);
 }
out:
 FUNC_1();
 if (VAR_10 != 0) {
  FUNC_3(&VAR_8);
  FUNC_6(&VAR_8, VAR_11);
 }

 return ;
}
