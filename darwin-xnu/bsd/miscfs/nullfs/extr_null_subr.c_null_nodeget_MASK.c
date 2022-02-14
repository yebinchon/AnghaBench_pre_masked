
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct mount {int dummy; } ;
struct componentname {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct vnode*) ;
 int FUNC_1 (struct mount*,struct vnode*,struct vnode*,struct vnode**,struct componentname*,int) ;
 int FUNC_2 (struct mount*,struct vnode*,struct vnode**) ;
 int FUNC_3 (struct mount*,int ,struct vnode**) ;
 int FUNC_4 (struct vnode*) ;
 int FUNC_5 (struct vnode*) ;
 int FUNC_6 (struct vnode*) ;
 int FUNC_7 (struct vnode*) ;

int
FUNC_8(
    struct mount * VAR_1, struct vnode * VAR_2, struct vnode * VAR_3, struct vnode ** VAR_4, struct componentname * VAR_5, int VAR_6)
{
 struct vnode * VAR_7;
 int VAR_8;


 VAR_8 = FUNC_2(VAR_1, VAR_2, VAR_4);


 if (VAR_8 != VAR_0) {




  return VAR_8;
 }





 VAR_8 = FUNC_6(VAR_2);
 if(VAR_8)
 {

  return VAR_8;
 }

 VAR_8 = FUNC_1(VAR_1, VAR_2, VAR_3, &VAR_7, VAR_5, VAR_6);

 if (VAR_8) {
  FUNC_7(VAR_2);
  return (VAR_8);
 }





 VAR_8 = FUNC_3(VAR_1, FUNC_0(VAR_7), VAR_4);
 if (VAR_8 || *VAR_4 != ((void*)0)) {

  FUNC_5(VAR_7);
  FUNC_4(VAR_7);

  return VAR_8;
 }


 *VAR_4 = VAR_7;

 return (0);
}
