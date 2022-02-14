
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int upl_t ;
typedef int upl_page_info_t ;
typedef int mach_msg_type_number_t ;
typedef int kern_return_t ;


 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int ) ;

kern_return_t
FUNC_2(
 upl_t VAR_0,
 upl_page_info_t *VAR_1,
 mach_msg_type_number_t VAR_2)
{
 kern_return_t VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 FUNC_1(VAR_0);
 return VAR_3;
}
