
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* psxmitwait; void* psrcvpkts; void* psxmitpkts; void* psrcvdata; void* psxmitdata; } ;
struct TYPE_4__ {TYPE_1__ counter_cache; } ;
struct qib_ibport {int dummy; } ;
struct qib_pportdata {TYPE_2__ cong_stats; struct qib_ibport ibport_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (struct qib_ibport*,struct qib_pportdata*,int ) ;

__attribute__((used)) static void FUNC_1(struct qib_pportdata *VAR_5)
{
 struct qib_ibport *VAR_6 = &VAR_5->ibport_data;

 VAR_5->cong_stats.counter_cache.psxmitdata =
  FUNC_0(VAR_6, VAR_5, VAR_2);
 VAR_5->cong_stats.counter_cache.psrcvdata =
  FUNC_0(VAR_6, VAR_5, VAR_0);
 VAR_5->cong_stats.counter_cache.psxmitpkts =
  FUNC_0(VAR_6, VAR_5, VAR_3);
 VAR_5->cong_stats.counter_cache.psrcvpkts =
  FUNC_0(VAR_6, VAR_5, VAR_1);
 VAR_5->cong_stats.counter_cache.psxmitwait =
  FUNC_0(VAR_6, VAR_5, VAR_4);
}
