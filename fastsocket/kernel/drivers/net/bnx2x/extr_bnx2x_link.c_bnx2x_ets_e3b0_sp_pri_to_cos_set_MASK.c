
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct link_params {scalar_t__ port; struct bnx2x* bp; } ;
struct bnx2x {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_1(const struct link_params *VAR_5,
         u8 *VAR_6, const u8 VAR_7,
         const u8 VAR_8)
{
 struct bnx2x *VAR_9 = VAR_5->bp;
 const u8 VAR_10 = VAR_5->port;
 const u8 VAR_11 = (VAR_10) ? VAR_1 :
  VAR_0;

 if (VAR_7 >= VAR_11) {
  FUNC_0(VAR_4, "bnx2x_ets_e3b0_sp_pri_to_cos_set invalid "
     "parameter Illegal strict priority\n");
     return -VAR_3;
 }

 if (VAR_6[VAR_7] != VAR_2) {
  FUNC_0(VAR_4, "bnx2x_ets_e3b0_sp_pri_to_cos_set invalid "
       "parameter There can't be two COS's with "
       "the same strict pri\n");
  return -VAR_3;
 }

 VAR_6[VAR_7] = VAR_8;
 return 0;

}
