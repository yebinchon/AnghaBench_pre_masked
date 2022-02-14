
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_5__ {TYPE_1__* adapt; scalar_t__ mem_ptr; } ;
typedef TYPE_2__ ips_ha_t ;
struct TYPE_4__ {scalar_t__ hw_status_tail; scalar_t__ hw_status_start; scalar_t__ status; scalar_t__ p_status_tail; scalar_t__ p_status_end; scalar_t__ p_status_start; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(ips_ha_t * VAR_7)
{
 uint32_t VAR_8;

 FUNC_0("ips_statinit_memio", 1);

 VAR_7->adapt->p_status_start = VAR_7->adapt->status;
 VAR_7->adapt->p_status_end = VAR_7->adapt->status + VAR_0;
 VAR_7->adapt->p_status_tail = VAR_7->adapt->status;

 VAR_8 = VAR_7->adapt->hw_status_start;
 FUNC_1(VAR_8, VAR_7->mem_ptr + VAR_3);
 FUNC_1(VAR_8 + VAR_5,
        VAR_7->mem_ptr + VAR_1);
 FUNC_1(VAR_8 + VAR_6, VAR_7->mem_ptr + VAR_2);
 FUNC_1(VAR_8, VAR_7->mem_ptr + VAR_4);

 VAR_7->adapt->hw_status_tail = VAR_8;
}
