
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_4__ {int shift; int scale; } ;
typedef TYPE_1__ pal_rtc_nanotime_t ;


 int FUNC_0 (int ,int ,int ,int ,TYPE_1__*) ;
 int FUNC_1 () ;

__attribute__((used)) static inline void
FUNC_2(pal_rtc_nanotime_t *VAR_0, uint64_t VAR_1)
{
 uint64_t VAR_2 = FUNC_1();

 FUNC_0(VAR_2, VAR_1, VAR_0->scale, VAR_0->shift, VAR_0);
}
