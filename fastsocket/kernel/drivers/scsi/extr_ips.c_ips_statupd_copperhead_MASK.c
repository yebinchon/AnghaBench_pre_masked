
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {TYPE_2__* adapt; scalar_t__ io_addr; } ;
typedef TYPE_3__ ips_ha_t ;
struct TYPE_6__ {int hw_status_tail; int hw_status_start; TYPE_1__* p_status_tail; TYPE_1__* p_status_start; TYPE_1__* p_status_end; } ;
struct TYPE_5__ {int value; } ;
typedef int IPS_STATUS ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static uint32_t
FUNC_2(ips_ha_t * VAR_1)
{
 FUNC_0("ips_statupd_copperhead", 1);

 if (VAR_1->adapt->p_status_tail != VAR_1->adapt->p_status_end) {
  VAR_1->adapt->p_status_tail++;
  VAR_1->adapt->hw_status_tail += sizeof (IPS_STATUS);
 } else {
  VAR_1->adapt->p_status_tail = VAR_1->adapt->p_status_start;
  VAR_1->adapt->hw_status_tail = VAR_1->adapt->hw_status_start;
 }

 FUNC_1(VAR_1->adapt->hw_status_tail,
      VAR_1->io_addr + VAR_0);

 return (VAR_1->adapt->p_status_tail->value);
}
