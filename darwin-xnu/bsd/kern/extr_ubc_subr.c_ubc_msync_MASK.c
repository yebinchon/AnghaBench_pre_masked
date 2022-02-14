
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vnode_t ;
typedef int off_t ;
typedef int errno_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int *,int,int*) ;

errno_t
FUNC_1(vnode_t VAR_1, off_t VAR_2, off_t VAR_3, off_t *VAR_4, int VAR_5)
{
        int VAR_6;
 int VAR_7 = 0;

 if (VAR_4)
         *VAR_4 = VAR_2;

        VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, &VAR_7);

 if (VAR_6 == 0 && VAR_7 == 0)
         return (VAR_0);
 return (VAR_7);
}
