
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int upl_t ;
typedef int upl_page_info_t ;
typedef int kern_return_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int) ;
 int FUNC_2 (int ) ;

kern_return_t
FUNC_3(
 upl_t VAR_2)
{
 upl_page_info_t *VAR_3;
 kern_return_t VAR_4;

 VAR_3 = FUNC_0(VAR_2);
 VAR_4 = FUNC_1(VAR_2, VAR_3, VAR_0 >> VAR_1);
 FUNC_2(VAR_2);
 return VAR_4;
}
