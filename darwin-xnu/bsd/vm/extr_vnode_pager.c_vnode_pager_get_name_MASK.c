
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_size_t ;
struct vnode {int dummy; } ;
typedef int kern_return_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vnode*,int *,char*,int,scalar_t__*) ;
 int FUNC_1 (char*,char const*,size_t) ;
 char* FUNC_2 (struct vnode*) ;
 int FUNC_3 (char const*) ;

kern_return_t
FUNC_4(
 struct vnode *VAR_2,
 char *VAR_3,
 vm_size_t VAR_4,
 char *VAR_5,
 vm_size_t VAR_6,
 boolean_t *VAR_7)
{
 *VAR_7 = VAR_0;
 if (VAR_3 != ((void*)0)) {

  FUNC_0(VAR_2, ((void*)0),
        VAR_3, (int) VAR_4,
        VAR_7);
 }
 if ((VAR_3 == ((void*)0) || *VAR_7) &&
     VAR_5 != ((void*)0)) {

  const char *VAR_8;

  VAR_8 = FUNC_2(VAR_2);
  FUNC_1(VAR_5, VAR_8, (size_t) VAR_6);
  FUNC_3(VAR_8);
 }
 return VAR_1;
}
