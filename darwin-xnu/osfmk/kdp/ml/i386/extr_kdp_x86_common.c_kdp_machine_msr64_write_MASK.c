
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
typedef int kdp_x86_xcpu_func_t ;
struct TYPE_4__ {int address; } ;
typedef TYPE_1__ kdp_writemsr64_req_t ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (scalar_t__,int ,TYPE_1__*,scalar_t__) ;
 int FUNC_2 (int ,int ) ;

int
FUNC_3(kdp_writemsr64_req_t *VAR_2, caddr_t VAR_3, uint16_t VAR_4)
{
 uint64_t *VAR_5 = (uint64_t *) VAR_3;
 uint32_t VAR_6 = VAR_2->address;

 if ((VAR_4 != VAR_1) && (VAR_4 != FUNC_0())) {
  return (int) FUNC_1(VAR_4, (kdp_x86_xcpu_func_t)FUNC_3, VAR_2, VAR_3);
 }

 FUNC_2(VAR_6, *VAR_5);
 return VAR_0;
}
