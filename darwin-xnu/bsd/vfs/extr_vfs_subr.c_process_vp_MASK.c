
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef TYPE_2__* vnode_t ;
struct TYPE_17__ {scalar_t__ tqe_prev; scalar_t__ tqe_next; } ;
struct TYPE_18__ {unsigned int v_id; scalar_t__ v_usecount; scalar_t__ v_iocount; int v_lflag; scalar_t__ v_type; int v_flag; int v_ncchildren; int v_nclinks; TYPE_1__ v_mntvnodes; scalar_t__ v_kusecount; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_2__* VAR_1 ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (char*,TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 () ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 scalar_t__ FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*,int,int,int ) ;
 int FUNC_13 (TYPE_2__*) ;

__attribute__((used)) static vnode_t
FUNC_14(vnode_t VAR_11, int VAR_12, int *VAR_13)
{
 unsigned int VAR_14;

 *VAR_13 = 0;

 VAR_14 = VAR_11->v_id;

 FUNC_6(VAR_11);

 FUNC_7();

 FUNC_9(VAR_11);






 if ((VAR_14 != VAR_11->v_id) || (VAR_11->v_usecount != 0) || (VAR_11->v_iocount != 0) ||
     FUNC_2(VAR_11) || (VAR_11->v_lflag & VAR_7)) {





  FUNC_13(VAR_11);

  return (VAR_1);
 }
 if ( (VAR_11->v_lflag & (VAR_6 | VAR_5)) == VAR_6 ) {
         VAR_11->v_iocount++;



  FUNC_11(VAR_11);
  FUNC_13(VAR_11);

  return (VAR_1);
 }



 if (VAR_11->v_type != VAR_2) {
  if (VAR_12 && (FUNC_10(VAR_11) == VAR_0 || (VAR_11->v_flag & VAR_3))) {
   FUNC_5(VAR_11);
   FUNC_13(VAR_11);

   *VAR_13 = 1;

   return (VAR_1);
  }
  if (VAR_11->v_lflag & VAR_4)
   FUNC_3("new_vnode(%p): the vnode is VL_DEAD but not VBAD", VAR_11);

  FUNC_8(VAR_11);
  (void)FUNC_12(VAR_11, 1, VAR_12, 0);

  if (VAR_12) {
   if ((FUNC_2(VAR_11)))
    FUNC_3("new_vnode(%p): vp on list", VAR_11);
   if (VAR_11->v_usecount || VAR_11->v_iocount || VAR_11->v_kusecount ||
       (VAR_11->v_lflag & (VAR_10 | VAR_9 | VAR_8)))
    FUNC_3("new_vnode(%p): free vnode still referenced", VAR_11);
   if ((VAR_11->v_mntvnodes.tqe_prev != 0) && (VAR_11->v_mntvnodes.tqe_next != 0))
    FUNC_3("new_vnode(%p): vnode seems to be on mount list", VAR_11);
   if ( !FUNC_0(&VAR_11->v_nclinks) || !FUNC_1(&VAR_11->v_ncchildren))
    FUNC_3("new_vnode(%p): vnode still hooked into the name cache", VAR_11);
  } else {
   FUNC_13(VAR_11);
   VAR_11 = VAR_1;
  }
 }
 return (VAR_11);
}
