
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint16_t ;
typedef int u_int16_t ;
typedef TYPE_1__* ifnet_t ;
typedef int errno_t ;
struct TYPE_10__ {int if_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (TYPE_1__*) ;
 int * FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 (TYPE_1__*,int *) ;

errno_t
FUNC_7(ifnet_t VAR_3, u_int16_t VAR_4, u_int16_t VAR_5)
{
 uint16_t VAR_6;

 if (VAR_3 == ((void*)0))
  return (VAR_0);

 FUNC_4(VAR_3);


 if ((VAR_5 & VAR_2) != 0) {
  FUNC_2(VAR_3, (VAR_4 & VAR_2) == VAR_2);
 }

 VAR_6 = VAR_3->if_flags;
 VAR_3->if_flags = (VAR_4 & VAR_5) | (VAR_3->if_flags & ~VAR_5);

 if ((VAR_6 & VAR_1) !=
     (VAR_3->if_flags & VAR_1)) {
 }

 FUNC_3(VAR_3);

 return (0);
}
