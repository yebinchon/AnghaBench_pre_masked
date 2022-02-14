
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct hw_perf_event {int idx; int config; int config_base; } ;
struct TYPE_2__ {int version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 TYPE_1__ VAR_4 ;

__attribute__((used)) static void FUNC_2(struct hw_perf_event *VAR_5)
{
 int VAR_6 = VAR_5->idx - VAR_3;
 u64 VAR_7, VAR_8, VAR_9;






 VAR_8 = 0x8ULL;
 if (VAR_5->config & VAR_2)
  VAR_8 |= 0x2;
 if (VAR_5->config & VAR_1)
  VAR_8 |= 0x1;




 if (VAR_4.version > 2 && VAR_5->config & VAR_0)
  VAR_8 |= 0x4;

 VAR_8 <<= (VAR_6 * 4);
 VAR_9 = 0xfULL << (VAR_6 * 4);

 FUNC_0(VAR_5->config_base, VAR_7);
 VAR_7 &= ~VAR_9;
 VAR_7 |= VAR_8;
 FUNC_1(VAR_5->config_base, VAR_7);
}
