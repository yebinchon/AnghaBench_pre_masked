
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int va_list ;
typedef int uint32_t ;
typedef int uid_t ;
struct devfs_vnode_event {int dummy; } ;
struct devfs_event_log {int dummy; } ;
typedef int gid_t ;
struct TYPE_15__ {int dev; } ;
typedef TYPE_3__ devnode_type_t ;
struct TYPE_13__ {int myname; } ;
struct TYPE_14__ {TYPE_1__ Dir; } ;
struct TYPE_16__ {TYPE_2__ dn_typeinfo; } ;
typedef TYPE_4__ devnode_t ;
typedef int devfstype_t ;
struct TYPE_17__ {TYPE_6__* de_dnp; } ;
typedef TYPE_5__ devdirent_t ;
typedef int dev_t ;
typedef int buff ;
typedef int buf ;
struct TYPE_18__ {int dn_mode; int (* dn_clone ) (int ,int) ;int dn_uid; int dn_gid; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 (char*,char*,int) ;
 scalar_t__ FUNC_3 (char*,TYPE_4__*,int ,TYPE_3__*,int *,int *,TYPE_5__**) ;
 scalar_t__ FUNC_4 (char const*,int *,int ,TYPE_4__**,struct devfs_event_log*) ;
 int FUNC_5 (struct devfs_event_log*) ;
 scalar_t__ FUNC_6 (struct devfs_event_log*,int,struct devfs_vnode_event*) ;
 int VAR_2 ;
 int FUNC_7 (int ,TYPE_5__*,struct devfs_event_log*) ;
 int VAR_3 ;
 int FUNC_8 (struct devfs_event_log*,int) ;
 int FUNC_9 (int ,TYPE_6__*,char*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*,int,char const*,int ) ;

__attribute__((used)) static devdirent_t *
FUNC_13(dev_t VAR_4, devfstype_t VAR_5, uid_t VAR_6,
  gid_t VAR_7, int VAR_8, int (*VAR_9)(dev_t VAR_10, int VAR_11), const char *VAR_12, va_list VAR_13)
{
 devdirent_t * VAR_14 = ((void*)0);
 devnode_t * VAR_15;
 devnode_type_t VAR_16;

 char *VAR_17, VAR_18[256];
 const char *VAR_19;



 int VAR_20;
 uint32_t VAR_21;
 struct devfs_event_log VAR_22;
 struct devfs_vnode_event VAR_23[VAR_1];
 int VAR_24 = 0;

 FUNC_12(VAR_18, sizeof(VAR_18), VAR_12, VAR_13);





 VAR_17 = ((void*)0);

 for(VAR_20=FUNC_11(VAR_18); VAR_20>0; VAR_20--)
  if(VAR_18[VAR_20] == '/') {
   VAR_17=&VAR_18[VAR_20];
   VAR_18[VAR_20]=0;
   break;
  }

 if (VAR_17) {
  *VAR_17++ = '\0';
  VAR_19 = VAR_18;
 } else {
  VAR_17 = VAR_18;
  VAR_19 = "/";
 }

 VAR_21 = VAR_2;
 if (VAR_21 > VAR_1) {
wrongsize:
  VAR_24 = 1;
  if (FUNC_6(&VAR_22, VAR_21, ((void*)0)) != 0) {
   return ((void*)0);
  }
 } else {
  VAR_24 = 0;
  VAR_21 = VAR_1;
  if (FUNC_6(&VAR_22, VAR_21, &VAR_23[0]) != 0) {
   return ((void*)0);
  }
 }

 FUNC_0();
 if (VAR_21 < VAR_2) {
  FUNC_1();
  FUNC_8(&VAR_22, VAR_24);
  VAR_21 = VAR_21 * 2;
  goto wrongsize;
 }

 if (!VAR_3) {
  FUNC_10("devfs_make_node: not ready for devices!\n");
  goto out;
 }


 if (FUNC_4(VAR_19, ((void*)0), VAR_0, &VAR_15, &VAR_22) == 0) {
     VAR_16.dev = VAR_4;
     if (FUNC_3(VAR_17, VAR_15, VAR_5, &VAR_16, ((void*)0), ((void*)0), &VAR_14) == 0) {
  VAR_14->de_dnp->dn_gid = VAR_7;
  VAR_14->de_dnp->dn_uid = VAR_6;
  VAR_14->de_dnp->dn_mode |= VAR_8;
  VAR_14->de_dnp->dn_clone = VAR_9;



  FUNC_7(VAR_15->dn_typeinfo.Dir.myname, VAR_14, &VAR_22);
     }
 }

out:
 FUNC_1();

 FUNC_5(&VAR_22);
 FUNC_8(&VAR_22, VAR_24);
 return VAR_14;
}
