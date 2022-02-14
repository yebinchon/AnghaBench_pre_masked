
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct fpathconf_args {int fd; int name; } ;
struct fileproc {int f_type; scalar_t__ f_data; } ;
typedef int proc_t ;
typedef int int32_t ;
typedef int file_type_t ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int FUNC_0 (int,int,...) ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int,struct fileproc*,int ) ;
 int FUNC_2 (int ,int,struct fileproc**,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (struct vnode*,int ,int *,int ) ;
 int FUNC_5 (struct vnode*) ;
 int FUNC_6 (struct vnode*) ;
 int VAR_4 ;

int
FUNC_7(proc_t VAR_5, struct fpathconf_args *VAR_6, int32_t *VAR_7)
{
 int VAR_8 = VAR_6->fd;
 struct fileproc *VAR_9;
 struct vnode *VAR_10;
 int VAR_11 = 0;
 file_type_t VAR_12;
 caddr_t VAR_13;


 FUNC_0(VAR_8, VAR_6->fd);
 if ( (VAR_11 = FUNC_2(VAR_5, VAR_8, &VAR_9, 0)) )
  return(VAR_11);
 VAR_12 = VAR_9->f_type;
 VAR_13 = VAR_9->f_data;

 switch (VAR_12) {

 case 129:
  if (VAR_6->name != VAR_3) {
   VAR_11 = VAR_1;
   goto out;
  }
  *VAR_7 = VAR_2;
  VAR_11 = 0;
  goto out;

 case 130:
  if (VAR_6->name != VAR_3) {
   VAR_11 = VAR_1;
   goto out;
  }
  *VAR_7 = VAR_2;
  VAR_11 = 0;
  goto out;

 case 128:
  VAR_10 = (struct vnode *)VAR_13;

  if ( (VAR_11 = FUNC_5(VAR_10)) == 0) {
          FUNC_0(VAR_4, VAR_10, VAR_0);

   VAR_11 = FUNC_4(VAR_10, VAR_6->name, VAR_7, FUNC_3());

   (void)FUNC_6(VAR_10);
  }
  goto out;

 default:
  VAR_11 = VAR_1;
  goto out;

 }

out:
 FUNC_1(VAR_5, VAR_8, VAR_9, 0);
 return(VAR_11);
}
