
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,char const*) ;
 int FUNC_1 (struct vnode*) ;

__attribute__((used)) static boolean_t
FUNC_2(struct vnode *VAR_2, const char *VAR_3)
{




    if (!FUNC_1(VAR_2))
        return VAR_0;

    if ((FUNC_0("console", VAR_3) == 0) ||
        (FUNC_0("tty", VAR_3) == 0) ||
        (FUNC_0("null", VAR_3) == 0) ||
        (FUNC_0("zero", VAR_3) == 0) ||
        (FUNC_0("klog", VAR_3) == 0)) {

        return VAR_1;
    }

    return VAR_0;
}
