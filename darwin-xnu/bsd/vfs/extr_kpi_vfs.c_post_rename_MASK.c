
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vnode_t ;
typedef int errno_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__,int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static errno_t
FUNC_3(vnode_t VAR_4, vnode_t VAR_5, vnode_t VAR_6, vnode_t VAR_7)
{
 if (VAR_7 && VAR_7 != VAR_5)
  FUNC_2(VAR_7);


 int VAR_8 = VAR_3;
 if (FUNC_1(VAR_5)) {




  if (((VAR_4 != VAR_6) && (!VAR_7)) || ((VAR_4 == VAR_6) && (VAR_7))) {
   VAR_8 |= VAR_1;
  }
 }

 FUNC_0(VAR_4, VAR_8);
 if (VAR_4 != VAR_6) {
  FUNC_0(VAR_6, VAR_8);
 }


 if (VAR_7)
 {
  FUNC_0(VAR_7, VAR_0);
 }

 FUNC_0(VAR_5, VAR_2);

 return 0;
}
