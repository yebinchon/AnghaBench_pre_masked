
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode_attr {int va_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,int,int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int
FUNC_1(struct vnode_attr *VAR_6, int VAR_7, int VAR_8)
{
 int VAR_9;


 VAR_9 = VAR_2 | VAR_0;


 if (VAR_7)
  VAR_9 &= ~VAR_0;


 if (VAR_8) {
  if (VAR_5 <= 0) {

   VAR_9 = 0;
  } else {

   VAR_9 &= ~(VAR_4 | VAR_3);
  }
 }
 FUNC_0("IMMUTABLE - file flags 0x%x mask 0x%x append = %d ignore = %d", VAR_6->va_flags, VAR_9, VAR_7, VAR_8);
 if ((VAR_6->va_flags & VAR_9) != 0)
  return(VAR_1);
 return(0);
}
