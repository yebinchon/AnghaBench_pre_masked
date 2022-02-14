
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vnode_t ;
typedef int uint32_t ;
struct vnode_attr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,int,struct vnode_attr*) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int ) ;

int
FUNC_3(vnode_t VAR_13, uint32_t VAR_14, struct vnode_attr *VAR_15)
{

 uint32_t VAR_16 = (VAR_12 | VAR_3 | VAR_11
  | VAR_9 | VAR_6 | VAR_2);
 uint32_t VAR_17 = (VAR_4 | VAR_7
   | VAR_5 | VAR_8);
 uint32_t VAR_18 = (VAR_14 & VAR_16);


 if (VAR_14 & VAR_10) {
  VAR_18 |= VAR_0;
 }


 if ((FUNC_2(VAR_13)) && (VAR_14 & VAR_17)) {
  VAR_18 |= VAR_1;
 }

 if (VAR_18) {
  FUNC_1(VAR_13, VAR_18);





  (void)VAR_15;

 }

 return 0;
}
