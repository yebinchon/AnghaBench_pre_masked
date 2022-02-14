
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


typedef TYPE_1__* vnode_t ;
typedef int caddr_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_11__ {scalar_t__ v_usecount; scalar_t__ v_iocount; int v_lflag; int v_flag; int v_listflag; int v_dirtyblkhd; int v_cleanblkhd; int v_lock; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int,int) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_1__*,int ) ;
 int FUNC_3 (int *,TYPE_1__*,int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int VAR_9 ;
 int FUNC_5 (TYPE_1__*,int ,int ,int ) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_8 (TYPE_1__*,int) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_9 (TYPE_1__*) ;
 int VAR_17 ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (TYPE_1__*) ;
 int VAR_18 ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (int ) ;

__attribute__((used)) static void
FUNC_15(vnode_t VAR_19)
{
 boolean_t VAR_20 = VAR_1;





again:




 if (FUNC_4(VAR_19) || (VAR_19->v_usecount != 0) || (VAR_19->v_iocount != 0) || (VAR_19->v_lflag & VAR_8))
  return;






 if (FUNC_0(VAR_19->v_lflag, VAR_7)
  && (!FUNC_1(&VAR_19->v_cleanblkhd) || !FUNC_1(&VAR_19->v_dirtyblkhd))) {
  ++VAR_19->v_iocount;



  FUNC_13(VAR_19);
  FUNC_5(VAR_19, VAR_0, 0, 0);
  FUNC_12(VAR_19);
  FUNC_9(VAR_19);
  goto again;
 }

 FUNC_10();

 if ((VAR_19->v_flag & VAR_9) && !(VAR_19->v_lflag & VAR_7)) {



  if ((VAR_19->v_flag & VAR_4))
          FUNC_2(&VAR_18, VAR_19, VAR_15);
  else
          FUNC_3(&VAR_18, VAR_19, VAR_15);

  VAR_19->v_listflag |= VAR_6;
  VAR_14++;
  FUNC_7(&VAR_13);
 } else {




         if ( (VAR_19->v_lflag & VAR_7)) {
          FUNC_2(&VAR_16, VAR_19, VAR_15);
   VAR_19->v_listflag |= VAR_5;
   VAR_11++;

   if (VAR_10) {
    VAR_10--;
    VAR_20 = VAR_3;
   }

  } else if ( (VAR_19->v_flag & VAR_4) ) {
          FUNC_2(&VAR_17, VAR_19, VAR_15);
   VAR_19->v_flag &= ~VAR_4;
   VAR_12++;
  } else {
          FUNC_3(&VAR_17, VAR_19, VAR_15);
   VAR_12++;
  }
 }
 FUNC_11();

 if (VAR_20 == VAR_3)
  FUNC_14((caddr_t)&VAR_10);
}
