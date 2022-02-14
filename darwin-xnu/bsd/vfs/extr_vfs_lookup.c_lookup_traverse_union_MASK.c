
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_2__* vnode_t ;
typedef int vfs_context_t ;
struct nameidata {TYPE_2__* ni_vp; TYPE_2__* ni_dvp; } ;
struct TYPE_9__ {int v_flag; TYPE_1__* v_mount; struct TYPE_9__* v_parent; } ;
struct TYPE_8__ {TYPE_2__* mnt_vnodecovered; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct nameidata*,int ,int ,int ,int ,int ,int ) ;
 TYPE_2__* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (struct nameidata*) ;
 int FUNC_5 (struct nameidata*) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char const*) ;
 char* FUNC_8 (TYPE_2__*) ;
 scalar_t__ FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (char const*) ;

int
FUNC_11(vnode_t VAR_10, vnode_t *VAR_11, vfs_context_t VAR_12)
{
 char *VAR_13 = ((void*)0), *VAR_14;
 const char *VAR_15, *VAR_16;
 int VAR_17;
 int VAR_18 = 0;
 struct nameidata VAR_19;
 vnode_t VAR_20 = VAR_10;

 *VAR_11 = ((void*)0);

 if (VAR_20 && VAR_20->v_flag & VAR_9) {
  *VAR_11 = VAR_20->v_mount->mnt_vnodecovered;
  if (FUNC_9(*VAR_11))
   return VAR_1;
  return 0;
 }

 VAR_13 = (char *) FUNC_2(VAR_4);
 if (VAR_13 == ((void*)0)) {
  VAR_18 = VAR_2;
  goto done;
 }






 VAR_14 = VAR_13 + (VAR_4 - 1);
 *VAR_14 = '\0';

 while (1) {
  VAR_15 = FUNC_8(VAR_20);
  if (VAR_15 == ((void*)0)) {
   FUNC_6("lookup_traverse_union: null parent name: .%s\n", VAR_14);
   VAR_18 = VAR_1;
   goto done;
  }
  VAR_17 = FUNC_7(VAR_15);
  if ((VAR_17 + 1) > (VAR_14 - VAR_13)) {
   VAR_18 = VAR_0;
   FUNC_10(VAR_15);
   goto done;
  }
  for (VAR_16 = VAR_15 + VAR_17; VAR_17 > 0; VAR_17--)
   *--VAR_14 = *--VAR_16;
  FUNC_10(VAR_15);
  VAR_20 = VAR_20->v_parent;
  if (VAR_20 == VAR_5 || VAR_20->v_flag & VAR_9)
   break;
  *--VAR_14 = '/';
 }


 FUNC_1(&VAR_19, VAR_3, VAR_6, VAR_8, VAR_7, FUNC_0(VAR_14), VAR_12);
 VAR_19.ni_dvp = VAR_10->v_mount->mnt_vnodecovered;
 VAR_18 = FUNC_4(&VAR_19);
 if (VAR_18 == 0)
  *VAR_11 = VAR_19.ni_vp;
 FUNC_5(&VAR_19);
done:
 if (VAR_13)
  FUNC_3(VAR_13, VAR_4);
 return VAR_18;
}
