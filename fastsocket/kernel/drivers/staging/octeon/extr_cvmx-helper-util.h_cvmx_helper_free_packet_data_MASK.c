
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int addr; int back; int pool; } ;
union cvmx_buf_ptr {TYPE_3__ s; } ;
typedef scalar_t__ uint64_t ;
struct TYPE_7__ {scalar_t__ bufs; } ;
struct TYPE_8__ {TYPE_1__ s; } ;
struct TYPE_10__ {union cvmx_buf_ptr packet_ptr; TYPE_2__ word2; } ;
typedef TYPE_4__ cvmx_wqe_t ;


 int FUNC_0 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;

__attribute__((used)) static inline void FUNC_3(cvmx_wqe_t *VAR_0)
{
 uint64_t VAR_1;
 union cvmx_buf_ptr VAR_2;
 union cvmx_buf_ptr VAR_3;
 uint64_t VAR_4;

 VAR_1 = VAR_0->word2.s.bufs;
 if (VAR_1 == 0)
  return;
 VAR_2 = VAR_0->packet_ptr;
 VAR_4 = ((VAR_2.s.addr >> 7) - VAR_2.s.back) << 7;
 if (FUNC_2(VAR_0) == VAR_4) {
  VAR_3 =
      *(union cvmx_buf_ptr *) FUNC_1(VAR_2.s.addr - 8);
  VAR_2 = VAR_3;
  VAR_1--;
 }

 while (VAR_1--) {




  VAR_4 =
      ((VAR_2.s.addr >> 7) - VAR_2.s.back) << 7;




  VAR_3 =
      *(union cvmx_buf_ptr *) FUNC_1(VAR_2.s.addr - 8);
  FUNC_0(FUNC_1(VAR_4),
         VAR_2.s.pool, 0);
  VAR_2 = VAR_3;
 }
}
