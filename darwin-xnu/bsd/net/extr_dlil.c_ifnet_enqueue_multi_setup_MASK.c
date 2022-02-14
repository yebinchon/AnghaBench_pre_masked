
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct ifnet {int if_start_delay_timeout; int if_eflags; int if_xname; void* if_start_delay_qlen; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ,int ) ;
 void* FUNC_1 (int,scalar_t__) ;

void
FUNC_2(struct ifnet *VAR_1, uint16_t VAR_2,
    uint16_t VAR_3)
{
 if (VAR_2 > 0 && VAR_3 > 0) {
  VAR_1->if_eflags |= VAR_0;
  VAR_1->if_start_delay_qlen = FUNC_1(100, VAR_2);
  VAR_1->if_start_delay_timeout = FUNC_1(20000, VAR_3);

  VAR_1->if_start_delay_timeout *= 1000;
  FUNC_0("%s: forced IFEF_ENQUEUE_MULTI qlen %u timeout %u\n",
      VAR_1->if_xname, (uint32_t)VAR_2,
      (uint32_t)VAR_3);
 } else {
  VAR_1->if_eflags &= ~VAR_0;
 }
}
