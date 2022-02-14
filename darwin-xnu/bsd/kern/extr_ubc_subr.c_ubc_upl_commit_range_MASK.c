
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int upl_t ;
typedef int upl_size_t ;
typedef int upl_page_info_t ;
typedef int upl_offset_t ;
typedef int kern_return_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int,int *,int,scalar_t__*) ;
 int FUNC_2 (int ) ;

kern_return_t
FUNC_3(
 upl_t VAR_6,
 upl_offset_t VAR_7,
 upl_size_t VAR_8,
 int VAR_9)
{
 upl_page_info_t *VAR_10;
 boolean_t VAR_11;
 kern_return_t VAR_12;

 if (VAR_9 & VAR_3)
  VAR_9 |= VAR_5;

 if (VAR_9 & VAR_4) {
  return VAR_0;
 }

 VAR_10 = FUNC_0(VAR_6);

 VAR_12 = FUNC_1(VAR_6, VAR_7, VAR_8, VAR_9,
         VAR_10, VAR_1 >> VAR_2, &VAR_11);

 if((VAR_9 & VAR_3) && VAR_11)
  FUNC_2(VAR_6);

 return VAR_12;
}
