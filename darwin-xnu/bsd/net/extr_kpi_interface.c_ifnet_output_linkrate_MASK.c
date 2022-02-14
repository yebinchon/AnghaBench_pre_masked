
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int64_t ;
struct TYPE_4__ {scalar_t__ tbr_rate_raw; } ;
struct ifclassq {TYPE_2__ ifcq_tbr; } ;
struct TYPE_3__ {scalar_t__ eff_bw; } ;
struct ifnet {struct ifclassq if_snd; TYPE_1__ if_output_bw; } ;


 int FUNC_0 (struct ifclassq*) ;
 scalar_t__ FUNC_1 (struct ifclassq*) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (int) ;

u_int64_t
FUNC_4(struct ifnet *VAR_0)
{
 struct ifclassq *VAR_1 = &VAR_0->if_snd;
 u_int64_t VAR_2;

 FUNC_0(VAR_1);

 VAR_2 = VAR_0->if_output_bw.eff_bw;
 if (FUNC_1(VAR_1)) {
  u_int64_t VAR_3 = VAR_0->if_snd.ifcq_tbr.tbr_rate_raw;
  FUNC_3(VAR_3 > 0);
  VAR_2 = FUNC_2(VAR_2, VAR_0->if_snd.ifcq_tbr.tbr_rate_raw);
 }

 return (VAR_2);
}
