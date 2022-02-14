
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef void* uint64_t ;
typedef void* uint32_t ;
typedef enum cvmx_pow_tag_type { ____Placeholder_cvmx_pow_tag_type } cvmx_pow_tag_type ;
struct TYPE_10__ {int tag_type; void* grp; void* tag; void* qos; } ;
typedef TYPE_3__ cvmx_wqe_t ;
struct TYPE_8__ {int type; void* grp; void* qos; void* tag; int op; } ;
struct TYPE_11__ {scalar_t__ u64; TYPE_1__ s; } ;
typedef TYPE_4__ cvmx_pow_tag_req_t ;
struct TYPE_9__ {int is_io; int offset; int did; int mem_region; } ;
struct TYPE_12__ {scalar_t__ u64; TYPE_2__ sio; } ;
typedef TYPE_5__ cvmx_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(cvmx_wqe_t *VAR_4, uint32_t VAR_5,
     enum cvmx_pow_tag_type VAR_6,
     uint64_t VAR_7, uint64_t VAR_8)
{
 cvmx_addr_t VAR_9;
 cvmx_pow_tag_req_t VAR_10;

 VAR_4->qos = VAR_7;
 VAR_4->tag = VAR_5;
 VAR_4->tag_type = VAR_6;
 VAR_4->grp = VAR_8;

 VAR_10.u64 = 0;
 VAR_10.s.op = VAR_2;
 VAR_10.s.type = VAR_6;
 VAR_10.s.tag = VAR_5;
 VAR_10.s.qos = VAR_7;
 VAR_10.s.grp = VAR_8;

 VAR_9.u64 = 0;
 VAR_9.sio.mem_region = VAR_0;
 VAR_9.sio.is_io = 1;
 VAR_9.sio.did = VAR_1;
 VAR_9.sio.offset = FUNC_0(VAR_4);





 VAR_3;
 FUNC_1(VAR_9.u64, VAR_10.u64);
}
