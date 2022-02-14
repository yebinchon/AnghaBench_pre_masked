
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct vnode* vnode_t ;
typedef scalar_t__ uint32_t ;
struct vnode {scalar_t__ v_id; } ;
struct fileproc {scalar_t__ f_type; scalar_t__ f_data; } ;
typedef int proc_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct vnode* VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int,struct fileproc*,int) ;
 int FUNC_2 (int ,int,struct fileproc**,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

int
FUNC_5(int VAR_3, struct vnode **VAR_4, uint32_t * VAR_5)
{
 proc_t VAR_6 = FUNC_0();
 struct fileproc *VAR_7;
 vnode_t VAR_8;
 int VAR_9;

 FUNC_3(VAR_6);
 if ( (VAR_9 = FUNC_2(VAR_6, VAR_3, &VAR_7, 1)) ) {
  FUNC_4(VAR_6);
  return(VAR_9);
 }
 if (VAR_7->f_type != VAR_0) {
  FUNC_1(VAR_6, VAR_3, VAR_7,1);
  FUNC_4(VAR_6);
  return(VAR_1);
 }
 VAR_8 = (struct vnode *)VAR_7->f_data;
 if (VAR_4 != ((void*)0))
  *VAR_4 = VAR_8;

 if ((VAR_5 != ((void*)0)) && (VAR_8 != VAR_2))
  *VAR_5 = (uint32_t)VAR_8->v_id;

 FUNC_4(VAR_6);

 return(0);
}
