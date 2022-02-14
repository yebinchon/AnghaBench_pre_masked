
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef void* uint32_t ;
struct TYPE_4__ {void* shift; void* scale; } ;
typedef TYPE_1__ pal_rtc_nanotime_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,TYPE_1__*) ;
 TYPE_1__ VAR_2 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void
FUNC_3(uint64_t VAR_5)
{
 pal_rtc_nanotime_t *VAR_6 = &VAR_2;
 uint32_t VAR_7 = 0;



 while ( VAR_5 <= VAR_1) {
  VAR_7++;
  VAR_5 <<= 1;
 }

 VAR_6->scale = (uint32_t)(((uint64_t)VAR_0 << 32) / VAR_5);

 VAR_6->shift = VAR_7;







 if (VAR_4 == 0)
  VAR_4 = FUNC_0(
      FUNC_1() - VAR_3, VAR_6);

 FUNC_2(0);
}
