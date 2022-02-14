
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iff_filter {int dummy; } ;
typedef int interface_filter_t ;
typedef int * ifnet_t ;
typedef int errno_t ;


 int VAR_0 ;
 int FUNC_0 (int *,struct iff_filter const*,int *,int ) ;

errno_t
FUNC_1(
 ifnet_t VAR_1,
 const struct iff_filter *VAR_2,
 interface_filter_t *VAR_3)
{
 if (VAR_1 == ((void*)0)) return VAR_0;

 return FUNC_0(VAR_1, VAR_2, VAR_3, 0);
}
