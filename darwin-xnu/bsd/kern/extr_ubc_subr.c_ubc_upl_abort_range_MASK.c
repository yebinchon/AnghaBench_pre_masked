
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int upl_t ;
typedef int upl_size_t ;
typedef int upl_offset_t ;
typedef int kern_return_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int,scalar_t__*) ;
 int FUNC_1 (int ) ;

kern_return_t
FUNC_2(
 upl_t VAR_3,
 upl_offset_t VAR_4,
 upl_size_t VAR_5,
 int VAR_6)
{
 kern_return_t VAR_7;
 boolean_t VAR_8 = VAR_0;

 if (VAR_6 & VAR_1)
  VAR_6 |= VAR_2;

 VAR_7 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6, &VAR_8);

 if((VAR_6 & VAR_1) && VAR_8)
  FUNC_1(VAR_3);

 return VAR_7;
}
