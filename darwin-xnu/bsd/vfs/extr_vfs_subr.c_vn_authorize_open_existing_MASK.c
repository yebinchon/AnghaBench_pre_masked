
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef TYPE_2__* vnode_t ;
typedef int vfs_context_t ;
struct componentname {TYPE_1__* cn_ndp; } ;
typedef int kauth_action_t ;
struct TYPE_13__ {scalar_t__ v_type; scalar_t__ v_tag; } ;
struct TYPE_12__ {int ni_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
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
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_0 (int ,TYPE_2__*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,int *,int ,int ) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int ,int *,TYPE_2__*,int *,int ,int ) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;

int
FUNC_10(vnode_t VAR_20, struct componentname *VAR_21, int VAR_22, vfs_context_t VAR_23, void *VAR_24)
{

 kauth_action_t VAR_25;
 int VAR_26 = 0;
 if (VAR_21->cn_ndp == ((void*)0)) {
  FUNC_1("NULL ndp");
 }
 if (VAR_24 != ((void*)0)) {
  FUNC_1("reserved not NULL.");
 }
 if ( (VAR_22 & VAR_13) && VAR_20->v_type != VAR_16 ) {
  return (VAR_3);
 }

 if (VAR_20->v_type == VAR_18 && VAR_20->v_tag != VAR_19) {
  return (VAR_4);
 }

 if (VAR_20->v_type == VAR_17 && (VAR_22 & VAR_14) != 0) {
  return (VAR_2);
 }


 if (FUNC_4(VAR_20) && (VAR_22 & (VAR_6 | VAR_15))) {
  return (VAR_1);
 }

 if ((VAR_21->cn_ndp->ni_flag & VAR_11)) {
  if (VAR_20->v_type != VAR_16) {
   return (VAR_3);
  }
 }
 VAR_25 = 0;
 if (VAR_22 & VAR_5) {
  VAR_25 |= VAR_8;
 }
 if (VAR_22 & (VAR_6 | VAR_15)) {






  if ((VAR_22 & VAR_12) && !(VAR_22 & VAR_15)) {
   VAR_25 |= VAR_7;
  } else {
   VAR_25 |= VAR_9;
  }
 }
 VAR_26 = FUNC_3(VAR_20, ((void*)0), VAR_25, VAR_23);
 return VAR_26;
}
