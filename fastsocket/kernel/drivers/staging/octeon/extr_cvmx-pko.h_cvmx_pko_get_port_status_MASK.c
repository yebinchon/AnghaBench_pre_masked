
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {void* index; } ;
union cvmx_pko_reg_read_idx {void* u64; TYPE_4__ s; } ;
struct TYPE_10__ {int doorbell; } ;
union cvmx_pko_mem_debug9 {TYPE_3__ cn38xx; void* u64; } ;
struct TYPE_12__ {int doorbell; } ;
union cvmx_pko_mem_debug8 {TYPE_5__ cn58xx; void* u64; } ;
struct TYPE_9__ {void* count; } ;
union cvmx_pko_mem_count1 {void* u64; TYPE_2__ s; } ;
struct TYPE_8__ {void* count; } ;
union cvmx_pko_mem_count0 {void* u64; TYPE_1__ s; } ;
typedef void* uint64_t ;
struct TYPE_13__ {int doorbell; void* octets; void* packets; } ;
typedef TYPE_6__ cvmx_pko_port_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 void* FUNC_1 (void*) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ,void*) ;

__attribute__((used)) static inline void FUNC_4(uint64_t VAR_6, uint64_t VAR_7,
         cvmx_pko_port_status_t *VAR_8)
{
 union cvmx_pko_reg_read_idx VAR_9;
 union cvmx_pko_mem_count0 VAR_10;
 union cvmx_pko_mem_count1 VAR_11;

 VAR_9.u64 = 0;
 VAR_9.s.index = VAR_6;
 FUNC_3(VAR_4, VAR_9.u64);

 VAR_10 = FUNC_2(VAR_0);
 VAR_8->packets = VAR_10;
 if (VAR_7) {
  VAR_10 = VAR_6;
  FUNC_3(VAR_0, VAR_10);
 }

 VAR_11 = FUNC_2(VAR_1);
 VAR_8->octets = VAR_11;
 if (VAR_7) {
  VAR_11 = VAR_6;
  FUNC_3(VAR_1, VAR_11);
 }

 if (FUNC_0(VAR_5)) {
  union cvmx_pko_mem_debug9 VAR_12;
  VAR_9.s.index = FUNC_1(VAR_6);
  FUNC_3(VAR_4, VAR_9.u64);
  VAR_12 = FUNC_2(VAR_3);
  VAR_8->doorbell = VAR_12;
 } else {
  union cvmx_pko_mem_debug8 VAR_13;
  VAR_9.s.index = FUNC_1(VAR_6);
  FUNC_3(VAR_4, VAR_9.u64);
  VAR_13 = FUNC_2(VAR_2);
  VAR_8->doorbell = VAR_13;
 }
}
