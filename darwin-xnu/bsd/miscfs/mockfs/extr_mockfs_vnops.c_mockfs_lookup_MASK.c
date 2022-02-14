
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* vnode_t ;
typedef int vfs_context_t ;
struct vnop_lookup_args {int a_context; struct componentname* a_cnp; TYPE_1__** a_vpp; TYPE_1__* a_dvp; } ;
struct componentname {int cn_nameiop; char* cn_nameptr; size_t cn_namelen; } ;
typedef TYPE_2__* mockfs_fsnode_t ;
struct TYPE_8__ {scalar_t__ type; } ;
struct TYPE_7__ {scalar_t__ v_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_2__*,int ,TYPE_2__**) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__**) ;
 int FUNC_2 (char*,char*,int) ;

int FUNC_3(struct vnop_lookup_args * VAR_5)
{
 char VAR_6;
 int VAR_7;
 int VAR_8;
 mockfs_fsnode_t VAR_9;
 mockfs_fsnode_t VAR_10;
 vnode_t VAR_11;
 vnode_t * VAR_12;
 vfs_context_t VAR_13;
 struct componentname * VAR_14;

 VAR_7 = 0;
 VAR_11 = VAR_5->a_dvp;
 VAR_12 = VAR_5->a_vpp;
 VAR_14 = VAR_5->a_cnp;
 VAR_13 = VAR_5->a_context;
 VAR_8 = VAR_14->cn_nameiop;
 VAR_9 = (mockfs_fsnode_t) VAR_11->v_data;
 VAR_10 = ((void*)0);

 if ((VAR_8 == VAR_1) && (VAR_9->type == VAR_4)) {





  VAR_6 = VAR_14->cn_nameptr[VAR_14->cn_namelen];
  VAR_14->cn_nameptr[VAR_14->cn_namelen] = '\0';






  if (!FUNC_2(VAR_14->cn_nameptr, "sbin", 5))
   VAR_10 = VAR_9;
  else if (!FUNC_2(VAR_14->cn_nameptr, "dev", 4))
   FUNC_0(VAR_9, VAR_2, &VAR_10);
  else if (!FUNC_2(VAR_14->cn_nameptr, "launchd", 8))
   FUNC_0(VAR_9, VAR_3, &VAR_10);
  else
   VAR_7 = VAR_0;

  VAR_14->cn_nameptr[VAR_14->cn_namelen] = VAR_6;

  if (VAR_10)
   VAR_7 = FUNC_1(VAR_10, VAR_12);
 }
 else {




  VAR_7 = VAR_0;
 }

 return VAR_7;
}
