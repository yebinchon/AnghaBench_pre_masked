
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


struct TYPE_9__ {int tag; int type; int index; int grp; } ;
struct TYPE_11__ {TYPE_2__ s; scalar_t__ u64; } ;
typedef TYPE_4__ cvmx_pow_tag_req_t ;
struct TYPE_10__ {int tag; int tag_type; int index; int grp; } ;
struct TYPE_12__ {TYPE_3__ s_sstatus2; int u64; } ;
typedef TYPE_5__ cvmx_pow_tag_load_resp_t ;
struct TYPE_8__ {int is_io; int get_cur; int coreid; int did; int mem_region; } ;
struct TYPE_13__ {scalar_t__ u64; TYPE_1__ sstatus; } ;
typedef TYPE_6__ cvmx_pow_load_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static inline cvmx_pow_tag_req_t FUNC_2(void)
{
 cvmx_pow_load_addr_t VAR_2;
 cvmx_pow_tag_load_resp_t VAR_3;
 cvmx_pow_tag_req_t VAR_4;

 VAR_2.u64 = 0;
 VAR_2.sstatus.mem_region = VAR_0;
 VAR_2.sstatus.is_io = 1;
 VAR_2.sstatus.did = VAR_1;
 VAR_2.sstatus.coreid = FUNC_0();
 VAR_2.sstatus.get_cur = 1;
 VAR_3.u64 = FUNC_1(VAR_2.u64);
 VAR_4.u64 = 0;
 VAR_4.s.grp = VAR_3.s_sstatus2.grp;
 VAR_4.s.index = VAR_3.s_sstatus2.index;
 VAR_4.s.type = VAR_3.s_sstatus2.tag_type;
 VAR_4.s.tag = VAR_3.s_sstatus2.tag;
 return VAR_4;
}
