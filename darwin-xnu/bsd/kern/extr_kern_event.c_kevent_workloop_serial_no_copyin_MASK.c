
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ user_addr_t ;
typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
typedef int serial_no32 ;
typedef int serial_no ;
typedef TYPE_1__* proc_t ;
typedef int caddr_t ;
struct TYPE_4__ {scalar_t__ p_dispatchqueue_serialno_offset; } ;


 int FUNC_0 (scalar_t__,int ,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static uint64_t
FUNC_2(proc_t VAR_0, uint64_t VAR_1)
{
 uint64_t VAR_2 = 0;
 user_addr_t VAR_3;
 int VAR_4;

 if (VAR_1 == 0 || VAR_0->p_dispatchqueue_serialno_offset == 0) {
  return 0;
 }
 VAR_3 = (user_addr_t)(VAR_1 + VAR_0->p_dispatchqueue_serialno_offset);

 if (FUNC_1(VAR_0)) {
  VAR_4 = FUNC_0(VAR_3, (caddr_t)&VAR_2, sizeof(VAR_2));
 } else {
  uint32_t VAR_5 = 0;
  VAR_4 = FUNC_0(VAR_3, (caddr_t)&VAR_5, sizeof(VAR_5));
  VAR_2 = VAR_5;
 }
 return VAR_4 == 0 ? VAR_2 : 0;
}
