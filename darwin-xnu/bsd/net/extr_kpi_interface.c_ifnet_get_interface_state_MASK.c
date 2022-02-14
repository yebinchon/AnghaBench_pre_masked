
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct if_interface_state {int dummy; } ;
typedef int * ifnet_t ;
typedef int errno_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct if_interface_state*) ;
 int FUNC_1 (int *,int ) ;

errno_t
FUNC_2(ifnet_t VAR_2,
    struct if_interface_state *VAR_3)
{
 errno_t VAR_4 = 0;

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0)) {
  VAR_4 = VAR_0;
  goto done;
 }

 if (!FUNC_1(VAR_2, 0)) {
  VAR_4 = VAR_1;
  goto done;
 }

 FUNC_0(VAR_2, VAR_3);

done:
 return (VAR_4);
}
