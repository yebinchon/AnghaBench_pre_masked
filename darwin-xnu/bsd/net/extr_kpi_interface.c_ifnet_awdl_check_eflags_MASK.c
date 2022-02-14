
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int32_t ;
typedef TYPE_1__* ifnet_t ;
typedef int errno_t ;
struct TYPE_4__ {int if_eflags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,int ) ;

__attribute__((used)) static errno_t
FUNC_1(ifnet_t VAR_5, u_int32_t *VAR_6, u_int32_t *VAR_7)
{
 u_int32_t VAR_8;

 FUNC_0(VAR_5, VAR_4);

 VAR_8 = (*VAR_6 & *VAR_7) | (VAR_5->if_eflags & ~(*VAR_7));

 if (VAR_5->if_eflags & VAR_1) {
  if (VAR_8 & VAR_1) {
   if ((VAR_8 & VAR_2) != VAR_2)
    return (VAR_0);
  } else {
   *VAR_6 &= ~VAR_2;
   *VAR_7 |= VAR_2;
  }
 } else if (VAR_8 & VAR_1) {
  *VAR_6 |= VAR_2;
  *VAR_7 |= VAR_2;
 } else if (VAR_8 & VAR_3 &&
     !(VAR_5->if_eflags & VAR_1))
  return (VAR_0);

 return (0);
}
