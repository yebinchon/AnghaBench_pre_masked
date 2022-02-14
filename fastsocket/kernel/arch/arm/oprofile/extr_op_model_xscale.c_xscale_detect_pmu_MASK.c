
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int num_counters; int name; } ;
struct TYPE_4__ {int name; int num_counters; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 TYPE_3__ VAR_4 ;
 TYPE_1__* VAR_5 ;
 TYPE_1__* VAR_6 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(void)
{
 int VAR_7 = 0;
 u32 VAR_8;

 VAR_8 = (FUNC_1(VAR_0) >> 13) & 0x7;

 switch (VAR_8) {
 case 1:
  VAR_5 = &VAR_6[VAR_2];
  break;
 case 2:
  VAR_5 = &VAR_6[VAR_3];
  break;
 default:
  VAR_7 = -VAR_1;
  break;
 }

 if (!VAR_7) {
  VAR_4.name = VAR_5->name;
  VAR_4.num_counters = VAR_5->num_counters;
  FUNC_0("xscale_detect_pmu: detected %s PMU\n", VAR_5->name);
 }

 return VAR_7;
}
