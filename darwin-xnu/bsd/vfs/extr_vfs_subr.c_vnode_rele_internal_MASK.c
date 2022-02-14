
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef TYPE_2__* vnode_t ;
struct uthread {TYPE_2__* uu_vreclaims; scalar_t__ uu_defer_reclaims; } ;
struct TYPE_16__ {scalar_t__ v_usecount; scalar_t__ v_type; int v_flag; scalar_t__ v_writecount; scalar_t__ v_kusecount; int v_iocount; int v_lflag; TYPE_1__* v_ubcinfo; struct TYPE_16__* v_defer_reclaimlist; int v_tag; int v_lock; } ;
struct TYPE_15__ {int ui_control; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int FUNC_2 () ;
 struct uthread* FUNC_3 (int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (char*,TYPE_2__*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,...) ;
 int FUNC_7 (TYPE_2__*,int) ;
 int FUNC_8 () ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (TYPE_2__*) ;
 scalar_t__ FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (TYPE_2__*,int,int,int ) ;
 int FUNC_16 (TYPE_2__*) ;

void
FUNC_17(vnode_t VAR_16, int VAR_17, int VAR_18, int VAR_19)
{

 if ( !VAR_19)
         FUNC_13(VAR_16);




 if (--VAR_16->v_usecount < 0)
  FUNC_6("vnode_rele_ext: vp %p usecount -ve : %d.  v_tag = %d, v_type = %d, v_flag = %x.", VAR_16, VAR_16->v_usecount, VAR_16->v_tag, VAR_16->v_type, VAR_16->v_flag);

 if (VAR_17 & VAR_1) {
  if (--VAR_16->v_writecount < 0)
   FUNC_6("vnode_rele_ext: vp %p writecount -ve : %d.  v_tag = %d, v_type = %d, v_flag = %x.", VAR_16, VAR_16->v_writecount, VAR_16->v_tag, VAR_16->v_type, VAR_16->v_flag);
 }
 if (VAR_17 & VAR_3) {
         if (--VAR_16->v_kusecount < 0)
          FUNC_6("vnode_rele_ext: vp %p kusecount -ve : %d.  v_tag = %d, v_type = %d, v_flag = %x.", VAR_16, VAR_16->v_kusecount, VAR_16->v_tag, VAR_16->v_type, VAR_16->v_flag);
 }
 if (VAR_16->v_kusecount > VAR_16->v_usecount)
  FUNC_6("vnode_rele_ext: vp %p kusecount(%d) out of balance with usecount(%d).  v_tag = %d, v_type = %d, v_flag = %x.",VAR_16, VAR_16->v_kusecount, VAR_16->v_usecount, VAR_16->v_tag, VAR_16->v_type, VAR_16->v_flag);

 if ((VAR_16->v_iocount > 0) || (VAR_16->v_usecount > 0)) {





  if (VAR_16->v_usecount == 0) {
   VAR_16->v_lflag |= VAR_8;
   VAR_16->v_flag &= ~(VAR_10 | VAR_13 | VAR_11);
  }
  goto done;
 }
 VAR_16->v_flag &= ~(VAR_10 | VAR_13 | VAR_11);

 if (FUNC_0(VAR_16->v_lflag, VAR_9 | VAR_6) || VAR_18) {






  if (VAR_18) {
   if ( !(VAR_16->v_lflag & (VAR_9 | VAR_6 | VAR_7)) ) {
    VAR_16->v_lflag |= VAR_8;

    if (FUNC_14(VAR_16) == VAR_0 || VAR_16->v_flag & VAR_5) {
     FUNC_9(VAR_16);
     goto done;
    }
   }
   VAR_16->v_flag |= VAR_4;
  }
  FUNC_11(VAR_16);

  goto done;
 }






 VAR_16->v_iocount++;



        VAR_16->v_lflag &= ~VAR_8;
 FUNC_16(VAR_16);

 FUNC_1(VAR_16, FUNC_8());

 FUNC_13(VAR_16);
 if ( (VAR_16->v_iocount == 1) && (VAR_16->v_usecount == 0) &&
      ((VAR_16->v_lflag & (VAR_7 | VAR_9 | VAR_6)) == VAR_7)) {
         struct uthread *VAR_20;

         VAR_20 = FUNC_3(FUNC_2());

  if (VAR_20->uu_defer_reclaims) {
          VAR_16->v_defer_reclaimlist = VAR_20->uu_vreclaims;
   VAR_20->uu_vreclaims = VAR_16;
   goto done;
  }
  FUNC_12(VAR_16);
         FUNC_15(VAR_16, 1, 1, 0);
 }
 FUNC_10(VAR_16);
 FUNC_11(VAR_16);
done:
 if (VAR_16->v_usecount == 0 && VAR_16->v_type == VAR_14 && !(VAR_16->v_flag & VAR_15)) {

  if (VAR_16->v_ubcinfo) {
   FUNC_12(VAR_16);
   FUNC_5(VAR_16->v_ubcinfo->ui_control, (VAR_16->v_flag & VAR_12) == VAR_12);
  }
 }
 if ( !VAR_19)
         FUNC_16(VAR_16);
 return;
}
