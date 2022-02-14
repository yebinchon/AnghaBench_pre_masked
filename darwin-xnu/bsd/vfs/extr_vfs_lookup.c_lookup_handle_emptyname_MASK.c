
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* vnode_t ;
struct nameidata {TYPE_1__* ni_vp; int ni_next; TYPE_1__* ni_dvp; } ;
struct componentname {scalar_t__ cn_nameiop; int cn_flags; int cn_nameptr; scalar_t__ cn_namelen; } ;
struct TYPE_4__ {scalar_t__ v_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,TYPE_1__*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int VAR_12 ;

__attribute__((used)) static int
FUNC_3(struct nameidata *VAR_13, struct componentname *VAR_14, int VAR_15)
{
 vnode_t VAR_16;
 int VAR_17 = 0;

 VAR_16 = VAR_13->ni_vp;
 VAR_14->cn_namelen = 0;




 if (VAR_16->v_type != VAR_11) {
  VAR_17 = VAR_6;
  goto out;
 }
 if (VAR_14->cn_nameiop != VAR_9) {
  VAR_17 = VAR_4;
  goto out;
 }
 if (VAR_15) {






         if ( (FUNC_2(VAR_16)) ) {
          VAR_17 = VAR_5;
   goto out;
  }
  VAR_13->ni_dvp = VAR_16;
 }
 VAR_14->cn_flags &= ~VAR_7;
 VAR_14->cn_flags |= VAR_8;
 VAR_13->ni_next = VAR_14->cn_nameptr;
 VAR_13->ni_vp = VAR_16;

 if (VAR_14->cn_flags & VAR_2)
  FUNC_0(VAR_12, VAR_16, VAR_0);
 else if (VAR_14->cn_flags & VAR_3)
  FUNC_0(VAR_12, VAR_16, VAR_1);
 if (VAR_14->cn_flags & VAR_10)
  FUNC_1("lookup: SAVESTART");

 return 0;
out:
 return VAR_17;
}
