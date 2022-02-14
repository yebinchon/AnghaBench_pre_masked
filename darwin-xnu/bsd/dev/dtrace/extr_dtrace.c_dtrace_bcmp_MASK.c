
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_4__ {size_t cpu_id; } ;
struct TYPE_3__ {int cpuc_dtrace_flags; } ;


 TYPE_2__* VAR_0 ;
 int volatile VAR_1 ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_0 (uintptr_t) ;

__attribute__((used)) static int
FUNC_1(const void *VAR_3, const void *VAR_4, size_t VAR_5)
{
 volatile uint16_t *VAR_6;

 VAR_6 = (volatile uint16_t *)&VAR_2[VAR_0->cpu_id].cpuc_dtrace_flags;

 if (VAR_3 == VAR_4)
  return (0);

 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
  return (1);

 if (VAR_3 != VAR_4 && VAR_5 != 0) {
  const uint8_t *VAR_7 = VAR_3;
  const uint8_t *VAR_8 = VAR_4;

  do {
   if (FUNC_0((uintptr_t)VAR_7++) != *VAR_8++)
    return (1);
  } while (--VAR_5 != 0 && !(*VAR_6 & VAR_1));
 }
 return (0);
}
