
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint64_t ;
struct TYPE_3__ {int is_io; void* queue; void* port; int did; int mem_space; } ;
struct TYPE_4__ {scalar_t__ u64; TYPE_1__ s; } ;
typedef TYPE_2__ cvmx_pko_doorbell_address_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,void*) ;

__attribute__((used)) static inline void FUNC_1(uint64_t VAR_3, uint64_t VAR_4,
         uint64_t VAR_5)
{
 cvmx_pko_doorbell_address_t VAR_6;

 VAR_6.u64 = 0;
 VAR_6.s.mem_space = VAR_0;
 VAR_6.s.did = VAR_1;
 VAR_6.s.is_io = 1;
 VAR_6.s.port = VAR_3;
 VAR_6.s.queue = VAR_4;




 VAR_2;
 FUNC_0(VAR_6.u64, VAR_5);
}
