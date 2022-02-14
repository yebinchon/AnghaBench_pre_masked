
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int shift; int scale; int ns_base; int tsc_base; } ;
typedef TYPE_1__ pal_rtc_nanotime_t ;


 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static inline void
FUNC_1(pal_rtc_nanotime_t *VAR_0)
{
 FUNC_0(VAR_0->tsc_base, VAR_0->ns_base, VAR_0->scale, VAR_0->shift);
}
