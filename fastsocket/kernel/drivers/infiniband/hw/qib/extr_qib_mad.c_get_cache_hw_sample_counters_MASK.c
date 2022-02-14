
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {int psxmitwait; int psrcvpkts; int psxmitpkts; int psrcvdata; int psxmitdata; } ;
struct TYPE_4__ {TYPE_1__ counter_cache; } ;
struct qib_pportdata {TYPE_2__ cong_stats; } ;
typedef int __be16 ;
__attribute__((used)) static u64 FUNC_0(struct qib_pportdata *VAR_0,
     __be16 VAR_1)
{
 u64 VAR_2;

 switch (VAR_1) {
 case 130:
  VAR_2 = VAR_0->cong_stats.counter_cache.psxmitdata;
  break;
 case 132:
  VAR_2 = VAR_0->cong_stats.counter_cache.psrcvdata;
  break;
 case 129:
  VAR_2 = VAR_0->cong_stats.counter_cache.psxmitpkts;
  break;
 case 131:
  VAR_2 = VAR_0->cong_stats.counter_cache.psrcvpkts;
  break;
 case 128:
  VAR_2 = VAR_0->cong_stats.counter_cache.psxmitwait;
  break;
 default:
  VAR_2 = 0;
 }

 return VAR_2;
}
