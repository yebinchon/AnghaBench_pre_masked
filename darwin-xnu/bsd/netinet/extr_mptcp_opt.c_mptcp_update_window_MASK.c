
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int64_t ;
typedef scalar_t__ u_int32_t ;
struct mptcb {scalar_t__ mpt_sndwl1; scalar_t__ mpt_sndwl2; scalar_t__ mpt_sndwnd; } ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_1(struct mptcb *VAR_0, u_int64_t VAR_1, u_int64_t VAR_2, u_int32_t VAR_3)
{
 if (FUNC_0(VAR_0->mpt_sndwl1, VAR_2) ||
     (VAR_0->mpt_sndwl1 == VAR_2 &&
      (FUNC_0(VAR_0->mpt_sndwl2, VAR_1) ||
       (VAR_0->mpt_sndwl2 == VAR_1 && VAR_3 > VAR_0->mpt_sndwnd)))) {
  VAR_0->mpt_sndwnd = VAR_3;
  VAR_0->mpt_sndwl1 = VAR_2;
  VAR_0->mpt_sndwl2 = VAR_1;
 }
}
