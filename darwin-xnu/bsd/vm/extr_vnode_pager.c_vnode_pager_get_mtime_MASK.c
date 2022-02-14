
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct timespec {int dummy; } ;
typedef int kern_return_t ;


 int VAR_0 ;
 int FUNC_0 (struct vnode*,struct timespec*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct vnode*,struct timespec*,int ) ;

kern_return_t
FUNC_3(
 struct vnode *VAR_1,
 struct timespec *VAR_2,
 struct timespec *VAR_3)
{
 FUNC_2(VAR_1, VAR_2, FUNC_1());
 if (VAR_3 != ((void*)0)) {
  FUNC_0(VAR_1, VAR_3);
 }
 return VAR_0;
}
