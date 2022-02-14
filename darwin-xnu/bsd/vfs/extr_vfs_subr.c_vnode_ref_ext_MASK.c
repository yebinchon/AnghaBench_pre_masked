
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_8__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_2__* vnode_t ;
struct uthread {int uu_flag; } ;
struct TYPE_11__ {int p_lflag; } ;
struct TYPE_10__ {scalar_t__ v_iocount; int v_usecount; int v_lflag; scalar_t__ v_owner; scalar_t__ v_writecount; scalar_t__ v_kusecount; int v_flag; scalar_t__ v_type; TYPE_1__* v_ubcinfo; scalar_t__ v_references; } ;
struct TYPE_9__ {int ui_control; } ;


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
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 TYPE_8__* FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 struct uthread* FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;

int
FUNC_9(vnode_t VAR_12, int VAR_13, int VAR_14)
{
 int VAR_15 = 0;

 FUNC_7(VAR_12);






 if (VAR_12->v_iocount <= 0 && VAR_12->v_usecount <= 0)
  FUNC_4("vnode_ref_ext: vp %p has no valid reference %d, %d", VAR_12, VAR_12->v_iocount, VAR_12->v_usecount);




 if ((VAR_14 & VAR_8) == 0) {
  if ((VAR_12->v_lflag & (VAR_6 | VAR_7 | VAR_5))) {
   if (VAR_12->v_owner != FUNC_1()) {
    VAR_15 = VAR_0;
    goto out;
   }
  }
 }
 VAR_12->v_usecount++;

 if (VAR_13 & VAR_1) {
         if (++VAR_12->v_writecount <= 0)
          FUNC_4("vnode_ref_ext: v_writecount");
 }
 if (VAR_13 & VAR_2) {
         if (++VAR_12->v_kusecount <= 0)
          FUNC_4("vnode_ref_ext: v_kusecount");
 }
 if (VAR_12->v_flag & VAR_9) {
         struct uthread *VAR_16;

         VAR_16 = FUNC_2(FUNC_1());

         if ( !(FUNC_0()->p_lflag & VAR_3) &&
       !(VAR_16->uu_flag & VAR_4)) {
   VAR_12->v_flag &= ~VAR_9;
   VAR_12->v_references = 0;
   FUNC_5(VAR_12);
  }
 }
 if (VAR_12->v_usecount == 1 && VAR_12->v_type == VAR_10 && !(VAR_12->v_flag & VAR_11)) {

  if (VAR_12->v_ubcinfo) {
   FUNC_6(VAR_12);
   FUNC_3(VAR_12->v_ubcinfo->ui_control);
  }
 }
out:
 FUNC_8(VAR_12);

 return (VAR_15);
}
