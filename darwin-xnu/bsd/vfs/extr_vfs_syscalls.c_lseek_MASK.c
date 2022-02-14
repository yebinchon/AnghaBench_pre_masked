
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef TYPE_1__* vnode_t ;
struct vfs_context {int dummy; } ;
struct lseek_args {scalar_t__ offset; int whence; int fd; } ;
struct fileproc {TYPE_7__* f_fglob; } ;
typedef int proc_t ;
typedef scalar_t__ off_t ;
typedef int caddr_t ;
struct TYPE_12__ {scalar_t__ fg_offset; } ;
struct TYPE_11__ {scalar_t__ v_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int VAR_6 ;


 scalar_t__ VAR_7 ;
 int FUNC_0 (TYPE_1__*,int ,int ,int ,struct vfs_context*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,struct fileproc**,TYPE_1__**) ;
 int FUNC_3 (int ,TYPE_7__*) ;
 int FUNC_4 (int ,TYPE_7__*) ;
 int FUNC_5 (TYPE_1__*,int,int ) ;
 struct vfs_context* FUNC_6 () ;
 int FUNC_7 (struct vfs_context*) ;
 int FUNC_8 (TYPE_1__*) ;
 scalar_t__ FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*,scalar_t__*,struct vfs_context*) ;

int
FUNC_12(proc_t VAR_8, struct lseek_args *VAR_9, off_t *VAR_10)
{
 struct fileproc *VAR_11;
 vnode_t VAR_12;
 struct vfs_context *VAR_13;
 off_t VAR_14 = VAR_9->offset, VAR_15;
 int VAR_16;

 if ( (VAR_16 = FUNC_2(VAR_8,VAR_9->fd, &VAR_11, &VAR_12)) ) {
         if (VAR_16 == VAR_1)
          return (VAR_3);
  return (VAR_16);
 }
 if (FUNC_9(VAR_12)) {
  FUNC_1(VAR_9->fd);
  return(VAR_3);
 }


 VAR_13 = FUNC_6();
 if ( (VAR_16 = FUNC_8(VAR_12)) ) {
  FUNC_1(VAR_9->fd);
  return(VAR_16);
 }

 switch (VAR_9->whence) {
 case 132:
  VAR_14 += VAR_11->f_fglob->fg_offset;
  break;
 case 130:
  if ((VAR_16 = FUNC_11(VAR_12, &VAR_15, VAR_13)) != 0)
   break;
  VAR_14 += VAR_15;
  break;
 case 131:
  break;
 case 128:
        VAR_16 = FUNC_0(VAR_12, VAR_5, (caddr_t)&VAR_14, 0, VAR_13);
  break;
 case 129:
        VAR_16 = FUNC_0(VAR_12, VAR_4, (caddr_t)&VAR_14, 0, VAR_13);
  break;
 default:
  VAR_16 = VAR_0;
 }
 if (VAR_16 == 0) {
  if (VAR_9->offset > 0 && VAR_14 < 0) {

   VAR_16 = VAR_2;
  } else {





   if (VAR_14 < 0 && VAR_12->v_type != VAR_7) {

    VAR_16 = VAR_0;
   } else {

    VAR_11->f_fglob->fg_offset = VAR_14;
    *VAR_10 = VAR_11->f_fglob->fg_offset;
   }
  }
 }





 FUNC_5(VAR_12, VAR_16, VAR_6);
 (void)FUNC_10(VAR_12);
 FUNC_1(VAR_9->fd);
 return (VAR_16);
}
