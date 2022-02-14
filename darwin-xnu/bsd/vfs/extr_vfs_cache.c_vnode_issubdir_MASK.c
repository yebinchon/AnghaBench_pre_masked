
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_1__ ;


typedef TYPE_1__* vnode_t ;
typedef int vfs_context_t ;
typedef int uint32_t ;
struct componentname {int cn_flags; char* cn_pnbuf; int cn_pnlen; char* cn_nameptr; int cn_namelen; int cn_context; int cn_nameiop; } ;
typedef int dotdotbuf ;
typedef int cn ;
typedef int boolean_t ;
struct TYPE_16__ {int v_flag; struct TYPE_16__* v_parent; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_1__* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (TYPE_1__*,TYPE_1__**,struct componentname*,int ) ;
 int FUNC_3 (struct componentname*,int) ;
 int FUNC_4 (TYPE_1__*,TYPE_1__*,int*,TYPE_1__**) ;
 TYPE_1__* VAR_10 ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,TYPE_1__*,int *,int ,int ,int ) ;
 int FUNC_8 (TYPE_1__*) ;

int
FUNC_9(vnode_t VAR_11, vnode_t VAR_12, int *VAR_13, vfs_context_t VAR_14)
{
 vnode_t VAR_15, VAR_16;
 vnode_t VAR_17;
 int VAR_18 = 0;
 char VAR_19[] = "..";
 int VAR_20 = 0;


 *VAR_13 = VAR_1;
 VAR_16 = VAR_15 = VAR_11;




 VAR_17 = VAR_6;

 while (1) {
  boolean_t VAR_21;
  vnode_t VAR_22;
  uint32_t VAR_23;
  struct componentname VAR_24;
  boolean_t VAR_25 = VAR_1;

  if (VAR_16 == VAR_12) {
   *VAR_13 = VAR_7;
   break;
  } else if (VAR_16 == VAR_10) {

   break;
  }

  FUNC_0();

  VAR_21 = FUNC_4(VAR_16, VAR_12, &VAR_25,
      &VAR_16);

  if (VAR_21 && VAR_16)
   VAR_23 = FUNC_8(VAR_16);

  FUNC_1();

  if (!VAR_21) {
   *VAR_13 = VAR_25;
   break;
  }

  if (!VAR_16) {
   if (VAR_20++ < VAR_5) {
    VAR_16 = VAR_11;
    continue;
   }
   VAR_18 = VAR_0;
   break;
  }

  if (VAR_16 != VAR_15) {
   if (VAR_17) {
    FUNC_6(VAR_17);
    VAR_17 = VAR_6;
   }

   VAR_18 = FUNC_5(VAR_16, VAR_23);
   if (VAR_18) {
    if (VAR_20++ < VAR_5) {
     VAR_16 = VAR_11;
     VAR_18 = 0;
     continue;
    }
    break;
   }

   VAR_17 = VAR_16;
  }

  FUNC_3(&VAR_24, sizeof(VAR_24));
  VAR_24.cn_nameiop = VAR_4;
  VAR_24.cn_flags = VAR_3 | VAR_2;
  VAR_24.cn_context = VAR_14;
  VAR_24.cn_pnbuf = &VAR_19[0];
  VAR_24.cn_pnlen = sizeof(VAR_19);
  VAR_24.cn_nameptr = VAR_24.cn_pnbuf;
  VAR_24.cn_namelen = 2;

  VAR_22 = VAR_6;
  if ((VAR_18 = FUNC_2(VAR_16, &VAR_22, &VAR_24, VAR_14)))
   break;

  if (!(VAR_16->v_flag & VAR_8) && VAR_16->v_parent != VAR_22) {
   (void)FUNC_7(VAR_16, VAR_22, ((void*)0), 0, 0,
       VAR_9);
  }

  if (VAR_17)
   FUNC_6(VAR_17);

  VAR_17 = VAR_16 = VAR_22;
 }

 if (VAR_17)
  FUNC_6(VAR_17);

 return (VAR_18);
}
