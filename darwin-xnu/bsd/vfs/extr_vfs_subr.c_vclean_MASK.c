
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_1__ ;


typedef TYPE_1__* vnode_t ;
typedef int vfs_context_t ;
struct mount {int dummy; } ;
typedef int off_t ;
struct TYPE_23__ {int v_usecount; int v_lflag; scalar_t__ v_tag; scalar_t__ v_parent; int v_flag; int * v_data; int v_op; int v_mount; scalar_t__ v_resolve; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int,int *) ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
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
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_2 (TYPE_1__*,int,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int ) ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int FUNC_6 (TYPE_1__*,int,int ,int ) ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_7 (TYPE_1__*,struct mount*) ;
 int FUNC_8 (TYPE_1__*,int ,int ,int ) ;
 int VAR_25 ;
 int FUNC_9 (char*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*,int ,int ,int *,int) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 () ;
 int FUNC_15 (TYPE_1__*) ;
 scalar_t__ FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (TYPE_1__*) ;
 int FUNC_19 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_20 (TYPE_1__*) ;
 int FUNC_21 (TYPE_1__*) ;
 int FUNC_22 (TYPE_1__*,scalar_t__,int *,int ,int ,int) ;
 int FUNC_23 (int*) ;

__attribute__((used)) static void
FUNC_24(vnode_t VAR_26, int VAR_27)
{
 vfs_context_t VAR_28 = FUNC_14();
 int VAR_29;
 int VAR_30;
 int VAR_31;
 int VAR_32 = 0;
 VAR_29 = VAR_26->v_usecount;





 VAR_30 = (VAR_26->v_lflag & VAR_14);

 VAR_26->v_lflag &= ~VAR_14;





 VAR_31 = (VAR_26->v_lflag & VAR_15);

 VAR_26->v_lflag |= VAR_15;





 FUNC_21(VAR_26);

 FUNC_0(1, &VAR_25);

 if (VAR_27 & VAR_2)
  VAR_32 |= VAR_3;
 if (VAR_27 & VAR_7)
  VAR_32 |= VAR_4;

 if (VAR_29 && (VAR_27 & VAR_2))
  FUNC_2(VAR_26, VAR_32, VAR_28);




 if (VAR_27 & VAR_2) {





  {
   FUNC_3(VAR_26, VAR_5, VAR_28);
   FUNC_6(VAR_26, VAR_1 | (VAR_29 ? 0 : VAR_0), 0, 0);
  }
  if (FUNC_1(VAR_26))



          (void)FUNC_12(VAR_26, (off_t)0, FUNC_11(VAR_26), ((void*)0), VAR_9 | VAR_8 | VAR_10);
 }
 if (VAR_29 || VAR_30)
  FUNC_4(VAR_26, VAR_28);
 FUNC_10(VAR_26);
 if (FUNC_5(VAR_26, VAR_28))
  FUNC_9("vclean: cannot reclaim");


 FUNC_22(VAR_26, VAR_6, ((void*)0), 0, 0, VAR_18 | VAR_17 | VAR_19);

 FUNC_17(VAR_26);







 FUNC_7(VAR_26, (struct mount *)0);

 VAR_26->v_mount = VAR_23;
 VAR_26->v_op = VAR_24;
 VAR_26->v_tag = VAR_21;
 VAR_26->v_data = ((void*)0);

 VAR_26->v_lflag |= VAR_12;
 VAR_26->v_flag &= ~VAR_11;

 if (VAR_31 == 0) {
         VAR_26->v_lflag &= ~VAR_15;



  if (VAR_26->v_lflag & VAR_16) {
          VAR_26->v_lflag &= ~VAR_16;
   FUNC_23(&VAR_26->v_lflag);
  }
 }
}
