
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_19__ {void* wqe_pool; } ;
union cvmx_ipd_wqe_fpa_queue {scalar_t__ u64; TYPE_6__ s; } ;
struct TYPE_16__ {void* mb_size; } ;
union cvmx_ipd_packet_mbuff_size {scalar_t__ u64; TYPE_3__ s; } ;
struct TYPE_20__ {int opc_mode; void* pbp_en; } ;
union cvmx_ipd_ctl_status {scalar_t__ u64; TYPE_7__ s; } ;
typedef void* uint64_t ;
typedef enum cvmx_ipd_mode { ____Placeholder_cvmx_ipd_mode } cvmx_ipd_mode ;
struct TYPE_18__ {void* back; } ;
struct TYPE_21__ {scalar_t__ u64; TYPE_5__ s; } ;
typedef TYPE_8__ cvmx_ipd_second_next_ptr_back_t ;
struct TYPE_15__ {void* skip_sz; } ;
struct TYPE_22__ {scalar_t__ u64; TYPE_2__ s; } ;
typedef TYPE_9__ cvmx_ipd_mbuff_not_first_skip_t ;
struct TYPE_14__ {void* skip_sz; } ;
struct TYPE_12__ {scalar_t__ u64; TYPE_1__ s; } ;
typedef TYPE_10__ cvmx_ipd_mbuff_first_skip_t ;
struct TYPE_17__ {void* back; } ;
struct TYPE_13__ {scalar_t__ u64; TYPE_4__ s; } ;
typedef TYPE_11__ cvmx_ipd_first_next_ptr_back_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(uint64_t VAR_7,
       uint64_t VAR_8,
       uint64_t VAR_9,
       uint64_t VAR_10,
       uint64_t VAR_11,
       uint64_t VAR_12,
       enum cvmx_ipd_mode VAR_13,
       uint64_t VAR_14)
{
 cvmx_ipd_mbuff_first_skip_t VAR_15;
 cvmx_ipd_mbuff_not_first_skip_t VAR_16;
 union cvmx_ipd_packet_mbuff_size VAR_17;
 cvmx_ipd_first_next_ptr_back_t VAR_18;
 cvmx_ipd_second_next_ptr_back_t VAR_19;
 union cvmx_ipd_wqe_fpa_queue VAR_20;
 union cvmx_ipd_ctl_status VAR_21;

 VAR_15.u64 = 0;
 VAR_15.s.skip_sz = VAR_8;
 FUNC_1(VAR_0, VAR_15.u64);

 VAR_16.u64 = 0;
 VAR_16.s.skip_sz = VAR_9;
 FUNC_1(VAR_4, VAR_16.u64);

 VAR_17.u64 = 0;
 VAR_17.s.mb_size = VAR_7;
 FUNC_1(VAR_5, VAR_17.u64);

 VAR_18.u64 = 0;
 VAR_18.s.back = VAR_10;
 FUNC_1(VAR_1, VAR_18.u64);

 VAR_19.u64 = 0;
 VAR_19.s.back = VAR_11;
 FUNC_1(VAR_2, VAR_19.u64);

 VAR_20.u64 = 0;
 VAR_20.s.wqe_pool = VAR_12;
 FUNC_1(VAR_6, VAR_20.u64);

 VAR_21.u64 = FUNC_0(VAR_3);
 VAR_21.s.opc_mode = VAR_13;
 VAR_21.s.pbp_en = VAR_14;
 FUNC_1(VAR_3, VAR_21.u64);



}
