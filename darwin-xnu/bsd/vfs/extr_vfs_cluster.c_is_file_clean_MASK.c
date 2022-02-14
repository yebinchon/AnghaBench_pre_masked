
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vnode_t ;
typedef scalar_t__ off_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,scalar_t__,int ,int *,int*) ;

int
FUNC_1(vnode_t VAR_4, off_t VAR_5)
{
        off_t VAR_6;
 int VAR_7;
 int VAR_8 = 0;

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6 += VAR_2) {
         if (FUNC_0(VAR_4, VAR_6, 0, ((void*)0), &VAR_7) == VAR_1) {
          if (VAR_7 & VAR_3) {
           VAR_8++;
   }
  }
 }
 if (VAR_8)
         return(VAR_0);

 return (0);
}
