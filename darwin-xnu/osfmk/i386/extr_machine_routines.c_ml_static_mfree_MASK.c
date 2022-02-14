
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ vm_size_t ;
typedef scalar_t__ vm_offset_t ;
typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ ppnum_t ;
typedef int addr64_t ;
struct TYPE_5__ {scalar_t__ resident_count; scalar_t__ resident_max; } ;
struct TYPE_6__ {TYPE_1__ stats; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 TYPE_2__* VAR_2 ;
 int FUNC_2 (char*,scalar_t__,void*,int ,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*,int,int) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__,scalar_t__) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int VAR_3 ;
 int VAR_4 ;

void
FUNC_10(
 vm_offset_t VAR_5,
 vm_size_t VAR_6)
{
 addr64_t VAR_7;
 ppnum_t VAR_8;
 uint32_t VAR_9 = 0;
 FUNC_1(VAR_5 >= VAR_1);

 FUNC_1((VAR_5 & (VAR_0-1)) == 0);

 for (VAR_7 = VAR_5;
       VAR_7 < FUNC_6(VAR_5+VAR_6);
      VAR_7 += VAR_0) {
  VAR_8 = FUNC_3(VAR_2, VAR_7);
  if (VAR_8 != (vm_offset_t)((void*)0)) {
          VAR_2->stats.resident_count++;
   if (VAR_2->stats.resident_count >
       VAR_2->stats.resident_max) {
    VAR_2->stats.resident_max =
     VAR_2->stats.resident_count;
   }
   FUNC_4(VAR_2, VAR_7, VAR_7+VAR_0);
   FUNC_1(FUNC_5(VAR_8));
   if (FUNC_0(VAR_8)) {
    FUNC_7(VAR_8,(VAR_8+1));
    VAR_9++;
   }
  }
 }
 FUNC_8();
 VAR_3 -= VAR_9;
 VAR_4 -= VAR_9;
 FUNC_9();




}
