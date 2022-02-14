
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vfs_context_t ;
struct vnode {scalar_t__ v_type; } ;
struct componentname {int cn_flags; char* cn_nameptr; scalar_t__ cn_nameiop; int cn_context; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_0 (struct vnode*,struct vnode**,struct componentname*,int ) ;
 int VAR_17 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (struct vnode*) ;
 int FUNC_3 (struct vnode*) ;

int
FUNC_4(struct vnode *VAR_18, struct vnode **VAR_19, struct componentname *VAR_20)
{
 struct vnode *VAR_21 = ((void*)0);
 int VAR_22;
 int VAR_23;
 int VAR_24 = 0;




 vfs_context_t VAR_25 = VAR_20->cn_context;;




 VAR_22 = VAR_20->cn_flags & (VAR_8|VAR_17);
 VAR_23 = VAR_20->cn_flags & VAR_12;
 VAR_20->cn_flags &= ~VAR_7;

 if (VAR_20->cn_flags & VAR_11)
         VAR_20->cn_flags &= ~VAR_10;
 else
         VAR_20->cn_flags |= VAR_10;

 VAR_21 = VAR_18;






 if (VAR_20->cn_nameptr[0] == '\0') {
  if (VAR_20->cn_nameiop != VAR_9 || VAR_22) {
   VAR_24 = VAR_1;
   goto bad;
  }
  if (VAR_21->v_type != VAR_15) {
   VAR_24 = VAR_4;
   goto bad;
  }
  if ( (FUNC_2(VAR_21)) ) {
          VAR_24 = VAR_3;
   goto bad;
  }
  *VAR_19 = VAR_21;

  if (VAR_20->cn_flags & VAR_14)
   FUNC_1("lookup: SAVESTART");
  return (0);
 }



 if ( (VAR_24 = FUNC_0(VAR_21, VAR_19, VAR_20, VAR_25)) ) {
  if (VAR_24 != VAR_2)
   goto bad;
  if (VAR_23) {
   VAR_24 = VAR_5;
   goto bad;
  }





  return (0);
 }
 VAR_21 = *VAR_19;
 if (VAR_23 &&
     (VAR_20->cn_nameiop == VAR_0 || VAR_20->cn_nameiop == VAR_13)) {
  VAR_24 = VAR_5;
  goto bad2;
 }


 return (0);

bad2:
 FUNC_3(VAR_21);
bad:
 *VAR_19 = ((void*)0);

 return (VAR_24);
}
