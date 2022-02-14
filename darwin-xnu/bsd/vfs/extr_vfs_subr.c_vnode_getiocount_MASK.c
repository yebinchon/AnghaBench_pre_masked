
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* vnode_t ;
typedef int errno_t ;
struct TYPE_7__ {int v_lflag; scalar_t__ v_type; scalar_t__ v_data; scalar_t__ v_owner; int v_iocount; unsigned int v_id; scalar_t__ v_references; int v_flag; int v_lock; scalar_t__ v_mount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int*,int *,int,char*,int *) ;
 int FUNC_2 (TYPE_1__*,int) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;

errno_t
FUNC_7(vnode_t VAR_18, unsigned int VAR_19, int VAR_20)
{
 int VAR_21 = VAR_20 & VAR_15;
 int VAR_22 = VAR_20 & VAR_16;
 int VAR_23 = VAR_20 & VAR_13;
 int VAR_24 = VAR_20 & VAR_14;
 int VAR_25 = VAR_20 & VAR_17;

 for (;;) {
  int VAR_26 = 0;




         if (VAR_21 && (VAR_18->v_lflag & VAR_8) && ((VAR_18->v_type == VAR_6) || (VAR_18->v_data == 0))) {
   return(VAR_1);
  }



  if ((VAR_18->v_lflag & (VAR_10 | VAR_9 | VAR_11)) == 0 ) {
   break;
  }



  if (VAR_22 && (VAR_18->v_lflag & VAR_10)) {
   return(VAR_1);
  }




  if ((VAR_18->v_lflag & (VAR_9 | VAR_10 | VAR_11)) &&
      (VAR_18->v_owner == FUNC_0())) {
          break;
  }

  if (VAR_23 != 0)
   break;






  if (VAR_18->v_lflag & VAR_9) {







   if (VAR_24)
    break;
   if (VAR_25 && (VAR_18->v_mount) && FUNC_3(VAR_18->v_mount))
    return (VAR_0);

   if (FUNC_4(VAR_18)) {
    VAR_26 = VAR_2;
   }
  }

  FUNC_6(VAR_18);

  if (VAR_18->v_lflag & VAR_11) {
   int VAR_27;

   VAR_18->v_lflag |= VAR_12;

   VAR_27 = FUNC_1(&VAR_18->v_lflag, &VAR_18->v_lock,
      (VAR_3 | VAR_26), "vnode getiocount", ((void*)0));
   if (VAR_27)
    return (VAR_27);
  } else
   FUNC_1(&VAR_18->v_iocount, &VAR_18->v_lock, VAR_3, "vnode_getiocount", ((void*)0));
 }
 if (VAR_25 && VAR_19 != VAR_18->v_id) {
  return(VAR_1);
 }
 if (++VAR_18->v_references >= VAR_5 ||
     (VAR_18->v_flag & VAR_7 && VAR_18->v_references >= VAR_4)) {
         VAR_18->v_references = 0;
  FUNC_5(VAR_18);
 }
 VAR_18->v_iocount++;



 return(0);
}
