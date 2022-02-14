
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef int vnode_t ;
typedef int user_addr_t ;
typedef scalar_t__ uint32_t ;
struct pshmnode {int dummy; } ;
struct psemnode {int dummy; } ;
struct pipe {int dummy; } ;
struct kqueue {int dummy; } ;
struct fileproc {int dummy; } ;
typedef int socket_t ;
typedef TYPE_2__* proc_t ;
typedef int int32_t ;
struct TYPE_23__ {TYPE_1__* p_fd; } ;
struct TYPE_22__ {struct kqueue* fd_wqkqueue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* VAR_6 ;

 scalar_t__ VAR_7 ;

 scalar_t__ VAR_8 ;

 scalar_t__ VAR_9 ;

 scalar_t__ VAR_10 ;

 scalar_t__ VAR_11 ;

 scalar_t__ VAR_12 ;

 scalar_t__ VAR_13 ;

 scalar_t__ VAR_14 ;

 scalar_t__ VAR_15 ;
 int FUNC_0 (TYPE_2__*,int,struct fileproc*,int ) ;
 int FUNC_1 (TYPE_2__*,int,struct fileproc**,struct kqueue**) ;
 int FUNC_2 (TYPE_2__*,int,struct fileproc**,struct pipe**) ;
 int FUNC_3 (TYPE_2__*,int,struct fileproc**,struct psemnode**) ;
 int FUNC_4 (TYPE_2__*,int,struct fileproc**,struct pshmnode**) ;
 int FUNC_5 (TYPE_2__*,int,struct fileproc**,int *) ;
 int FUNC_6 (TYPE_2__*,int,struct fileproc**,int *,scalar_t__*) ;
 int FUNC_7 (TYPE_2__*,struct kqueue*,int ,scalar_t__,int *) ;
 int FUNC_8 (struct kqueue*,struct fileproc*,TYPE_2__*,int,int ,scalar_t__,int *) ;
 int FUNC_9 (struct pipe*,struct fileproc*,TYPE_2__*,int,int ,scalar_t__,int *) ;
 int FUNC_10 (struct psemnode*,struct fileproc*,TYPE_2__*,int,int ,scalar_t__,int *) ;
 int FUNC_11 (struct pshmnode*,struct fileproc*,TYPE_2__*,int,int ,scalar_t__,int *) ;
 int FUNC_12 (int ,struct fileproc*,TYPE_2__*,int,int ,scalar_t__,int *) ;
 int FUNC_13 (int ,scalar_t__,struct fileproc*,TYPE_2__*,int,int ,scalar_t__,int *) ;
 int FUNC_14 (int ,scalar_t__,struct fileproc*,TYPE_2__*,int,int ,scalar_t__,int *) ;
 TYPE_2__* FUNC_15 (int) ;
 int FUNC_16 (TYPE_2__*) ;
 int FUNC_17 (TYPE_2__*,int ,int,int ) ;

int
FUNC_18(int VAR_16, int VAR_17, int VAR_18, user_addr_t VAR_19, uint32_t VAR_20, int32_t * VAR_21)
{
 proc_t VAR_22;
 int VAR_23 = VAR_3;
 struct fileproc * VAR_24 = ((void*)0);
 uint32_t VAR_25;

 switch (VAR_17) {
  case 129:
   VAR_25 = VAR_14;
   break;
  case 128:
   VAR_25 = VAR_15;
   break;
  case 130:
   VAR_25 = VAR_13;
   break;
  case 132:
   VAR_25 = VAR_11;
   break;
  case 131:
   VAR_25 = VAR_12;
   break;
  case 133:
   VAR_25 = VAR_10;
   break;
  case 135:
   VAR_25 = VAR_8;
   break;
  case 134:
   VAR_25 = VAR_9;
   if (VAR_19 == (user_addr_t)0)
    VAR_25 = 0;
   break;
  case 136:
   VAR_25 = VAR_7;
   break;

  default:
   return(VAR_1);

 }

 if (VAR_20 < VAR_25)
  return(VAR_2);

 if ((VAR_22 = FUNC_15(VAR_16)) == VAR_6) {
  VAR_23 = VAR_4;
  goto out;
 }


 if ((VAR_23 = FUNC_17(VAR_22, VAR_5, VAR_17, VAR_0)))
  goto out1;

 switch (VAR_17) {
  case 129: {
   vnode_t VAR_26;
   uint32_t VAR_27=0;

   if ((VAR_23 = FUNC_6(VAR_22, VAR_18, &VAR_24, &VAR_26, &VAR_27)) !=0) {
    goto out1;
   }

   VAR_23 = FUNC_13(VAR_26, VAR_27, VAR_24, VAR_22, VAR_18, VAR_19, VAR_20, VAR_21);
  }
  break;

  case 128: {
   vnode_t VAR_28;
   uint32_t VAR_29=0;

   if ((VAR_23 = FUNC_6(VAR_22, VAR_18, &VAR_24, &VAR_28, &VAR_29)) !=0) {
    goto out1;
   }


   VAR_23 = FUNC_14(VAR_28, VAR_29, VAR_24, VAR_22, VAR_18, VAR_19, VAR_20, VAR_21);
  }
  break;

  case 130: {
   socket_t VAR_30;

   if ((VAR_23 = FUNC_5(VAR_22, VAR_18, &VAR_24, &VAR_30)) !=0) {
    goto out1;
   }

   VAR_23 = FUNC_12(VAR_30, VAR_24, VAR_22, VAR_18, VAR_19, VAR_20, VAR_21);
  }
  break;

  case 132: {
   struct psemnode * VAR_31;

   if ((VAR_23 = FUNC_3(VAR_22, VAR_18, &VAR_24, &VAR_31)) !=0) {
    goto out1;
   }

   VAR_23 = FUNC_10(VAR_31, VAR_24, VAR_22, VAR_18, VAR_19, VAR_20, VAR_21);
  }
  break;

  case 131: {
   struct pshmnode * VAR_32;

   if ((VAR_23 = FUNC_4(VAR_22, VAR_18, &VAR_24, &VAR_32)) !=0) {
    goto out1;
   }

   VAR_23 = FUNC_11(VAR_32, VAR_24, VAR_22, VAR_18, VAR_19, VAR_20, VAR_21);
  }
  break;

  case 133: {
   struct pipe * VAR_33;

   if ((VAR_23 = FUNC_2(VAR_22, VAR_18, &VAR_24, &VAR_33)) !=0) {
    goto out1;
   }

   VAR_23 = FUNC_9(VAR_33, VAR_24, VAR_22, VAR_18, VAR_19, VAR_20, VAR_21);
  }
  break;

  case 135: {
   struct kqueue * VAR_34;

   if (VAR_18 == -1) {
    if ((VAR_34 = VAR_22->p_fd->fd_wqkqueue) == ((void*)0)) {

     VAR_23 = 0;
     break;
    }
   } else if ((VAR_23 = FUNC_1(VAR_22, VAR_18, &VAR_24, &VAR_34)) != 0) {
    goto out1;
   }


   VAR_23 = FUNC_8(VAR_34, VAR_24, VAR_22, VAR_18, VAR_19, VAR_20, VAR_21);
  }
  break;

  case 134: {
   struct kqueue * VAR_35;

   if (VAR_18 == -1) {
    if ((VAR_35 = VAR_22->p_fd->fd_wqkqueue) == ((void*)0)) {

     VAR_23 = 0;
     break;
    }
   } else if ((VAR_23 = FUNC_1(VAR_22, VAR_18, &VAR_24, &VAR_35)) != 0) {
    goto out1;
   }
   VAR_23 = FUNC_7(VAR_22, VAR_35, VAR_19, VAR_20, VAR_21);
  }
  break;

  default: {
   VAR_23 = VAR_1;
   goto out1;
  }
 }

 if (VAR_24) {
  FUNC_0(VAR_22, VAR_18, VAR_24 , 0);
 }
out1 :
 FUNC_16(VAR_22);
out:
 return(VAR_23);
}
