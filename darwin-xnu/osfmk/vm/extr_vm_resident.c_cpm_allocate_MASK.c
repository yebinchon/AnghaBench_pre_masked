
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int vm_size_t ;
typedef scalar_t__ vm_page_t ;
typedef int ppnum_t ;
typedef int kern_return_t ;
typedef int event_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (unsigned int,int ,int ,int ,int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (scalar_t__,unsigned int) ;

kern_return_t
FUNC_4(
 vm_size_t VAR_9,
 vm_page_t *VAR_10,
 ppnum_t VAR_11,
 ppnum_t VAR_12,
 boolean_t VAR_13,
 int VAR_14)
{
 vm_page_t VAR_15;
 unsigned int VAR_16;

 if (VAR_9 % VAR_3 != 0)
  return VAR_0;

 VAR_16 = (unsigned int) (VAR_9 / VAR_3);
 if (VAR_16 != VAR_9 / VAR_3) {

  return VAR_0;
 }






 VAR_15 = FUNC_2(VAR_16, VAR_11, VAR_12, VAR_13, VAR_14);

 if (VAR_15 == VAR_5)
  return VAR_1;



 if (VAR_6 < VAR_7)
         FUNC_1((event_t) &VAR_8);

 VAR_4;





 FUNC_0(FUNC_3(VAR_15, VAR_16));

 *VAR_10 = VAR_15;
 return VAR_2;
}
