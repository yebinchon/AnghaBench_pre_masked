
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_1__* vnode_t ;
typedef int vfs_context_t ;
struct TYPE_11__ {int p_flag; int p_acflag; } ;
struct TYPE_10__ {int v_flag; } ;


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
 int FUNC_0 (TYPE_1__*,int,int ) ;
 int FUNC_1 (TYPE_1__*,int,int ) ;
 int VAR_10 ;
 TYPE_7__* FUNC_2 () ;
 int FUNC_3 (int ,int ,uintptr_t,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,TYPE_1__*,int) ;
 int FUNC_6 (int ,TYPE_1__*,int) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_1__*,int *,int,int ) ;
 int FUNC_10 (TYPE_1__*,int,int ) ;

__attribute__((used)) static int
FUNC_11(vnode_t VAR_11, int VAR_12, vfs_context_t VAR_13)
{
 int VAR_14, VAR_15;

 if ((VAR_14 = FUNC_7(FUNC_4(), &(FUNC_2()->p_acflag)))) {
  return VAR_14;
 }
 VAR_15 = 0;
 if (VAR_12 & VAR_0) {
  VAR_15 |= VAR_4;
 }
 if (VAR_12 & (VAR_1 | VAR_8)) {






  if ((VAR_12 & VAR_6) && !(VAR_12 & VAR_8)) {
   VAR_15 |= VAR_3;
  } else {
   VAR_15 |= VAR_5;
  }
 }

 if ((VAR_14 = FUNC_9(VAR_11, ((void*)0), VAR_15, VAR_13)) != 0)
  return VAR_14;
 if ((VAR_11->v_flag & VAR_10) && (FUNC_2()->p_flag & VAR_9)) {
  VAR_12 |= VAR_7;
 }

 if ( (VAR_14 = FUNC_1(VAR_11, VAR_12, VAR_13)) ) {
  return VAR_14;
 }
 if ( (VAR_14 = FUNC_10(VAR_11, VAR_12, 0)) ) {
  FUNC_0(VAR_11, VAR_12, VAR_13);
  return VAR_14;
 }







 FUNC_3(FUNC_8(VAR_13), VAR_2,
          (uintptr_t)VAR_11, 0);


 return 0;
}
