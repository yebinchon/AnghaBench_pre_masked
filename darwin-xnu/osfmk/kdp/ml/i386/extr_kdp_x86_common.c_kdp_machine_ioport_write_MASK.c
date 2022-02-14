
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
typedef int kdp_x86_xcpu_func_t ;
struct TYPE_4__ {scalar_t__ address; scalar_t__ nbytes; } ;
typedef TYPE_1__ kdp_writeioport_req_t ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (scalar_t__,int ,TYPE_1__*,scalar_t__) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;

int
FUNC_5(kdp_writeioport_req_t *VAR_3, caddr_t VAR_4, uint16_t VAR_5)
{
 uint16_t VAR_6 = VAR_3->address;
 uint16_t VAR_7 = VAR_3->nbytes;

 if ((VAR_5 != VAR_2) && (VAR_5 != FUNC_0())) {
  return (int) FUNC_1(VAR_5, (kdp_x86_xcpu_func_t)FUNC_5, VAR_3, VAR_4);
 }

 switch (VAR_7)
 {
 case 1:
  FUNC_2(VAR_6, *((uint8_t *) VAR_4));
  break;
 case 2:
  FUNC_4(VAR_6, *((uint16_t *) VAR_4));
  break;
 case 4:
  FUNC_3(VAR_6, *((uint32_t *) VAR_4));
  break;
 default:
  return VAR_0;
 }

 return VAR_1;
}
