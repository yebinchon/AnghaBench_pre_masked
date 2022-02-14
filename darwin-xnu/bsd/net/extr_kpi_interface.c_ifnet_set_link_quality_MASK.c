
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * ifnet_t ;
typedef int errno_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *,int ) ;

errno_t
FUNC_2(ifnet_t VAR_4, int VAR_5)
{
 errno_t VAR_6 = 0;

 if (VAR_4 == ((void*)0) || VAR_5 < VAR_3 || VAR_5 > VAR_2) {
  VAR_6 = VAR_0;
  goto done;
 }

 if (!FUNC_1(VAR_4, 0)) {
  VAR_6 = VAR_1;
  goto done;
 }

 FUNC_0(VAR_4, VAR_5, 0);

done:
 return (VAR_6);
}
