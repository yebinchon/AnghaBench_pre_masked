
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode_attr {int va_type; } ;
typedef int * mount_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;


 int VAR_8 ;


 int FUNC_1 (int *) ;
 int FUNC_2 (struct vnode_attr*,int,int) ;
 int VAR_9 ;

__attribute__((used)) static int
FUNC_3(mount_t VAR_10, struct vnode_attr *VAR_11, int VAR_12, int VAR_13)
{
 int VAR_14;
 int VAR_15;






 switch(VAR_11->va_type) {
 case 128:
 case 129:
 case 131:
 case 130:




  VAR_12 &= ~VAR_4;
  break;
 default:
  break;
 }

 VAR_14 = 0;
 if (VAR_12 & VAR_6) {


  if (VAR_10 != ((void*)0)) {


   if ((VAR_12 & VAR_5) &&
       (FUNC_1(VAR_10) & VAR_7)) {
    FUNC_0("%p    DENIED - filesystem disallowed extended attributes", VAR_9);
    VAR_14 = VAR_0;
    goto out;
   }
  }





  VAR_15 = 0;
  if (VAR_11->va_type == VAR_8) {
   if ((VAR_12 & (VAR_1 | VAR_2 | VAR_5)) == VAR_12)
    VAR_15 = 1;
  } else {
   if ((VAR_12 & (VAR_3 | VAR_5)) == VAR_12)
    VAR_15 = 1;
  }
  if ((VAR_14 = FUNC_2(VAR_11, VAR_15, VAR_13)) != 0) {
   FUNC_0("%p    DENIED - file is immutable", VAR_9);
   goto out;
  }
 }
out:
 return(VAR_14);
}
