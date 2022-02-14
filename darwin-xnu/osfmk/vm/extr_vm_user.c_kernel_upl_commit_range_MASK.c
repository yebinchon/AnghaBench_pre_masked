
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int upl_t ;
typedef int upl_size_t ;
typedef int upl_page_info_array_t ;
typedef int upl_offset_t ;
typedef int mach_msg_type_number_t ;
typedef int kern_return_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ,int,int ,int ,scalar_t__*) ;
 int FUNC_1 (int ) ;

kern_return_t
FUNC_2(
 upl_t VAR_5,
 upl_offset_t VAR_6,
 upl_size_t VAR_7,
 int VAR_8,
 upl_page_info_array_t VAR_9,
 mach_msg_type_number_t VAR_10)
{
 boolean_t VAR_11 = VAR_0;
 kern_return_t VAR_12;

 if (VAR_8 & VAR_2)
  VAR_8 |= VAR_4;

 if (VAR_8 & VAR_3) {
  return VAR_1;
 }

 VAR_12 = FUNC_0(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, &VAR_11);

 if ((VAR_8 & VAR_4) && VAR_11)
  FUNC_1(VAR_5);

 return VAR_12;
}
