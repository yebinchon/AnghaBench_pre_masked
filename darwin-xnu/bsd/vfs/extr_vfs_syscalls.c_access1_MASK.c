
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vnode_t ;
typedef int vfs_context_t ;
typedef int kauth_action_t ;


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
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int,int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(vnode_t VAR_11, vnode_t VAR_12, int VAR_13, vfs_context_t VAR_14)
{
  kauth_action_t VAR_15;
 int VAR_16;





  if (!(VAR_13 & VAR_10)) {
   VAR_15 = 0;
    if (VAR_13 & VAR_7)
   VAR_15 |= VAR_4;
    if (VAR_13 & VAR_8) {
   if (FUNC_2(VAR_11)) {
    VAR_15 |= VAR_1 |
        VAR_2;

   } else {
    VAR_15 |= VAR_6;
   }
  }
    if (VAR_13 & VAR_9) {
   if (FUNC_2(VAR_11)) {
    VAR_15 |= VAR_5;
   } else {
    VAR_15 |= VAR_3;
   }
  }
   } else {

  VAR_15 = VAR_13 >> 8;
 }
  if (VAR_15 != 0) {
   VAR_16 = FUNC_1(VAR_11, VAR_12, VAR_15 | VAR_0, VAR_14);
 } else {
  VAR_16 = 0;
 }

 return(VAR_16);
}
