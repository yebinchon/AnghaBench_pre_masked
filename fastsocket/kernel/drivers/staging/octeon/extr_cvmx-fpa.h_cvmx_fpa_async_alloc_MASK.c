
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int scraddr; int len; scalar_t__ addr; int did; } ;
struct TYPE_4__ {int u64; TYPE_1__ s; } ;
typedef TYPE_2__ cvmx_fpa_iobdma_data_t ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline void FUNC_2(uint64_t VAR_1, uint64_t VAR_2)
{
 cvmx_fpa_iobdma_data_t VAR_3;





 VAR_3.s.scraddr = VAR_1 >> 3;
 VAR_3.s.len = 1;
 VAR_3.s.did = FUNC_0(VAR_0, VAR_2);
 VAR_3.s.addr = 0;
 FUNC_1(VAR_3.u64);
}
